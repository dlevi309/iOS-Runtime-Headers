/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class PHResourceLocalAvailabilityRequest, NSProgress, NSObject;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	PHResourceLocalAvailabilityRequest* _resourceRetrievalRequest;
	NSProgress* _resourceRetrievalRequestProgressParent;
	NSObject*<OS_dispatch_queue> _resourceRetrievingQueue;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 resourceRetrievalRequest:(id)arg3 retrievalRequestProgressParent:(id)arg4 ;
@end

