/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHImageRequest, PHCompositeMediaResult, PHImageRequestOptions;

@interface PHImageRequestContext : PHMediaRequestContext {

	NSProgress* _progress;
	PHImageRequest* _initialRequest;
	PHImageRequest* _intermediateRequest;
	PHImageRequest* _finalRequest;
	atomic_flag _firstNonFastResultWasObserved;
	atomic_flag _finalResultSent;
	PHCompositeMediaResult* _delayedFinalInvalidDataResult;
	PHImageRequestOptions* _imageOptions;

}

@property (nonatomic,readonly) PHImageRequestOptions * imageOptions;              //@synthesize imageOptions=_imageOptions - In the implementation block
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)_produceIntermediateImageRequestForRequest:(id)arg1 ;
-(PHImageRequestOptions *)imageOptions;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(BOOL)isSynchronous;
-(id)progresses;
-(id)_lazyProgress;
-(id)_produceFinalImageRequestForRequest:(id)arg1 ;
-(id)initialRequests;
-(long long)type;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)shouldReportProgress;
-(/*^block*/id)progressHandler;
-(BOOL)_shouldLoadHDRGainMapBasedOnChoosingPolicy:(long long)arg1 ;
-(id)_initialBehavior;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
@end

