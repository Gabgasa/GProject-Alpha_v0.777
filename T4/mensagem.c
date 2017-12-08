/***************************************************************************
*  $MCI Módulo de implementação: MSG  Mensagem
*
*  Arquivo gerado:              MENSAGEM.c
*  Letras identificadoras:      MSG
*
*  Nome da base de software:    
*  Arquivo da base de software: D:\AUTOTEST\PROJETOS\MSG.BSW
*
*  Projeto: INF 1301 T4 Módulo Mensagem
*  Gestor: INF 1301 PUC-Rio
*  Autores: tap, gsa
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data        Observações
*     1        gsa    02/out/2017  início desenvolvimento
*
***************************************************************************/

#include   <stdio.h>
#include   <string.h>
#include   <memory.h>
#include   <malloc.h>
#include   <assert.h>

#define LISTA_OWN
#include "LISTA.h"
#undef LISTA_OWN

#define GRAFO_OWN
#include "GRAFO2.h"
#undef GRAFO_OWN


/***********************************************************************
*
*  $TC Tipo de dados: GRF Elemento da lista
*
*
***********************************************************************/

typedef struct MSG_tagMensagem {

        char[51] pDestinatario ;
               /* Ponteiro para Destinatario da mensagem*/

        char[51] pRemetente ;
               /* Ponteiro o Remetente da mensagem */
		
		char[500] pTexto 
			   /* Ponteiro para o texto da mensagem */

   } MSG_tpMensagem ;



/*****  Código das funções exportadas pelo módulo  *****/


/***********************************************************/
         

/***************************************************************************
*
*  Função: MSG  &Criar mensagem
*  ****/

   GRF_tppGrafo GRF_CriarGrafo( char* Remetente, char* Destinatario, char* Texto )
   {	
		MSG_tpPerfil *pMensagem;
		
		pMensagem = (MSG_tpMensagem *) malloc( sizeof( PRF_tpPerfil) );
		if ( pPerfil == NULL )
		{
			return MSG_CondRetFaltouMemoria ;
		}

   } /* Fim função: MSG  &Criar mensagem */


    
