/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, PHResourceDownloadRequest, NSProgress;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PHResourceDownloadRequest* _downloadRequest;
	NSProgress* _downloadRequestProgressParent;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 downloadRequestProgressParent:(id)arg4 ;
@end

