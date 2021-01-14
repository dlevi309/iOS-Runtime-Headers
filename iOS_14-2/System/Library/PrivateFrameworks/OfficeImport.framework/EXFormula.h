/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFormula : NSObject
+(id)edFormulaFromXmlFormulaElement:(xmlNode*)arg1 formulaClass:(Class)arg2 state:(id)arg3 ;
+(Class)formulaClassFromXmlFormulaElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readFrom:(xmlNode*)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(EDCellHeader*)arg5 edRowBlocks:(id)arg6 state:(id)arg7 ;
+(void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4 ;
+(id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6 ;
+(id)edFormulaFromXmlFormulaElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(EDCellHeader*)arg4 edRowBlocks:(id)arg5 state:(id)arg6 ;
+(void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2 ;
+(id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3 ;
@end

