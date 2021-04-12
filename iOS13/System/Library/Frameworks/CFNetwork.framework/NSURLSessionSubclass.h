/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLSessionSubclass <NSObject>
@required
-(id)_dataTaskWithTaskForClass:(id)arg1;
-(id)_uploadTaskWithTaskForClass:(id)arg1;
-(id)_downloadTaskWithTaskForClass:(id)arg1;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
-(id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
-(id)webSocketTaskForRequest:(id)arg1;
-(id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_completeInvalidation:(BOOL)arg1;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1;

@end

