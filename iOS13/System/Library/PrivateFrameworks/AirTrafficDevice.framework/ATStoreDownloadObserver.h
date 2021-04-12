/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ATStoreDownloadObserver <NSObject>
@optional
-(void)ATStoreDownloadService:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)ATStoreDownloadService:(id)arg1 didChangeStateForAsset:(id)arg2 oldState:(long long)arg3 newState:(long long)arg4;
-(void)ATStoreDownloadService:(id)arg1 didUpdateProgressForAsset:(id)arg2 progress:(float)arg3;
-(void)ATStoreDownloadService:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 cancelPendingAssetsInBatch:(BOOL)arg4;

@end

