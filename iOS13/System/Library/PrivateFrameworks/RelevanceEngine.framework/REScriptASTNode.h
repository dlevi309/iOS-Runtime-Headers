/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REScriptToken, NSSet;

@interface REScriptASTNode : NSObject {

	REScriptToken* _token;

}

@property (nonatomic,readonly) REScriptToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSSet * dependencies; 
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(REScriptToken *)token;
-(NSSet *)dependencies;
-(id)initWithToken:(id)arg1 ;
@end

