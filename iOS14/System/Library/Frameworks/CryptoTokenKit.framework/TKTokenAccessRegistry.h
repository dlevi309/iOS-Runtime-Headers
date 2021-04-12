/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenAccessDB, TKTokenAccessUserPrompt;
@interface TKTokenAccessRegistry : NSObject {

	id<TKTokenAccessDB> _accessDB;
	id<TKTokenAccessUserPrompt> _prompt;

}
-(id)init;
-(BOOL)_shouldAutomaticallyAllowRequest:(id)arg1 ;
-(BOOL)evaluateRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isPersistenceEnabled;
-(long long)_fetchAccessForRequest:(id)arg1 ;
-(void)setAccessDB:(id)arg1 ;
-(BOOL)_platformAllowsAllRequests;
-(void)setUserPrompt:(id)arg1 ;
-(void)_storeAccess:(long long)arg1 forRequest:(id)arg2 ;
-(long long)_promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithAccessDB:(id)arg1 userPrompt:(id)arg2 ;
@end

