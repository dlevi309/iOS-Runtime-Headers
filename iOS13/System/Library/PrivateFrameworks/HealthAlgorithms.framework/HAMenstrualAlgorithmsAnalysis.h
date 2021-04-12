/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


@class NSArray, HAMenstrualAlgorithmsStats;

@interface HAMenstrualAlgorithmsAnalysis : NSObject {

	NSArray* _menstruationPredictions;
	NSArray* _fertilityPredictions;
	HAMenstrualAlgorithmsStats* _stats;

}

@property (nonatomic,retain) NSArray * menstruationPredictions;               //@synthesize menstruationPredictions=_menstruationPredictions - In the implementation block
@property (nonatomic,retain) NSArray * fertilityPredictions;                  //@synthesize fertilityPredictions=_fertilityPredictions - In the implementation block
@property (nonatomic,retain) HAMenstrualAlgorithmsStats * stats;              //@synthesize stats=_stats - In the implementation block
-(HAMenstrualAlgorithmsStats *)stats;
-(void)setStats:(HAMenstrualAlgorithmsStats *)arg1 ;
-(NSArray *)menstruationPredictions;
-(void)setMenstruationPredictions:(NSArray *)arg1 ;
-(NSArray *)fertilityPredictions;
-(void)setFertilityPredictions:(NSArray *)arg1 ;
@end

