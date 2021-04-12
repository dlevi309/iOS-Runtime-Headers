/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, NSArray;

@interface REScriptASTFunctionCallNode : REScriptASTNode {

	REScriptToken* _functionIdentifier;
	NSArray* _arguments;

}

@property (nonatomic,readonly) REScriptToken * functionIdentifier;              //@synthesize functionIdentifier=_functionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * arguments;                             //@synthesize arguments=_arguments - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(NSArray *)arguments;
-(REScriptToken *)functionIdentifier;
-(id)initWithFunctionName:(id)arg1 arguments:(id)arg2 ;
@end

