#pragma once
/******************************************************************************/
/* File   : McalEep.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalEep.hpp"
#include "CfgMcalEep.hpp"
#include "McalEep_core.hpp"
#include "infMcalEep_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalEep:
      INTERFACES_EXPORTED_MCALEEP
      public abstract_module
   ,  public class_McalEep_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalEep_Type* lptrConst = (ConstMcalEep_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALEEP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALEEP_CONST,       MCALEEP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALEEP_CONFIG_DATA, MCALEEP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALEEP_CODE) DeInitFunction (void);
      FUNC(void, MCALEEP_CODE) MainFunction   (void);
      MCALEEP_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalEep, MCALEEP_VAR) McalEep;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
