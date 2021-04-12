/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol SFCredentialProviderExtensionHelperProtocol
@required
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCredentialProviderExtensionStateWithCompletion:(/*^block*/id)arg1;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(/*^block*/id)arg2;

@end

