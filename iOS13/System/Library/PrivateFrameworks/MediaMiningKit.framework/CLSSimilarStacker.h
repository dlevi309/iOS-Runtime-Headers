/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSSimilarStacker : NSObject {

	long long _algorithm;
	/*^block*/id _sceneprintGetterBlock;
	double _distanceThresholdForIdenticalSimilarity;
	double _distanceThresholdForIdenticalSimilarityWithPeople;
	double _distanceThresholdForSemanticalSimilarity;
	double _distanceThresholdForSemanticalSimilarityWithPeople;
	double _distanceThresholdForSemanticalSimilarityWithPersons;

}

@property (readonly) long long algorithm;                                                             //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,copy) id sceneprintGetterBlock;                                                  //@synthesize sceneprintGetterBlock=_sceneprintGetterBlock - In the implementation block
@property (assign,nonatomic) double distanceThresholdForIdenticalSimilarity;                          //@synthesize distanceThresholdForIdenticalSimilarity=_distanceThresholdForIdenticalSimilarity - In the implementation block
@property (assign,nonatomic) double distanceThresholdForIdenticalSimilarityWithPeople;                //@synthesize distanceThresholdForIdenticalSimilarityWithPeople=_distanceThresholdForIdenticalSimilarityWithPeople - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarity;                         //@synthesize distanceThresholdForSemanticalSimilarity=_distanceThresholdForSemanticalSimilarity - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarityWithPeople;               //@synthesize distanceThresholdForSemanticalSimilarityWithPeople=_distanceThresholdForSemanticalSimilarityWithPeople - In the implementation block
@property (assign,nonatomic) double distanceThresholdForSemanticalSimilarityWithPersons;              //@synthesize distanceThresholdForSemanticalSimilarityWithPersons=_distanceThresholdForSemanticalSimilarityWithPersons - In the implementation block
+(/*^block*/id)distanceBlockForAlgorithm:(long long)arg1 sceneprintGetterBlock:(/*^block*/id)arg2 ;
+(double)defaultDistanceThresholdForAlgorithm:(long long)arg1 similarity:(long long)arg2 ;
-(long long)algorithm;
-(id)legacyStackSimilarItems:(id)arg1 withThreshold:(double)arg2 ;
-(id)initWithAlgorithm:(long long)arg1 ;
-(/*^block*/id)similarGroupComparator;
-(id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)distanceBetweenItem:(id)arg1 andItem:(id)arg2 ;
-(double)distanceThresholdForSimilarity:(long long)arg1 ;
-(BOOL)_canUseSceneprintSimilarStackingWithItems:(id)arg1 ;
-(id)sceneprintGetterBlock;
-(void)setSceneprintGetterBlock:(id)arg1 ;
-(double)distanceThresholdForIdenticalSimilarity;
-(void)setDistanceThresholdForIdenticalSimilarity:(double)arg1 ;
-(double)distanceThresholdForIdenticalSimilarityWithPeople;
-(void)setDistanceThresholdForIdenticalSimilarityWithPeople:(double)arg1 ;
-(double)distanceThresholdForSemanticalSimilarity;
-(void)setDistanceThresholdForSemanticalSimilarity:(double)arg1 ;
-(double)distanceThresholdForSemanticalSimilarityWithPeople;
-(void)setDistanceThresholdForSemanticalSimilarityWithPeople:(double)arg1 ;
-(double)distanceThresholdForSemanticalSimilarityWithPersons;
-(void)setDistanceThresholdForSemanticalSimilarityWithPersons:(double)arg1 ;
@end

