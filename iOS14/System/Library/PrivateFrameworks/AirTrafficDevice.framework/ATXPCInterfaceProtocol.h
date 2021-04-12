/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ATXPCInterfaceProtocol
@required
-(void)clearSyncDataWithCompletion:(/*^block*/id)arg1;
-(void)requestKeybagSyncToPairedDeviceWithCompletion:(/*^block*/id)arg1;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1;
-(void)prioritizeAsset:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)keepATCAlive:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getSyncStateWithCompletion:(/*^block*/id)arg1;
-(void)cancelSyncWithCompletion:(/*^block*/id)arg1;
-(void)cancelAssetTransferForFailedAsset:(id)arg1;
-(void)restoreFromDeviceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)syncChangesForDataClass:(id)arg1 withPriority:(int)arg2;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getDataRestoreIsCompleteWithCompletion:(/*^block*/id)arg1;
-(void)lowBatteryNotificationWithCompletion:(/*^block*/id)arg1;
-(void)getAssetMetricswithCompletion:(/*^block*/id)arg1;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)requestSyncForLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

