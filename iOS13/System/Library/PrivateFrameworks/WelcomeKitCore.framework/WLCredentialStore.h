/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class WLAuthenticationCredentials, WLDeviceAuthentication;

@interface WLCredentialStore : NSObject {

	WLAuthenticationCredentials* _credentials;
	WLDeviceAuthentication* _authentication;

}
+(id)sharedInstance;
-(id)init;
-(id)currentAuthentication;
-(id)credentialsForAuthentication:(id)arg1 ;
-(void)setCredentials:(id)arg1 forAuthentication:(id)arg2 ;
@end

