/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(REScriptToken *)name;
-(REScriptToken *)type;
-(REScriptASTNode *)value;
-(id)dependencies;
-(id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3 ;
@end

