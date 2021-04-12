/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

