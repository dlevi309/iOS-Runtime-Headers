/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, ACHDataStore, ACHEarnedInstanceStore, NSMutableDictionary, NSCalendar, NSObject, NSDate, NSString;

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	ACHDataStore* _dataStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	SCD_Struct_AC6 _historicalEvaluationPolicy;
	NSMutableDictionary* _sourceRegistry;
	NSCalendar* _calendar;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDate* _currentDateOverride;
	NSMutableDictionary* _queuedIncrementalEvaluations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)sourceCount;
-(id)currentDate;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(/*^block*/id)arg2 ;
-(void)requestHistoricalEvaluationForAllSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentDateOverride:(id)arg1 ;
-(void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_evaluateHistoryForSource:(id)arg1 databaseContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 historicalEvaluationPolicy:(SCD_Struct_AC6)arg4 ;
-(id)dataStorePropertyProviderForSource:(id)arg1 ;
-(void)registerSource:(id)arg1 ;
-(void)deregisterSource:(id)arg1 ;
@end

