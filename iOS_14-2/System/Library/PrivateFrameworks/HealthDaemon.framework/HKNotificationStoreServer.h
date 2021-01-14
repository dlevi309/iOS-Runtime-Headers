/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKNotificationStoreServer <NSObject>
@required
-(void)remote_fetchBadgeForDomain:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_postNotificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end

