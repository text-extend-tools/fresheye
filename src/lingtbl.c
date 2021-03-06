/*
 * Fresh Eye, a program for Russian writing style checking
 * Copyright (C) 1999  OnMind Systems
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * $Id: lingtbl.koi8-r,v 1.2 2002/06/27 04:13:00 vadimp Exp $
 */

#include "fe.h"

short int sim_ch [34] [34] =

{                   /* letters' similarity map */
   /* � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � */
  { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,9,0,0,0,0,1,1,0,0,1,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1,2}, /* � */
  { 0,0,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,1,9,1,0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,1,9,0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,9,0,0,0,1,0,0,0,0,0,0,0,0,0,1,3,0,0,0,1,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,1,0,0,0,0,9,9,0,0,2,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,2,1,1}, /* � */
  { 0,1,0,0,0,0,9,9,0,0,2,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,2,1,1}, /* � */
  { 0,0,0,0,3,0,0,0,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,1,0,0,3,9,0,0,0,0,0,0,0,0,0,3,1,0,0,0,3,1,1,1,0,0,0,0,0,0}, /* � */
  { 0,1,0,0,0,0,2,2,0,0,9,3,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,2,0,1,1,1}, /* � */
  { 0,0,0,0,0,0,0,0,0,0,2,9,0,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,3,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,1,0,0,0,0,0,0,0,1,0,9,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,1,0,0,0,0,0,0,0,1,0,1,9,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,1,0,0,0,0,0,0,0,1,0,1,3,9,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,2,0,0,0,0,1,1,0,0,1,0,0,0,0,0,9,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1,1}, /* � */
  { 0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,9,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,0,0,9,1,0,0,0,3,1,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,3,0,0,0,1,0,0,0,0,0,0,0,0,0,1,9,0,0,0,1,1,0,0,0,0,0,0,0,0}, /* � */
  { 0,1,0,1,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,9,0,0,0,0,0,0,0,1,0,1,2,1}, /* � */
  { 0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,9,0,1,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,0,0,3,1,0,0,0,9,0,0,0,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,0,0,0,3,1,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,9,3,3,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,0,0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,3,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,0,0,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,9,0,0,0,0,0,0}, /* � */
  { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,3,0,0,0}, /* � */
  { 0,1,0,0,0,0,1,1,0,0,2,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,9,0,1,1,1}, /* � */
  { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,9,0,0,0}, /* � */
  { 0,1,0,0,0,0,3,3,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,9,1,1}, /* � */
  { 0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,2,0,0,0,0,0,0,0,1,0,1,9,1}, /* � */
  { 0,2,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1,9}  /* � */
   /* � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � � */
};

int inf_letters [34] [3] = {  /* quantity of information in letters */
                              /* relative, average = 1000 */
/*by itself - in the beginning of a word */
    {    0,      0 },  /* dummy */
    {  802,    959 },  /* � */
    { 1232,   1129 },  /* � */
    {  944,    859 },  /* � */
    { 1253,   1193 },  /* � */
    { 1064,    951 },  /* � */
    {  759,   1232 },  /* � */
    { 1300,   1900 },  /* � */  /*set manually - dk*/
    { 1432,   1432 },  /* � */
    { 1193,    993 },  /* � */
    {  802,    767 },  /* � */
    { 1329,   1993 },  /* � */
    { 1032,    929 },  /* � */
    {  967,   1276 },  /* � */
    { 1053,    944 },  /* � */
    {  848,    711 },  /* � */
    {  695,    853 },  /* � */
    { 1088,    454 },  /* � */
    {  929,   1115 },  /* � */
    {  895,    793 },  /* � */
    {  848,   1002 },  /* � */
    { 1115,   1129 },  /* � */
    { 1793,   1022 },  /* � */
    { 1259,   1329 },  /* � */  /* [0] manually decreased! was 1359 */
    { 1593,   1393 },  /* � */
    { 1276,   1212 },  /* � */
    { 1476,   1012 },  /* � */
    { 1676,   1676 },  /* � */
    { 1993,   3986 },  /* � */
    { 1193,   3986 },  /* � */
    { 1253,   3986 },  /* � */
    { 1676,   1232 },  /* � */
    { 1476,   1793 },  /* � */
    { 1159,    967 }   /* � */
  };

char voc [VOCSIZE] [2] [ 20 ]= {       /* exceptions vocabulary */

  {"����", "����"},
  {"�����", "�����"},
  {"�����", "�����"},
  {"�����", "�����"},
  {"�����", "�����"},
  {"��", "��"},
  {"��", "��"},
  {"��", "�뫠"},
  {"��", "�뫨"},
  {"��", "�뫮"},
  {"��", "��"},
  {"��", "��"},
  {"�뫠", "��"},
  {"�뫨", "��"},
  {"�뫮", "��"},
  {"����", "��������"},
  {"�����", "�������"},
  {"�६�", "�६���"},
  {"�ᥣ�", "���ᥣ�"},
  {"��", "��"},
  {"����", "㦥"},
  {"���", "��㣠"},
  {"���", "��㣥"},
  {"���", "��㣮�"},
  {"���", "����"},
  {"��ࠪ", "��ࠪ��"},
  {"�᫨", "�᫨"},
  {"������", "������"},
  {"���", "���"},
  {"���", "⠪"},
  {"����", "���殢"},
  {"��ન", "��ન"},
  {"��", "��"},
  {"����", "����"},
  {"����", "������"},
  {"�����", "�����"},
  {"�����", "᭠砫�"},
  {"��", "��"},
  {"��", "��"},
  {"��", "��"},
  {"����", "���"},
  {"��", "��"},
  {"��", "��"},
  {"��", "��"},
  {"��", "��"},
  {"��", "��"},
  {"��", "��"},
  {"����", "����"},
  {"������", "������⭮�"},
  {"������", "⮬�"},
  {"�����", "�����"},
  {"���⮫��", "��᪮���"},
  {"⠪", "���"},
  {"⥬", "祬"},
  {"�", "�"},
  {"⮣��", "�����"},
  {"�", "�"},
  {"祬", "⥬"},
  {"��", "�"},
  {"����", "����"},
  {"蠣", "蠣��"},
  {"�⮩", "��"},
  {"���", "��"},

  {"", ""},
  {"", ""}
};
