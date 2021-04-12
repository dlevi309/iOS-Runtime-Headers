/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHImageRequest, PHVideoRequest, PHLivePhotoResult, PHLivePhotoRequestOptions;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {

	NSProgress* _imageProgress;
	NSProgress* _videoProgress;
	PHImageRequest* _initialImageRequest;
	PHImageRequest* _finalImageRequest;
	PHVideoRequest* _videoRequest;
	PHLivePhotoResult* _livePhotoResult;
	AB _finalImageRequestStarted;
	AB _finalImageReceived;
	AB _finalVideoReceived;
	PHLivePhotoRequestOptions* _livePhotoOptions;

}

@property (nonatomic,readonly) PHLivePhotoRequestOptions * livePhotoOptions;              //@synthesize livePhotoOptions=_livePhotoOptions - In the implementation block
-(long long)type;
-(/*^block*/id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(BOOL)shouldReportProgress;
-(BOOL)representsShareableHighQualityResource;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(BOOL)_shouldRequestVideo;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(void)_setFinalImageRequestFromRequest:(id)arg1 ;
-(PHLivePhotoRequestOptions *)livePhotoOptions;
@end

