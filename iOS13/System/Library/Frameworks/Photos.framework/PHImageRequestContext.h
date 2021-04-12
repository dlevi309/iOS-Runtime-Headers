/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHImageRequest, PHMediaResourceRequest, PHCompositeMediaResult, PHImageRequestOptions;

@interface PHImageRequestContext : PHMediaRequestContext {

	NSProgress* _progress;
	PHImageRequest* _initialRequest;
	PHImageRequest* _intermediateRequest;
	PHImageRequest* _finalRequest;
	PHMediaResourceRequest* _resourceRequest;
	atomic_flag _firstNonFastResultWasObserved;
	atomic_flag _finalResultSent;
	PHCompositeMediaResult* _delayedFinalInvalidDataResult;
	PHImageRequestOptions* _imageOptions;

}

@property (nonatomic,readonly) PHImageRequestOptions * imageOptions;              //@synthesize imageOptions=_imageOptions - In the implementation block
-(long long)type;
-(/*^block*/id)progressHandler;
-(PHImageRequestOptions *)imageOptions;
-(BOOL)isNetworkAccessAllowed;
-(id)_lazyProgress;
-(BOOL)isSynchronous;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(BOOL)shouldReportProgress;
-(BOOL)representsShareableHighQualityResource;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)_initialBehavior;
-(id)_produceFinalImageRequestForRequest:(id)arg1 ;
-(id)_produceIntermediateImageRequestForRequest:(id)arg1 ;
@end

