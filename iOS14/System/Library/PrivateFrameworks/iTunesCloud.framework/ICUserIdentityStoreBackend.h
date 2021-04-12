/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(BOOL)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(id)activeLockerAccountDSIDWithError:(id*)arg1;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2;
-(BOOL)updateActiveAccountDSID:(id)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1;
-(void)synchronize;
-(BOOL)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2;
-(BOOL)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(id)localStoreAccountPropertiesWithError:(id*)arg1;
-(id)activeAccountDSIDWithError:(id*)arg1;

@end

