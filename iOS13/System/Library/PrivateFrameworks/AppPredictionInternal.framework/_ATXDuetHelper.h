/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASLock;

@interface _ATXDuetHelper : NSObject {

	_PASLock* _deletionHandlerLock;
	_PASLock* _rootOfAppDataLock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)getSortedActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(/*^block*/id)arg4 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ;
-(id)getFirstSortedActivityOrIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(/*^block*/id)arg4 ;
-(void)enumerateActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 intentLimit:(unsigned long long)arg3 nsuaLimit:(unsigned long long)arg4 ascending:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 allowMissingTitles:(BOOL)arg5 ;
-(id)getFirstIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 ;
-(id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2 ;
-(id)getActivityEventFromUUID:(id)arg1 ;
-(id)getAPRIntentFromUUID:(id)arg1 ;
-(id)getIntentEventFromDKEvent:(id)arg1 source:(long long)arg2 bundleIdFilter:(id)arg3 allowMissingTitles:(BOOL)arg4 intentsToKeep:(id)arg5 ;
-(void)_enumerateIntentEventsForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(BOOL)arg6 limit:(unsigned long long)arg7 ascending:(BOOL)arg8 callback:(/*^block*/id)arg9 ;
-(id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(BOOL)arg6 limit:(unsigned long long)arg7 ;
-(id)getRelevantShortcutsToBundleIdDictBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(double)maxAgeOfPreviousDonationToConsider;
-(id)getMostRecentINPlayMediaIntentEvent;
-(id)getActivityEventFromDKEvent:(id)arg1 bundleIdFilter:(id)arg2 ;
-(void)_enumerateActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 ascending:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(id)getFirstActivityEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(void)_computeRootOfAppDataWithLockWitness:(id)arg1 ;
-(unsigned long long)getDocFreqFor:(id)arg1 contentKey:(id)arg2 ;
-(id)getRootOfAppSignalsFor:(id)arg1 contentKey:(id)arg2 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getFirstAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getSurfExtensionLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_getTombstoneUUIDsBetweenStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 ;
-(id)getIntentDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getEligibleActivityDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_handleTombstoneCreationWithNotification:(id)arg1 ;
-(unsigned long long)registerDeletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)deregisterDeletionHandlerWithToken:(unsigned long long)arg1 ;
-(id)getAppLaunchesFromOneMonth;
-(id)getMicroLocationsFromLastMonth;
-(id)getActivityAndIntentEventsFromLastMonth;
-(id)getActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ascending:(BOOL)arg3 ;
-(void)enumerateActivityAndIntentEventsFromLastMonthWithLimit:(unsigned long long)arg1 nsuaLimit:(unsigned long long)arg2 ascending:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(id)getMostRecentMicroLocation;
-(void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(BOOL)arg6 block:(/*^block*/id)arg7 ;
-(id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ascending:(BOOL)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 ;
@end

