/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatLivePhotoConversionRequest* _livePhotoConversionRequest;

}

@property (retain) PHMediaFormatLivePhotoConversionRequest * livePhotoConversionRequest;              //@synthesize livePhotoConversionRequest=_livePhotoConversionRequest - In the implementation block
-(BOOL)prepareWithError:(id*)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(PHMediaFormatLivePhotoConversionRequest *)livePhotoConversionRequest;
-(void)setLivePhotoConversionRequest:(PHMediaFormatLivePhotoConversionRequest *)arg1 ;
@end

