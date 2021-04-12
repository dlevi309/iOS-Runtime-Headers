/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, NSDictionary, REScriptASTNode;

@interface REScriptASTFeatureNode : REScriptASTNode {

	REScriptToken* _name;
	NSDictionary* _options;
	REScriptASTNode* _value;

}

@property (nonatomic,readonly) REScriptToken * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * value;              //@synthesize value=_value - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)name;
-(NSDictionary *)options;
-(REScriptASTNode *)value;
-(id)dependencies;
-(id)initWithName:(id)arg1 options:(id)arg2 expression:(id)arg3 ;
@end

