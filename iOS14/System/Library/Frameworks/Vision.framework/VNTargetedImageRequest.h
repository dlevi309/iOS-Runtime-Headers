/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNImageBuffer;

@interface VNTargetedImageRequest : VNImageBasedRequest {

	VNImageBuffer* _targetedImageBuffer;

}
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCIImage:(id)arg1 ;
-(id)initWithTargetedCIImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedImageURL:(id)arg1 ;
-(id)initWithTargetedImageURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedImageData:(id)arg1 ;
-(id)initWithTargetedImageData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedImageData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedCMSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)targetedImageBuffer;
-(id)requiredTargetedImageBufferReturningError:(id*)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(id)sequencedRequestPreviousObservationsKey;
-(id)newDefaultRequestInstance;
-(id)initWithTargetedImageBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

