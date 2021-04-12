/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/ESAccountAuthenticator.bundle/ESAccountAuthenticator
*/


@protocol ACDAccountAuthenticationPlugin <NSObject>
@optional
-(BOOL)isPushSupportedForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(id)credentialForAccount:(id)arg1 client:(id)arg2;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3;
-(void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(/*^block*/id)arg3;
-(id)renewalIDsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
-(id)renewalIDForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4;

@end

