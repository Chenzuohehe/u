using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class Boundary
{
    public float xMin, xMax, zMin, zMax;
}

public class PlayerShipController : MonoBehaviour {

    public float speed;
    public float tilt;
    public Boundary boundary;

    private float nextFire;//下发子弹的时间
    public float fireRate;//发射间隔
    public GameObject shot;//用来保存子弹的预制件
    public Transform shotSqawn;//用来保存子弹的发射


    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButton("Fire1") && Time.time > nextFire){
            nextFire = Time.time + fireRate;
            Instantiate(shot, shotSqawn.position, shotSqawn.rotation);
            GetComponent<AudioSource>().Play();
        }
	}

    private void FixedUpdate()
    {
        //这是获取鼠标偏移，现在需要改成触屏

        //float moveHorizontal = Input.GetAxis("Horizontal");
        //float moveVertical = Input.GetAxis("Vertical");

        //Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);


        Vector3 movement;

        if (Input.touchCount == 1)
        {
            Vector2 move = Input.GetTouch(0).deltaPosition;
            movement = new Vector3(move.x, 0.0f, move.y);
        }
        else
        {
            float moveHorizontal = Input.GetAxis("Horizontal");
            float moveVertical = Input.GetAxis("Vertical");
            movement = new Vector3(moveHorizontal, 0.0f, moveVertical);
        }

        GetComponent<Rigidbody>().velocity = movement * speed;

        GetComponent<Rigidbody>().position = new Vector3(Mathf.Clamp(GetComponent<Rigidbody>().position.x, boundary.xMin, boundary.xMax),
                                                         0.0f,
                                                         Mathf.Clamp(GetComponent<Rigidbody>().position.z,boundary.zMin, boundary.zMax));

        GetComponent<Rigidbody>().rotation = Quaternion.Euler(0.0f,
                                                             0.0f,
                                                              GetComponent<Rigidbody>().velocity.x - tilt);

    }

}
