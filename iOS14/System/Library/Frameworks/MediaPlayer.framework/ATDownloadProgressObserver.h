/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;

@end

