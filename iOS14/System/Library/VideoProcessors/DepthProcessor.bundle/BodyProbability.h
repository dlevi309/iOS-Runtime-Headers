/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@class DistanceTransformGpu;

@interface BodyProbability : NSObject {

	BodyProbabilityParameters _sParams;
	DistanceTransformGpu* _distanceTransform;
	vImage_Buffer* _tempBufferForSegmentationConversion;
	vImage_Buffer* _tempBufferForSegmentationScaling;
	CVBufferRef _tempBufferForDistanceTransform;
	CVBufferRef _tempBufferForBinaryBodyMask;
	BOOL _resourcesAllocated;

}
-(int)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(int)_allocateVimageBuffers;
-(int)_checkBufferDimensionsForInput:(CVBufferRef)arg1 andOutput:(CVBufferRef)arg2 ;
-(int)_scaleBodySegmentation:(CVBufferRef)arg1 ;
-(int)_convertBodySegmentationToBinaryMask;
-(int)_addExponentialFalloffToDistanceTransformInto:(CVBufferRef)arg1 ;
-(id)initWithParameters:(BodyProbabilityParameters*)arg1 andDistanceTransform:(id)arg2 ;
-(int)bodyProbabilityFromSegmentation:(CVBufferRef)arg1 outputBodyProbabilityMap:(CVBufferRef)arg2 ;
@end

