/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject {

	HDProfile* _profile;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	BOOL _didStartTransaction;
	/*^block*/id _sessionCompletion;
	NSString* _bundleIdentifier;
	NSUUID* _sessionIdentifier;

}

@property (nonatomic,copy) id sessionCompletion;                              //@synthesize sessionCompletion=_sessionCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)sessionIdentifier;
-(unsigned long long)requestCount;
-(void)addRequest:(id)arg1 ;
-(void)beginPromptTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)endPromptTransactionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2 ;
-(void)beginPromptSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)sessionDescriptor;
-(void)timeoutExpired;
-(id)sessionCompletion;
-(void)setSessionCompletion:(id)arg1 ;
@end

