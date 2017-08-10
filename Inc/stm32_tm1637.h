#pragma once

void tm1637Init(void);
void tm1637DisplayDecimal(int v, int displaySeparator);
void tm1637SetBrightness(char brightness);
void tm1637DisplayRaw(int v1, int v2, int v3, int v4);
