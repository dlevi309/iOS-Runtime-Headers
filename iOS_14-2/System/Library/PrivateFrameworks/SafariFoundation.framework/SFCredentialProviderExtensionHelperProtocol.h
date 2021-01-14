/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

