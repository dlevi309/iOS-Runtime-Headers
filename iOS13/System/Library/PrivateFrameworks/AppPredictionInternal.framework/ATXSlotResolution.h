/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore;

@interface ATXSlotResolution : NSObject {

	_ATXDataStore* _dataStore;

}
+(id)sharedInstance;
+(BOOL)isNotLaunchedWithinShortTimeSpan:(id)arg1 ;
+(void)setDistributionBasedScoreInputsForItem:(ATXPredictionItem*)arg1 withGeoHashResolution:(unsigned long long)arg2 withLaunchCounts:(id)arg3 ;
+(void)setDistributionBasedScoreInputsForDayOfWeekForItem:(ATXPredictionItem*)arg1 withLaunchDistribution:(id)arg2 ;
+(void)setDistributionBasedScoreInputsForTimeOfDayForItem:(ATXPredictionItem*)arg1 withLaunchDistribution:(id)arg2 ;
+(BOOL)shouldCountRowForGeohashIndividualContextStatistics:(long long)arg1 rowGeohash:(long long)arg2 ;
+(BOOL)shouldCountRowForGeohashOccurrencesCalculationForCurrentGeohash:(long long)arg1 rowGeohash:(long long)arg2 ;
+(BOOL)matchForCurrentGeohash:(long long)arg1 rowGeohash:(long long)arg2 ;
+(id)yearMonthDayComponentsForDate:(id)arg1 ;
+(double)exponentialDecay:(double)arg1 withHalflife:(double)arg2 ;
+(void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)arg1 appActionPredictionItem:(const ATXPredictionItem*)arg2 appActionLogProbability:(double)arg3 ;
+(void)setSlotLogProbabilityForCandidateActionPredictions:(id)arg1 ;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(id)fastStatisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6 currentGeohash:(long long)arg7 currentCoarseGeohash:(long long)arg8 ;
-(id)updateStatisticsWithFeedbackForBundleId:(id)arg1 actionType:(id)arg2 statistics:(id)arg3 currentDate:(id)arg4 currentGeohash:(long long)arg5 currentCoarseGeohash:(long long)arg6 ;
-(id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg1 currentDate:(id)arg2 previousLocationUUID:(id)arg3 currentLocationUUID:(id)arg4 currentMotionType:(long long)arg5 currentGeohash:(long long)arg6 currentCoarseGeohash:(long long)arg7 ;
-(id)actionPredictionsForStatistics:(id)arg1 ;
-(id)actionPredictionsForStatistics:(id)arg1 appActionPredictionItem:(const ATXPredictionItem*)arg2 appActionLogProbability:(double)arg3 scoreLogger:(id)arg4 ;
@end

