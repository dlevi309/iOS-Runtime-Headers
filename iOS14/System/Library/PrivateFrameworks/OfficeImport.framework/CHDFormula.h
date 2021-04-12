/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {

	EDReferenceCollection* mReferences;
	EDWorkbook* mWorkbook;

}
+(id)formulaWithReferences:(id)arg1 ;
+(id)formulaWithReference:(id)arg1 ;
-(id)initWithReference:(id)arg1 ;
-(id)references;
-(void)setReferences:(id)arg1 ;
-(void)setWorkbook:(id)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)initWithReferences:(id)arg1 ;
-(id)referencesFromFormula;
-(BOOL)isConstantStringFormula;
-(id)constantValuesFromConstantStringFormula;
-(void)prepareTokens;
-(id)initWithWorkbook:(id)arg1 ;
@end

