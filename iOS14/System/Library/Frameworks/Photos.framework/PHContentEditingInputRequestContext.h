/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequestContext.h>

@class PHContentEditingInputResult, PHAdjustmentDataRequest, PHVideoRequest, PHImageRequest, NSProgress, PHImageResourceChooser, NSArray, NSMutableIndexSet, PAImageConversionServiceClient, PHContentEditingInputRequestOptions;

@interface PHContentEditingInputRequestContext : PHMediaRequestContext {

	PHContentEditingInputResult* _contentEditingInputResult;
	BOOL _useRAWAsUnadjustedBase;
	PHAdjustmentDataRequest* _adjustmentRequest;
	PHVideoRequest* _videoRequest;
	unsigned long long _imageBaseRequestIndex;
	PHImageRequest* _displayImageRequest;
	os_unfair_lock_s _lock;
	unsigned long long _inflightMediaRequestCount;
	NSProgress* _adjustmentProgress;
	NSProgress* _videoProgress;
	NSProgress* _imageProgress;
	PHImageResourceChooser* _backupChooser;
	NSArray* _assetResources;
	NSMutableIndexSet* _requestIndexesOfAssetResourceRequests;
	PAImageConversionServiceClient* _imageConversionClient;
	PHContentEditingInputRequestOptions* _options;

}

@property (nonatomic,readonly) PHContentEditingInputRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(id)_assetResources;
-(PHContentEditingInputRequestOptions *)options;
-(id)progresses;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)processAndReturnResultsWithRequest:(id)arg1 ;
-(id)initialRequests;
-(BOOL)_shouldRequestImage;
-(id)_lazyAdjustmentProgress;
-(id)_videoBehaviorSpecForBaseVersion:(long long)arg1 ;
-(id)_imageBehaviorSpecForBaseVersion:(long long)arg1 ;
-(long long)_adjustmentBaseVersionFromResult:(id)arg1 request:(id)arg2 canHandleAdjustmentData:(BOOL*)arg3 ;
-(BOOL)_canSkipMediaMetadataCheckWithBaseVersion:(long long)arg1 ;
-(void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(BOOL)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_baseMediaRequestsForBaseVersion:(long long)arg1 error:(id*)arg2 ;
-(void)_prepareAndAddMediaRequestsToChildRequests:(id)arg1 ;
-(long long)_assetResourceTypeForImageWithBaseVersion:(long long)arg1 ;
-(id)_assetResourceForType:(long long)arg1 ;
-(id)_largestUnadjustedDerivativeImageResource;
-(BOOL)_hasAnyPenultimateResource;
-(id)_resourceRequestForAssetResource:(id)arg1 wantsURLOnly:(BOOL)arg2 progress:(id)arg3 ;
-(void)_finishIfAllCompleteWithRequest:(id)arg1 ;
-(id)_errorFromAssetMediaResult:(id)arg1 ;
-(long long)type;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)_shouldRequestVideo;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(/*^block*/id)progressHandler;
-(void)cancel;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

