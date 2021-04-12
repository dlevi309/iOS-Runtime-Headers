/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)dataPackage;
-(id)initWithDataPackage:(id)arg1 layersToTrain:(id)arg2 trainingLossesPerEpoch:(id)arg3 trainingAccuraciesPerEpoch:(id)arg4 ;
-(void)setDataPackage:(NSData *)arg1 ;
@end

