/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Authentication/MessageAccountAuthenticationPlugin.bundle/MessageAccountAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface MessageAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showPasswordPromptWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_logWithAccount:(id)arg1 level:(unsigned char)arg2 reason:(id)arg3 message:(id)arg4 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(BOOL)_verifyAccount:(id)arg1 error:(id*)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_clientIsEntitled:(id)arg1 ;
-(id)_passwordPromptTitleWithCredential:(id)arg1 ;
-(id)_passwordPromptMessageWithAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)_bundleIdentifiersAllowedToPromptForAccount:(id)arg1 ;
@end

