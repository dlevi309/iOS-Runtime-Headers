/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject {

	ACAccount* _account;
	NSDictionary* _authenticationResults;
	unsigned long long _credentialSource;

}

@property (nonatomic,readonly) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationResults;              //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) unsigned long long credentialSource;               //@synthesize credentialSource=_credentialSource - In the implementation block
+(id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 option:(id)arg3 ;
-(ACAccount *)account;
-(unsigned long long)credentialSource;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4 ;
-(NSDictionary *)authenticationResults;
@end

