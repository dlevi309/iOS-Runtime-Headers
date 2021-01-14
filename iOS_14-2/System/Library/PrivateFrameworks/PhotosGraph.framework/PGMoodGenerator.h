/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHAssetCollection, PGManager, PGMoodVector, PGMoodGeneratorOptions;

@interface PGMoodGenerator : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	unsigned long long _suggestedMood;
	PGMoodVector* _positiveMoodVector;
	PGMoodVector* _negativeMoodVector;
	PGMoodVector* _historyWeightedPositiveMoodVector;
	PGMoodGeneratorOptions* _options;
	double _positiveThreshold;
	double _negativeThreshold;

}

@property (retain) PGMoodGeneratorOptions * options;              //@synthesize options=_options - In the implementation block
@property (assign) double positiveThreshold;                      //@synthesize positiveThreshold=_positiveThreshold - In the implementation block
@property (assign) double negativeThreshold;                      //@synthesize negativeThreshold=_negativeThreshold - In the implementation block
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;
-(PGMoodGeneratorOptions *)options;
-(void)setOptions:(PGMoodGeneratorOptions *)arg1 ;
-(unsigned long long)suggestedMood;
-(id)positiveMoodVector;
-(id)negativeMoodVector;
-(id)historyWeightedPositiveMoodVector;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(id)_moodSources;
-(void)_processMoodSources;
-(double)positiveThreshold;
-(void)setPositiveThreshold:(double)arg1 ;
-(double)negativeThreshold;
-(void)setNegativeThreshold:(double)arg1 ;
@end

