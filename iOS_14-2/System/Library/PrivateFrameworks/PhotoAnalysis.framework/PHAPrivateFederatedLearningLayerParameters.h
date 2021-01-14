/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameters : NSObject {

	MAFloatVector* _weights;
	MAFloatVector* _bias;

}

@property (nonatomic,retain) MAFloatVector * weights;              //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) MAFloatVector * bias;                 //@synthesize bias=_bias - In the implementation block
-(MAFloatVector *)bias;
-(void)setWeights:(MAFloatVector *)arg1 ;
-(void)setBias:(MAFloatVector *)arg1 ;
-(MAFloatVector *)weights;
-(id)initWithWeights:(id)arg1 bias:(id)arg2 ;
@end

