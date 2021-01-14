/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHContentEditingInputRequestContext.h>

@protocol PHMediaRequestLiveRenderingOptions;
@class PLPhotoEditRenderer, PHVideoRequest, NSProgress;

@interface PHLiveRenderEditingInputRequestContext : PHContentEditingInputRequestContext {

	os_unfair_lock_s _renderLock;
	PLPhotoEditRenderer* _renderer;
	/*^block*/id _renderedVideoHandler;
	BOOL _shouldReframe;
	id<PHMediaRequestLiveRenderingOptions> _liveRenderOptions;
	PHVideoRequest* _onDemandRenderRequest;
	NSProgress* _onDemandRenderProgress;

}
+(id)videoLiveRenderContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 renderedVideoHandler:(/*^block*/id)arg5 ;
+(id)videoLiveRenderContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 targetSize:(CGSize)arg5 contentMode:(long long)arg6 renderedVideoHandler:(/*^block*/id)arg7 ;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(id)progresses;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)_handleRenderVideoFinishedWithRequest:(id)arg1 avAsset:(id)arg2 videoComposition:(id)arg3 audioMix:(id)arg4 error:(id)arg5 mutableInfo:(id)arg6 ;
-(void)processAndReturnResultsWithRequest:(id)arg1 ;
-(id)initialRequests;
-(/*^block*/id)progressHandler;
-(void)cancel;
@end

