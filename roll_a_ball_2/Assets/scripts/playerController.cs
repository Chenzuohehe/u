using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class playerController : MonoBehaviour {

    public float speed;
    private Rigidbody rb;
    private int count;
    public Text CountText;
    public Text WinText;

    private void Start()
    {

        rb = GetComponent<Rigidbody>();
        count = 0;
        setContext();
        WinText.text = "";
    }

    private void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        Vector3 moveMent = new Vector3(moveHorizontal, 0.0f, moveVertical);
        rb.AddForce(moveMent *  speed);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("PickUp"))
        {

            other.gameObject.SetActive(false);
            count++;
            setContext();

            if (count >= 8){
                WinText.text = "you win";
            }
        }
    }

    void setContext(){
        CountText.text = "count:" + count.ToString();
    }
}
