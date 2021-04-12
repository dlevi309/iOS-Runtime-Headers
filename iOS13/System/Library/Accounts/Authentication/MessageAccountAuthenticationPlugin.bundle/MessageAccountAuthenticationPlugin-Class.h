/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/MessageAccountAuthenticationPlugin.bundle/MessageAccountAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface MessageAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_logWithAccount:(id)arg1 level:(unsigned char)arg2 reason:(id)arg3 message:(id)arg4 ;
-(BOOL)_clientIsEntitled:(id)arg1 ;
-(BOOL)_verifyAccount:(id)arg1 error:(id*)arg2 ;
-(void)_showPasswordPromptWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_passwordPromptTitleWithCredential:(id)arg1 ;
-(id)_passwordPromptMessageWithAccount:(id)arg1 ;
-(id)_promptBundleIdentifierWhitelistWithAccount:(id)arg1 ;
@end

