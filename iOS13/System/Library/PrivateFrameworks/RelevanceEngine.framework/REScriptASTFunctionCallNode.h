/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)arguments;
-(id)dependencies;
-(REScriptToken *)functionIdentifier;
-(id)initWithFunctionName:(id)arg1 arguments:(id)arg2 ;
@end

