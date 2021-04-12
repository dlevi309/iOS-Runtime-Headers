/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode;

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptASTNode* _startIndex;
	REScriptASTNode* _endIndex;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)startIndex;
-(REScriptASTNode *)expression;
-(REScriptASTNode *)endIndex;
-(id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3 ;
@end

