/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKSourceStoreServer <NSObject>
@required
-(void)remote_fetchAllSourcesWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3;

@end

