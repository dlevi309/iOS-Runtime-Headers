/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSData, NSDictionary;

@interface PHAPrivateFederatedLearningRunnerResponse : NSObject {

	NSData* _dataPackage;
	NSDictionary* _trainingMetrics;

}

@property (nonatomic,retain) NSData * dataPackage;                        //@synthesize dataPackage=_dataPackage - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingMetrics;              //@synthesize trainingMetrics=_trainingMetrics - In the implementation block
-(NSDictionary *)trainingMetrics;
-(void)setTrainingMetrics:(NSDictionary *)arg1 ;
-(id)initWithDataPackage:(id)arg1 layersToTrain:(id)arg2 trainingLossesPerEpoch:(id)arg3 trainingAccuraciesPerEpoch:(id)arg4 ;
-(NSData *)dataPackage;
-(void)setDataPackage:(NSData *)arg1 ;
@end

