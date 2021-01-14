/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol EFHelper;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDFormula, EFTableData, NSString;

@interface EFormula : NSObject {

	id<EFHelper> mHelper;
	EFLexer* mYylex;
	Class mFormulaClass;
	EDFormula* mFormula;
	EFTableData* mTableData;
	NSString* mErrMsg;

}
+(id)singletonEFormula;
+(id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3 ;
-(unsigned long long)resolveName:(const char*)arg1 ;
-(id)tableData;
-(void)setTableData:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2 ;
-(void)setFormula:(id)arg1 ;
-(void)setFormulaClass:(Class)arg1 ;
-(void)setFormulaHelper:(id)arg1 ;
-(id)stringToTokens:(id)arg1 ;
-(id)formulaHelper;
-(Class)formulaClass;
-(unsigned long long)resolveSheet:(const char*)arg1 isCurrentSheet:(BOOL*)arg2 ;
-(id)resolveTable:(const char*)arg1 sheetIndex:(unsigned long long*)arg2 ;
@end

