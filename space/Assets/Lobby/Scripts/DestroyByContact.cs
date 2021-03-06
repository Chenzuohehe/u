﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyByContact : MonoBehaviour
{

    public GameObject explosion;
    public GameObject playerExplosion;

    public int score;
    public GameController gameController;

    // Use this for initialization
    void Start()
    {
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null){
            gameController = gameControllerObject.GetComponent<GameController>();
        }
        if(gameControllerObject == null){
            Debug.Log("cannot fin 'gameController' script");
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Boundary"){
            return;
        }

        Instantiate(explosion, transform.position, transform.rotation);

        if (other.tag == "Player"){
            Instantiate(playerExplosion, other.transform.position, other.transform.rotation);
            gameController.GameOver();
        }
        gameController.addScore(score);
        Destroy(other.gameObject);
        Destroy(gameObject);
    }
}
