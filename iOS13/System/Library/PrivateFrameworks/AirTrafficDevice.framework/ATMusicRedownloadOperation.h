/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMediaRedownloadRequest, ICMediaAssetDownloadRequest;

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation {

	ICMediaRedownloadRequest* _redownloadRequest;
	ICMediaAssetDownloadRequest* _assetDownloadRequest;

}
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)_musicAppBundleID;
-(void)_getICStoreMediaResponseItemWithRequestContext:(id)arg1 playBackEndPointType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

