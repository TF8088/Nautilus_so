//
// Created by marinho on 18-12-2024.
//
#include "gestor_simulacao.h"

void manufacturing_unit(){
  pthread_t production_line1, production_line2;

  pthread_create(&production_line1, NULL, production_line, NULL);
  pthread_create(&production_line2, NULL, production_line, NULL);

  return;
}
