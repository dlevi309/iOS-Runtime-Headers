/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonDetectionResult, NSObject, AR2DSkeletonRawEspressoResult;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {

	AR2DSkeletonDetectionPostProcessGPU* _postProcessorGPU;
	SkeletonJointFilter<float>* _extrapolationFilter2D;
	double _extrapolationTime;
	SkeletonJointFilter<float>* _extrapolationFilter2DForLiftingData;
	AR2DSkeletonDetectionResult* _previous3DSkeleton;
	BOOL _shouldPush3DSupportSkeleton;
	BOOL _use3DSupportSkeletonForExtrapolation;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;
	AR2DSkeletonRawEspressoResult* _previousRawEspressoResult;

}

@property (nonatomic,retain) AR2DSkeletonRawEspressoResult * previousRawEspressoResult;              //@synthesize previousRawEspressoResult=_previousRawEspressoResult - In the implementation block
-(id)init;
-(id)processData:(id)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(AR2DSkeletonRawEspressoResult *)previousRawEspressoResult;
-(void)setPreviousRawEspressoResult:(AR2DSkeletonRawEspressoResult *)arg1 ;
@end

