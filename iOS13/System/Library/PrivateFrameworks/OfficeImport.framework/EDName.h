/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, OITSUPointerKeyDictionary, EDString, EDFormula;

@interface EDName : NSObject {

	NSString* _formulaString;
	OITSUPointerKeyDictionary* _maxWorksheetReferences;
	EDString* _nameString;
	EDFormula* _formula;
	unsigned long long _sheetIndex;

}

@property (nonatomic,retain) EDString * nameString;                                             //@synthesize nameString=_nameString - In the implementation block
@property (nonatomic,readonly) BOOL isInternalFunction; 
@property (nonatomic,readonly) NSString * internalFunctionName; 
@property (nonatomic,readonly) EDFormula * formula;                                             //@synthesize formula=_formula - In the implementation block
@property (assign,nonatomic) unsigned long long sheetIndex;                                     //@synthesize sheetIndex=_sheetIndex - In the implementation block
@property (nonatomic,readonly) OITSUPointerKeyDictionary * maxWorksheetReferences; 
+(id)name;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToString:(id)arg1 ;
-(EDString *)nameString;
-(void)setNameString:(EDString *)arg1 ;
-(EDFormula *)formula;
-(unsigned long long)sheetIndex;
-(BOOL)isEqualToEDName:(id)arg1 ;
-(BOOL)isInternalFunction;
-(NSString *)internalFunctionName;
-(void)setFormula:(id)arg1 workbook:(id)arg2 ;
-(OITSUPointerKeyDictionary *)maxWorksheetReferences;
-(void)setSheetIndex:(unsigned long long)arg1 ;
-(id)formulaString;
-(void)setFormulaString:(id)arg1 workbook:(id)arg2 ;
@end

