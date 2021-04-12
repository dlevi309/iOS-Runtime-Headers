/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMediaDownloadObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
-(void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;

@end

