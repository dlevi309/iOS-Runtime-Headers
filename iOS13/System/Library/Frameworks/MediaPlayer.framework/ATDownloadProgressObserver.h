/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1;

@end

