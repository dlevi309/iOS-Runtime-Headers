/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHAMutableFloatArray;

@interface PHAPrivateFederatedLearningLayerParameters : NSObject {

	PHAMutableFloatArray* _weights;
	PHAMutableFloatArray* _bias;

}

@property (nonatomic,retain) PHAMutableFloatArray * weights;              //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) PHAMutableFloatArray * bias;                 //@synthesize bias=_bias - In the implementation block
-(void)setBias:(PHAMutableFloatArray *)arg1 ;
-(PHAMutableFloatArray *)weights;
-(void)setWeights:(PHAMutableFloatArray *)arg1 ;
-(PHAMutableFloatArray *)bias;
-(id)initWithWeights:(id)arg1 bias:(id)arg2 ;
@end

