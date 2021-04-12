/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHAMutableFloatArray;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject {

	PHAMutableFloatArray* _weightDeltas;
	PHAMutableFloatArray* _biasDeltas;

}

@property (nonatomic,retain) PHAMutableFloatArray * weightDeltas;              //@synthesize weightDeltas=_weightDeltas - In the implementation block
@property (nonatomic,retain) PHAMutableFloatArray * biasDeltas;                //@synthesize biasDeltas=_biasDeltas - In the implementation block
+(id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2 ;
-(id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2 ;
-(PHAMutableFloatArray *)weightDeltas;
-(void)setWeightDeltas:(PHAMutableFloatArray *)arg1 ;
-(PHAMutableFloatArray *)biasDeltas;
-(void)setBiasDeltas:(PHAMutableFloatArray *)arg1 ;
@end

