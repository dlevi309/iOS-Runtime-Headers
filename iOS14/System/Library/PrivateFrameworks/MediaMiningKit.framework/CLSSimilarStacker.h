/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)defaultDistanceThresholdForAlgorithm:(long long)arg1 similarity:(long long)arg2 ;
+(/*^block*/id)distanceBlockForAlgorithm:(long long)arg1 sceneprintGetterBlock:(/*^block*/id)arg2 ;
-(long long)algorithm;
-(/*^block*/id)similarGroupComparator;
-(double)distanceThresholdForIdenticalSimilarityWithPeople;
-(double)distanceThresholdForSemanticalSimilarity;
-(void)setDistanceThresholdForSemanticalSimilarityWithPeople:(double)arg1 ;
-(void)setDistanceThresholdForIdenticalSimilarityWithPeople:(double)arg1 ;
-(double)distanceThresholdForIdenticalSimilarity;
-(double)distanceThresholdForSemanticalSimilarityWithPersons;
-(double)distanceThresholdForSimilarity:(long long)arg1 ;
-(void)setDistanceThresholdForIdenticalSimilarity:(double)arg1 ;
-(double)distanceBetweenItem:(id)arg1 andItem:(id)arg2 ;
-(id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)distanceThresholdForSemanticalSimilarityWithPeople;
-(void)setDistanceThresholdForSemanticalSimilarityWithPersons:(double)arg1 ;
-(id)initWithAlgorithm:(long long)arg1 ;
-(id)sceneprintGetterBlock;
-(id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)setSceneprintGetterBlock:(id)arg1 ;
-(void)setDistanceThresholdForSemanticalSimilarity:(double)arg1 ;
@end

