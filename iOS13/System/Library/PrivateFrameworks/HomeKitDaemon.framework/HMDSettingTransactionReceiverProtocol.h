/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSettingTransactionReceiverProtocol <NSObject>
@required
-(void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingGroupModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;
-(void)transactionSettingModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;
-(void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;

@end

