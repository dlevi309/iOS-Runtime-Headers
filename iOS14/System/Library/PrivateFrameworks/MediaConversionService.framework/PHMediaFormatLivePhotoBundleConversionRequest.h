/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

