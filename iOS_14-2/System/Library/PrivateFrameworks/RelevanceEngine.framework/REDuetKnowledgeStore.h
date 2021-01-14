/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton {

	_DKKnowledgeStore* _knowledgeStore;

}
-(id)sleepInterval;
-(id)_init;
-(id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1 ;
-(id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2 ;
-(id)queryForDuetEventWithIdentifier:(id)arg1 ;
-(id)queryForAllDonatedActions;
-(void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)queryForAllDonatedActionsWithIdentifier:(id)arg1 ;
-(id)queryForDonatedActionsAfterDate:(id)arg1 ;
-(id)queryForDeletedActionsAfterDate:(id)arg1 ;
-(id)queryForAllRelevantShortcuts;
-(id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(BOOL)arg2 ;
-(id)_duetChargingEventStream;
-(id)_createEventsFromDuetEvents:(id)arg1 ;
-(id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3 ;
-(id)_createActionsFromDuetEvents:(id)arg1 ;
-(id)_duetDonationsStreams;
-(id)_queryForDonatedActionsAfterDate:(id)arg1 streams:(id)arg2 ;
-(id)_createTombstonesFromDuetEvents:(id)arg1 ;
-(void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_queryForUnfilteredDonationsForStream:(id)arg1 ;
-(id)queryForUnfilteredUserActivityDonations;
-(id)queryForUnfilteredIntentDonations;
-(id)queryForUnfilteredRelevantShortcutDonations;
@end

