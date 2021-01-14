/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKAuthorizationStoreWriteServer <NSObject>
@required
-(void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;

@end

