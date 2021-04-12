/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(REScriptToken *)binaryOperator;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(id)initWithOperator:(id)arg1 expression:(id)arg2 ;
@end

