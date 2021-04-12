/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

