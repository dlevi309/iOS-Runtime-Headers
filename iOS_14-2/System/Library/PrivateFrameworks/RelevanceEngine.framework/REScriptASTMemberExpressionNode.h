/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode, REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptToken* _member;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptToken * member;                    //@synthesize member=_member - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)member;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(id)initWithMember:(id)arg1 expression:(id)arg2 ;
@end

