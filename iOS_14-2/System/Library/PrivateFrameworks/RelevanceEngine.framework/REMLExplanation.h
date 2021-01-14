/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REMLExplanation : NSObject
+(id)explanationForCondition:(id)arg1 ;
+(id)explanationForFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3 ;
+(id)explanationForFilteringRule:(id)arg1 ;
-(BOOL)canCombineExplanationWithExplanation:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(BOOL)shouldProvideExplanation;
-(long long)rankExplanationToExplanation:(id)arg1 ;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
-(BOOL)_isSystemFeature:(id)arg1 ;
-(id)_formattedNameForFeature:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
-(id)_formattedFeatureListFromFeatures:(id)arg1 style:(unsigned long long)arg2 ;
@end

