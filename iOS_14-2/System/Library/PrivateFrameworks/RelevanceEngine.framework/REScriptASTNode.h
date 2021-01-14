/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REScriptToken, NSSet;

@interface REScriptASTNode : NSObject {

	REScriptToken* _token;

}

@property (nonatomic,readonly) REScriptToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSSet * dependencies; 
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(NSSet *)dependencies;
-(REScriptToken *)token;
-(id)initWithToken:(id)arg1 ;
@end

