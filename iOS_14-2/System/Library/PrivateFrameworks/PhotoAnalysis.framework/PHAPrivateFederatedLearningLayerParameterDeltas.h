/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject {

	MAFloatVector* _weightDeltas;
	MAFloatVector* _biasDeltas;

}

@property (nonatomic,retain) MAFloatVector * weightDeltas;              //@synthesize weightDeltas=_weightDeltas - In the implementation block
@property (nonatomic,retain) MAFloatVector * biasDeltas;                //@synthesize biasDeltas=_biasDeltas - In the implementation block
+(id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2 ;
-(id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2 ;
-(MAFloatVector *)weightDeltas;
-(void)setWeightDeltas:(MAFloatVector *)arg1 ;
-(MAFloatVector *)biasDeltas;
-(void)setBiasDeltas:(MAFloatVector *)arg1 ;
@end

