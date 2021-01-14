/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/


@protocol MSAccountsImplementer <NSObject>
@optional
-(void)openConnection;

@required
-(void)getAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getCachedAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateDefaultMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getDefaultMediaService:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)addMediaServiceToHome:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateProperty:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 withOptions:(id)arg4 completion:(/*^block*/id)arg5;
-(void)getServiceConfigurationInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getDefaultMediaServiceForAllUsers:(/*^block*/id)arg1;
-(void)getPublicInfoForBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setVersion:(unsigned long long)arg1 completion:(/*^block*/id)arg2;

@end

