/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SFExternalCredentialIdentityStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(id)_credentialIdentityStoreForBundleIdentifier:(id)arg1 ;
-(void)getPrimaryCredentialIdentityStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

