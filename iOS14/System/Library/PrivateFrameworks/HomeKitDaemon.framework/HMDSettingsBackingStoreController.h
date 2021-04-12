/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSettingsBackingStoreController <NSObject>
@required
-(void)start;
-(void)registerForSettingsTransactions:(id)arg1;
-(id)settingTransactionWithName:(id)arg1;
-(void)runSettingTransaction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runSettingTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

