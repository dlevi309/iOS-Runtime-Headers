/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, REScriptASTNode;

@interface REScriptASTDeclarationNode : REScriptASTNode {

	REScriptToken* _type;
	REScriptToken* _name;
	REScriptASTNode* _value;

}

@property (nonatomic,readonly) REScriptToken * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) REScriptToken * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * value;              //@synthesize value=_value - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptToken *)name;
-(REScriptToken *)type;
-(REScriptASTNode *)value;
-(id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3 ;
@end

