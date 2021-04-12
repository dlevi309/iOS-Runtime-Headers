/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECFormulaProcessor : NSObject {

	XlFormulaProcessor* mXlFormulaProcessorLasso;
	XlFormulaProcessor* mXlFormulaProcessorXl;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mLassoSheetNames;
	ChVector<OcText>* mXlSheetNames;
	XlLinkTable* mXlLinkTable;

}
+(id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(XlFormulaProcessor*)arg3 ;
-(id)init;
-(void)dealloc;
-(ChVector<OcText>*)sheetNamesFromWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)setupWithWorkbook:(id)arg1 xlNameTable:(XlNameTable*)arg2 sheetNames:(ChVector<OcText>*)arg3 xlLinkTable:(XlLinkTable*)arg4 lassoSyntax:(BOOL)arg5 ;
-(void)setupWithWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessorLasso;
-(XlFormulaProcessor*)xlFormulaProcessorXl;
@end

