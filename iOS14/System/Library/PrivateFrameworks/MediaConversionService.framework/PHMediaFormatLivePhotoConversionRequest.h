/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatConversionRequest* _imageConversionRequest;
	PHMediaFormatConversionRequest* _videoConversionRequest;

}

@property (retain) PHMediaFormatConversionRequest * imageConversionRequest;              //@synthesize imageConversionRequest=_imageConversionRequest - In the implementation block
@property (retain) PHMediaFormatConversionRequest * videoConversionRequest;              //@synthesize videoConversionRequest=_videoConversionRequest - In the implementation block
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id*)arg3 ;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(PHMediaFormatConversionRequest *)imageConversionRequest;
-(PHMediaFormatConversionRequest *)videoConversionRequest;
-(void)setImageConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setVideoConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
@end

