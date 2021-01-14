/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject {

	ACAccount* _account;
	NSDictionary* _authenticationResults;

}

@property (nonatomic,readonly) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationResults;              //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) unsigned long long credentialSource; 
+(id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 options:(id)arg3 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 options:(id)arg3 ;
-(NSDictionary *)authenticationResults;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4 ;
-(unsigned long long)credentialSource;
@end

