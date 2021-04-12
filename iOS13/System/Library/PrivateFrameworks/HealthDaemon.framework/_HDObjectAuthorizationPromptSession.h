/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject {

	HDProfile* _profile;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	BOOL _didStartTransaction;
	NSString* _bundleIdentifier;
	NSUUID* _sessionIdentifier;
	/*^block*/id _sessionCompletion;

}

@property (nonatomic,copy) id sessionCompletion;                              //@synthesize sessionCompletion=_sessionCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(void)addRequest:(id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)requestCount;
-(NSUUID *)sessionIdentifier;
-(id)sessionDescriptor;
-(void)beginPromptTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)endPromptTransactionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2 ;
-(void)beginPromptSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)timeoutExpired;
-(id)sessionCompletion;
-(void)setSessionCompletion:(id)arg1 ;
@end

