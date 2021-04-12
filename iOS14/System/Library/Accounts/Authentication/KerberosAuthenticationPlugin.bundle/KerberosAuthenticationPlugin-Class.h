/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Authentication/KerberosAuthenticationPlugin.bundle/KerberosAuthenticationPlugin
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface KerberosAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_promptForPasswordAndAuthenticateAccount:(id)arg1 authAttemptsRemaining:(unsigned)arg2 client:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_authenticateAccount:(id)arg1 password:(id)arg2 certificate:(id)arg3 client:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentAuthenticationDialogForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_useCertificate:(id)arg1 toAuthenticateAccount:(id)arg2 client:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

