/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonDetectionResult, NSObject, AR2DSkeletonRawEspressoResult;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {

	AR2DSkeletonDetectionPostProcessGPU* _postProcessorGPU;
	SkeletonJointFilter<float>* _extrapolationFilter2D;
	double _extrapolationTime;
	SkeletonJointFilter<float>* _extrapolationFilter2DForLiftingData;
	AR2DSkeletonDetectionResult* _previous3DSkeleton;
	NSObject*<OS_dispatch_semaphore> _previous3DSkeletonSemaphore;
	BOOL _shouldPush3DSupportSkeleton;
	BOOL _use3DSupportSkeletonForExtrapolation;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;
	AR2DSkeletonRawEspressoResult* _previousRawEspressoResult;

}

@property (nonatomic,retain) AR2DSkeletonRawEspressoResult * previousRawEspressoResult;              //@synthesize previousRawEspressoResult=_previousRawEspressoResult - In the implementation block
-(id)processData:(id)arg1 ;
-(id)init;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(AR2DSkeletonRawEspressoResult *)previousRawEspressoResult;
-(void)setPreviousRawEspressoResult:(AR2DSkeletonRawEspressoResult *)arg1 ;
@end

