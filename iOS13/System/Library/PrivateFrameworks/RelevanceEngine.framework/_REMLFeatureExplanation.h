/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REMLExplanation.h>

@class REFeatureSet;

@interface _REMLFeatureExplanation : REMLExplanation {

	REFeatureSet* _features;
	float _mean;
	float _variance;

}
+(id)combinedExplanationsFromExplanations:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(BOOL)shouldProvideExplanation;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
-(id)initWithFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
@end

