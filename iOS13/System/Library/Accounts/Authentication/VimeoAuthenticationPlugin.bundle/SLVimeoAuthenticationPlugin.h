/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/VimeoAuthenticationPlugin.bundle/VimeoAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface SLVimeoAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
-(id)_consumerKey;
-(id)_consumerSecret;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isClientEntitledToAccessVimeo:(id)arg1 ;
-(void)_authenticationAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleAccessTokenResponseData:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

