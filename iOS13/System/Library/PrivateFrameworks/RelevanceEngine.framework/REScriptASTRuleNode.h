/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, NSDictionary, REScriptASTNode;

@interface REScriptASTRuleNode : REScriptASTNode {

	REScriptToken* _type;
	REScriptToken* _name;
	NSDictionary* _options;
	REScriptASTNode* _expression;

}

@property (nonatomic,readonly) REScriptToken * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) REScriptToken * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)name;
-(NSDictionary *)options;
-(REScriptToken *)type;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4 ;
@end

