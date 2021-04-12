/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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

