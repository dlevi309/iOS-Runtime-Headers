/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSASAssetDownloaderDelegate <NSObject>
@required
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1;

@end

