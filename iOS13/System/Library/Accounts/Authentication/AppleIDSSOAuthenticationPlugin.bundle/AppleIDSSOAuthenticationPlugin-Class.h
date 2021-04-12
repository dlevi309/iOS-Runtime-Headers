/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/AppleIDSSOAuthenticationPlugin.bundle/AppleIDSSOAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class AKAppleIDAuthenticationController, NSString;

@interface AppleIDSSOAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin> {

	AKAppleIDAuthenticationController* _authController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_authController;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_attemptInteractiveCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptSilentCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_silentAuthContextForAccount:(id)arg1 rawPassword:(id)arg2 store:(id)arg3 options:(id)arg4 ;
-(id)_standardAuthContextForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 ;
@end

