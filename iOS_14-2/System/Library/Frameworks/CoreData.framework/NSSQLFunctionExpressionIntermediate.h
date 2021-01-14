/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate
+(BOOL)functionIsAcceptableAsAggregate:(id)arg1 ;
-(id)_generateNowStringInContext:(id)arg1 ;
-(id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg1 forExpression:(id)arg2 inContext:(id)arg3 ;
-(id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg1 forAttribute:(id)arg2 inContext:(id)arg3 ;
-(id)_generateMathStringWithSymbol:(id)arg1 inContext:(id)arg2 ;
-(id)_generateDistinctStringInContext:(id)arg1 ;
-(id)_generateArgumentStringForCollection:(id)arg1 inContext:(id)arg2 ;
-(id)_generateRtreeIndexStringInContext:(id)arg1 ;
-(id)_generateLengthStringInContext:(id)arg1 ;
-(id)_generateSelectForAggregateStringWithSymbol:(id)arg1 argument:(id)arg2 inContext:(id)arg3 ;
-(id)_generateType4SQLForSymbol:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForCountInContext:(id)arg1 ;
-(id)generateType2SQLString:(id)arg1 inContext:(id)arg2 ;
-(id)generateType1SQLString:(id)arg1 inContext:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isFunctionScoped;
-(id)generateType3SQLString:(id)arg1 keypathOnly:(BOOL)arg2 inContext:(id)arg3 ;
@end

