/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SFExternalCredentialIdentityStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(id)_credentialIdentityStoreWithIdentifier:(id)arg1 ;
-(void)getCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

