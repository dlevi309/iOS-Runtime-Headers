/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARResultData <ARData>
@optional
-(double)timestamp;
-(CVBufferRef)segmentationBuffer;
-(/*function pointer*/void**)cameraTransform;
-(id)worldTrackingState;
-(/*function pointer*/void**)worldAlignmentTransform;
-(unsigned long long)worldAlignmentModifiers;
-(id)lightEstimate;
-(id)featurePoints;
-(id)anchorsForCameraWithTransform:(/*function pointer*/void*)arg1 referenceOriginTransform:(/*function pointer*/void*)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end

