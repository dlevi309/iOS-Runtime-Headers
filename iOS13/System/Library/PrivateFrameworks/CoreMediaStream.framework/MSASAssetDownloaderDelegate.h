/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSASAssetDownloaderDelegate <NSObject>
@required
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1;

@end

