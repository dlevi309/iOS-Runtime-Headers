/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode;

@interface REScriptASTExpressionNode : REScriptASTNode {

	REScriptASTNode* _prefixExpression;
	REScriptASTNode* _binaryExpressions;

}

@property (nonatomic,readonly) REScriptASTNode * prefixExpression;               //@synthesize prefixExpression=_prefixExpression - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * binaryExpressions;              //@synthesize binaryExpressions=_binaryExpressions - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)prefixExpression;
-(REScriptASTNode *)binaryExpressions;
-(id)initWithPrefixExpression:(id)arg1 binaryExpression:(id)arg2 ;
@end

