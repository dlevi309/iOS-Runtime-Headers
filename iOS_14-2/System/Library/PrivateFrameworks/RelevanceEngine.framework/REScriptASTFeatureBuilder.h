/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTObjectBuilder.h>

@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder
-(id)_buildTransformedFeature:(id)arg1 features:(id)arg2 node:(id)arg3 error:(id*)arg4 ;
-(BOOL)_loadIndexFromNode:(id)arg1 index:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)objectTypeErrorDescription;
-(id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3 ;
-(id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2 ;
@end

