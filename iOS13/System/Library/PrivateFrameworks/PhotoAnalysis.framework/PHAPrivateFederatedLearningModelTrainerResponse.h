/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSArray;

@interface PHAPrivateFederatedLearningModelTrainerResponse : NSObject {

	NSArray* _parameterDeltas;
	NSArray* _trainingLossesPerEpoch;
	NSArray* _trainingAccuraciesPerEpoch;
	unsigned long long _trainingEpochs;
	unsigned long long _numberOfTrainingSamples;

}

@property (nonatomic,retain) NSArray * parameterDeltas;                               //@synthesize parameterDeltas=_parameterDeltas - In the implementation block
@property (nonatomic,retain) NSArray * trainingLossesPerEpoch;                        //@synthesize trainingLossesPerEpoch=_trainingLossesPerEpoch - In the implementation block
@property (nonatomic,retain) NSArray * trainingAccuraciesPerEpoch;                    //@synthesize trainingAccuraciesPerEpoch=_trainingAccuraciesPerEpoch - In the implementation block
@property (assign,nonatomic) unsigned long long trainingEpochs;                       //@synthesize trainingEpochs=_trainingEpochs - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTrainingSamples;              //@synthesize numberOfTrainingSamples=_numberOfTrainingSamples - In the implementation block
-(id)initWithParameterDeltas:(id)arg1 trainingLossesPerEpoch:(id)arg2 trainingAccuraciesPerEpoch:(id)arg3 trainingEpochs:(unsigned long long)arg4 numberOfTrainingSamples:(unsigned long long)arg5 ;
-(NSArray *)parameterDeltas;
-(void)setParameterDeltas:(NSArray *)arg1 ;
-(NSArray *)trainingLossesPerEpoch;
-(void)setTrainingLossesPerEpoch:(NSArray *)arg1 ;
-(NSArray *)trainingAccuraciesPerEpoch;
-(void)setTrainingAccuraciesPerEpoch:(NSArray *)arg1 ;
-(unsigned long long)trainingEpochs;
-(void)setTrainingEpochs:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTrainingSamples;
-(void)setNumberOfTrainingSamples:(unsigned long long)arg1 ;
@end

