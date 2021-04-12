/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode {

	REScriptToken* _prefixOperator;
	REScriptASTNode* _node;

}

@property (nonatomic,readonly) REScriptToken * prefixOperator;              //@synthesize prefixOperator=_prefixOperator - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * node;                      //@synthesize node=_node - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)node;
-(id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2 ;
-(REScriptToken *)prefixOperator;
@end

