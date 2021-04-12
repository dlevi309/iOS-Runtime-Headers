/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(void)synchronize;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)localStoreAccountPropertiesWithCompletion:(/*^block*/id)arg1;
-(id)localStoreAccountPropertiesWithError:(id*)arg1;
-(void)setLocalStoreAccountProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1;

@end

