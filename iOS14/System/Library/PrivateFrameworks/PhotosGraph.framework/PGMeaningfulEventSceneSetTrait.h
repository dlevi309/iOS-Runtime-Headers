/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)minimumNumberOfNegativeHighConfidenceAssets;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(unsigned long long)minimumNumberOfHighConfidenceAssets;
-(void)setAccumulateHighConfidenceAssetCounts:(BOOL)arg1 ;
-(id)initWithNodes:(id)arg1 ;
-(BOOL)accumulateHighConfidenceAssetCounts;
-(void)setMinimumNumberOfNegativeHighConfidenceAssets:(unsigned long long)arg1 ;
-(void)setMinimumRatioOfHighConfidenceAssets:(double)arg1 ;
-(double)minimumRatioOfHighConfidenceAssets;
-(void)setMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
@end

