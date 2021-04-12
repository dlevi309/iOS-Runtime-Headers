/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol EDFormulaBuilding <NSObject>
@required
-(void)removeTokenAtIndex:(unsigned long long)arg1;
-(void)setWarning:(int)arg1;
-(int)tokenTypeAtIndex:(unsigned long long)arg1;
-(BOOL)isSupportedFormula;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2;
-(int)warningType;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2;
-(BOOL)convertToList:(unsigned)arg1 withFinalParen:(BOOL)arg2;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3;
-(BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2;
-(BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3;
-(BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
-(BOOL)convertToList:(unsigned)arg1;
-(BOOL)convertToIntersect:(unsigned)arg1;
-(BOOL)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned)arg1;
-(BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3;
-(BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)uppercaseArgAtIndex:(unsigned)arg1;

@end

