/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@class SFCredentialProviderExtensionHelperProxy;

@interface ASCredentialIdentityStore : NSObject {

	SFCredentialProviderExtensionHelperProxy* _helperProxy;

}
+(id)sharedStore;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initCredentialIdentityStore;
-(void)getCredentialIdentityStoreStateWithCompletion:(/*^block*/id)arg1 ;
@end

