/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)options;
-(id)dependencies;
-(REScriptToken *)name;
-(REScriptToken *)type;
-(REScriptASTNode *)expression;
-(id)initWithType:(id)arg1 options:(id)arg2 name:(id)arg3 expression:(id)arg4 ;
@end

