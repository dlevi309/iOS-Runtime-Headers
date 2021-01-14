/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authController;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)_attemptInteractiveCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptSilentCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_silentAuthContextForAccount:(id)arg1 rawPassword:(id)arg2 store:(id)arg3 options:(id)arg4 ;
-(id)_standardAuthContextForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 ;
@end

