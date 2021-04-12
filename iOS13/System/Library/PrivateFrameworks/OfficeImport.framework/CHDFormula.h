/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

