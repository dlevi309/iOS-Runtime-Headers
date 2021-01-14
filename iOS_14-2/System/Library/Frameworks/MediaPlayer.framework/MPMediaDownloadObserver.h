/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMediaDownloadObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
-(void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;

@end

