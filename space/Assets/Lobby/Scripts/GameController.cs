﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

    public GameObject hazard;
    public Vector3 spawnValue;
    public int hazardCount;

    public float spawnWait;//设置障碍生成的时间间隔
    public float startWait;//开始生成障碍的准备时间

    public float waveWait;

    private int score;
    public Text scoreText;

    public Text gameOverText;
    private bool gameOver;

    public Text restartText;
    private bool restart;

	// Use this for initialization
	void Start () {

        gameOverText.text = "";
        gameOver = false;
        restartText.text = "";
        restart = false;
        score = 0;
        UpdateScore();
        StartCoroutine(SpawnWaves());

    }

    public void GameOver(){
        gameOver = true;
        gameOverText.text = "Game Over";
    }


    void UpdateScore()
    {
        scoreText.text = "Score: " + score;
    }
    public void addScore(int value)
    {
        score += value;
        UpdateScore();
    }

    // Update is called once per frame
    void Update () {
        if(restart){
            if(Input.GetKeyDown(KeyCode.R)){
                Application.LoadLevel(Application.loadedLevel);
            }
        }
	}

    IEnumerator SpawnWaves(){
        //这是让游戏不暂停，代码暂停一会儿的意思,为了使用 yield return 还需要把返回值设置成IEnumerator
        yield return new WaitForSeconds(startWait);

        while(true){
            for (int i = 0; i < hazardCount; i++)
            {
                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValue.x, spawnValue.x),
                                                 spawnValue.y,
                                                 spawnValue.z);
                Quaternion spawnRotation = Quaternion.identity;
                Instantiate(hazard, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnWait);

                if(gameOver){
                    restart = true;
                    restartText.text = "Press 'R' to Restart";
                }

            }
            yield return new WaitForSeconds(waveWait);
        }
    }


}
