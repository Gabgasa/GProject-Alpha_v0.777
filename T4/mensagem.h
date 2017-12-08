#if ! defined( MENSAGEM_ )
#define MENSAGEM_

/***************************************************************************
*
*  $MCD Módulo de definição: MSG  Mensagem
*
*  Arquivo gerado:              Mensagem.h
*  Letras identificadoras:      MSG
*
*  Nome da base de software:    Arcabouço para a automação de testes de programas redigidos em C
*  Arquivo da base de software: D:\AUTOTEST\PROJETOS\MENSAGEM.BSW
*
*  Projeto: INF 1301 Implementação de um módulo mensagem
*  Gestor:  INF 1301 PUC-Rio
*  Autores: gsa  ,tap
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
*
*     1       gsa  06/dez/2017  início desenvolvimento
*
*  $ED Descrição do módulo
*     Controla a lista de mensagems de um perfil como remoção, inserção, visualização, etc.
*     
*     
*
*     Uma mensagem é composta de Três campos: Remetente, Destinatário, Mensagem.
*     Sendo os três campos do struct strings de tamanho 51, 51 e 500 respectivamente. 
*
*
*     
*
*     
*       
***************************************************************************/



#if defined( MENSAGEM_OWN )
   #define MENSAGEM_EXT
#else
   #define MENSAGEM_EXT extern
#endif

/***** Declarações exportadas pelo módulo *****/

/* Tipo referência para uma mensagem */

//typedef struct PRF_tagPerfil * PRF_tppPerfil ;


/***********************************************************************
*
*  $TC Tipo de dados: PRF Condições de retorno
*
*
*  $ED Descrição do tipo
*     Condições de retorno das funções do PERFIL
*
***********************************************************************/

   typedef enum {

         MSG_CondRetOK ,
               /* Concluiu corretamente */
			            
         MSG_CondRetNaoAchou ,
               /* Não encontrou o perfil procurado */

         MSG_CondRetFaltouMemoria ,
               /* Faltou memória ao tentar criar uma mensagem */

	MSG_CondRetGrafoVazio 
		       /* O grafo recebido está vazio */

   } MSG_tpCondRet ;


/***********************************************************************
*
*  $FC Função: MSG  &Criar mensagem
*
*  $ED Descrição da função
*     
*     
*
*  $EP Parâmetros
*     pDestinatario  - string contendo o email do destinatário.
*
*     pRemetente     - string contendo o email do remetente.
*                     
*     pTexto    - ponteiro para a string que contém a mensagem que será criada.
*
*     
*
*  $FV Valor retornado
*     tpMensagem - Se a mensagem for criada corretamente.
*     PRF_CondRetGrafoNaoExiste - Se o grafo não existe 
*
***********************************************************************/


MSG_tpMensagem MSG_CriarMensagem( char* pRemetente,
				char* pDestinatario,
				char* pTexto) ;


/***********************************************************************
*
*  $FC Função: MSG  &Obter Destinatario
*
*  $ED Descrição da função
*     
*     
*
*  $EP Parâmetros
*     
*
*     
*
*  $FV Valor retornado
*     tpMensagem - Se a mensagem for criada corretamente.
*     PRF_CondRetGrafoNaoExiste - Se o grafo não existe 
*
***********************************************************************/

  
