/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ATStoreDownloadObserver <NSObject>
@optional
-(void)ATStoreDownloadService:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)ATStoreDownloadService:(id)arg1 didChangeStateForAsset:(id)arg2 oldState:(long long)arg3 newState:(long long)arg4;
-(void)ATStoreDownloadService:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 cancelPendingAssetsInBatch:(BOOL)arg4;
-(void)ATStoreDownloadService:(id)arg1 didUpdateProgressForAsset:(id)arg2 progress:(float)arg3;

@end

