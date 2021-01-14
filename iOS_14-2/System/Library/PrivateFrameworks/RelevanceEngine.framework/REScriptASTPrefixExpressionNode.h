/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(REScriptASTNode *)node;
-(id)dependencies;
-(id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2 ;
-(REScriptToken *)prefixOperator;
@end

