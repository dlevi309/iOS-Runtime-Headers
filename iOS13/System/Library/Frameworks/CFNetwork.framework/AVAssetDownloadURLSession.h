/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSession.h>

@interface AVAssetDownloadURLSession : NSURLSession
+(id)sessionWithConfiguration:(id)arg1 assetDownloadDelegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
@end

