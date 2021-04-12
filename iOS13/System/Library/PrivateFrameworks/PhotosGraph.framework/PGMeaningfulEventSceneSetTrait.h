/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait {

	BOOL _accumulateHighConfidenceAssetCounts;
	unsigned long long _minimumNumberOfHighConfidenceAssets;
	unsigned long long _minimumNumberOfNegativeHighConfidenceAssets;
	double _minimumRatioOfHighConfidenceAssets;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;                      //@synthesize minimumNumberOfHighConfidenceAssets=_minimumNumberOfHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;              //@synthesize minimumNumberOfNegativeHighConfidenceAssets=_minimumNumberOfNegativeHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) double minimumRatioOfHighConfidenceAssets;                                   //@synthesize minimumRatioOfHighConfidenceAssets=_minimumRatioOfHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) BOOL accumulateHighConfidenceAssetCounts;                                    //@synthesize accumulateHighConfidenceAssetCounts=_accumulateHighConfidenceAssetCounts - In the implementation block
-(id)initWithNodes:(id)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(unsigned long long)minimumNumberOfHighConfidenceAssets;
-(void)setMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfNegativeHighConfidenceAssets;
-(void)setMinimumNumberOfNegativeHighConfidenceAssets:(unsigned long long)arg1 ;
-(double)minimumRatioOfHighConfidenceAssets;
-(void)setMinimumRatioOfHighConfidenceAssets:(double)arg1 ;
-(BOOL)accumulateHighConfidenceAssetCounts;
-(void)setAccumulateHighConfidenceAssetCounts:(BOOL)arg1 ;
@end

