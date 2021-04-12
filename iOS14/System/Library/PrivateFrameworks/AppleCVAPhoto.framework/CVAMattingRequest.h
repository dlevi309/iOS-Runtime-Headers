/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class CVADisparityPostprocessingRequest;

@interface CVAMattingRequest : NSObject {

	CVADisparityPostprocessingRequest* _disparityPostprocessingRequest;
	CVBufferRef _segmentationPixelBuffer;
	CVBufferRef _skinSegmentationPixelBuffer;
	CVBufferRef _destinationAlphaMattePixelBuffer;

}

@property (readonly) CVADisparityPostprocessingRequest * disparityPostprocessingRequest;              //@synthesize disparityPostprocessingRequest=_disparityPostprocessingRequest - In the implementation block
@property (readonly) CVBufferRef segmentationPixelBuffer;                                             //@synthesize segmentationPixelBuffer=_segmentationPixelBuffer - In the implementation block
@property (readonly) CVBufferRef skinSegmentationPixelBuffer;                                         //@synthesize skinSegmentationPixelBuffer=_skinSegmentationPixelBuffer - In the implementation block
@property (readonly) CVBufferRef destinationAlphaMattePixelBuffer;                                    //@synthesize destinationAlphaMattePixelBuffer=_destinationAlphaMattePixelBuffer - In the implementation block
-(id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(CVBufferRef)arg2 skinSegmentationPixelBuffer:(CVBufferRef)arg3 destinationAlphaMattePixelBuffer:(CVBufferRef)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(CVBufferRef)segmentationPixelBuffer;
-(id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(CVBufferRef)arg2 ;
-(id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(CVBufferRef)arg2 destinationAlphaMattePixelBuffer:(CVBufferRef)arg3 error:(id*)arg4 ;
-(CVADisparityPostprocessingRequest *)disparityPostprocessingRequest;
-(CVBufferRef)skinSegmentationPixelBuffer;
-(CVBufferRef)destinationAlphaMattePixelBuffer;
@end

