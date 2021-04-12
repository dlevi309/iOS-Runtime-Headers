/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTBinaryExpressionNode : REScriptASTNode {

	REScriptToken* _binaryOperator;
	REScriptASTNode* _expression;

}

@property (nonatomic,readonly) REScriptToken * binaryOperator;              //@synthesize binaryOperator=_binaryOperator - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * expression;                //@synthesize expression=_expression - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(REScriptToken *)binaryOperator;
-(id)initWithOperator:(id)arg1 expression:(id)arg2 ;
@end

