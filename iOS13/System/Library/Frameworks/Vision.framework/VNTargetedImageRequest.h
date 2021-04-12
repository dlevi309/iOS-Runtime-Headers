/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNImageSpecifier;

@interface VNTargetedImageRequest : VNImageBasedRequest {

	VNImageSpecifier* _targetedImageSpecifier;

}
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTargetedImageData:(id)arg1 options:(id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)newDefaultRequestInstance;
-(id)initWithTargetedImageSpecifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTargetedCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 ;
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
-(id)initWithTargetedImageData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)targetedImageSpecifier;
-(id)requiredTargetedImageSpecifierReturningError:(id*)arg1 ;
@end

