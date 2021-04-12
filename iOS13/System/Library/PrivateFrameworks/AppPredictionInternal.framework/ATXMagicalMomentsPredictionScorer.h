/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, NSCountedSet, NSMutableDictionary, NSString, NSMutableOrderedSet;

@interface ATXMagicalMomentsPredictionScorer : NSObject {

	NSArray* _correlatedEvents;
	NSCountedSet* _relevantAppLaunches;
	unsigned long long _totalRelevantLaunchesForAllBundleIds;
	NSCountedSet* _globalAppLaunches;
	NSMutableDictionary* _relevanceWeightsByIdentifier;
	NSString* _topScoringIdentifier;
	NSMutableOrderedSet* _dateSetForDecay;
	NSMutableDictionary* _cumulativeScoresWithDecayedWeightsByIdentifier;
	double _totalScaledCumulativeScoresForAllBundleIds;
	NSMutableDictionary* _finalPredictionConfidences;

}
-(id)startOfDayForDate:(id)arg1 ;
-(id)initWithCorrelatedEvents:(id)arg1 andGlobalAppLaunchCountedSet:(id)arg2 ;
-(void)computeRelevanceScoresForAllRelevantBundleIds;
-(void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
-(BOOL)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
-(BOOL)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
-(BOOL)subExpertHasWitnessedEnoughRelevantAppLaunches;
-(BOOL)subExpertCanMakeHighConfidencePredictions;
-(BOOL)subExpertCanMakeHighConfidencePredictionsForBundleIdGivenRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2 ;
-(id)relevanceScoreWithRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2 ;
-(id)generatePredictions;
-(void)computeTimeDecayedCumulativeScores;
-(double)scalingFactorFromTopPrediction;
-(void)scaleAllScoresWithTopScoringFactor;
-(void)computeModelConfidences;
-(id)getPredictionsFromFinalConfidences;
-(unsigned long long)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
-(unsigned long long)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
-(unsigned long long)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
-(double)minimumRelevanceWeightForMMScoring;
-(double)maximumRelevanceWeightForMMScoring;
-(id)dateSetForDecay;
-(id)relevantAppLaunches;
-(unsigned long long)totalRelevantLaunchesForAllBundleIds;
-(id)relevanceWeightsByIdentifier;
-(id)cumulativeScoresWithDecayedWeightsByIdentifier;
-(id)topScoringIdentifier;
@end

