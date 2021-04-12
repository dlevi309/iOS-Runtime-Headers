/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

