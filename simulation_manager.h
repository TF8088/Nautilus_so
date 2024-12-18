//
// Created by marinho on 18-12-2024.
//

#ifndef MAIN_H
#define MAIN_H
//Libraries
#include <signal.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#define STORAGE_SIZE 5 //units
#define PRODUCTION_TIME 3 //seconds

//Manufacturing Unit

void manufacturing_unit();
void production_line();

//Expedition Request Generator
void requests_generator();

//Interruptions

void interruption_ctrl_c();

void interruption_ctrl_z();

#endif //MAIN_H
