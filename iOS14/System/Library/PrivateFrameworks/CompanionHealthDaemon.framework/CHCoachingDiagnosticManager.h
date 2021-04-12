/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDPeriodicActivity, CMMotionActivityManager, NSOperationQueue, NSDate, AWDServerConnection, NSString;

@interface CHCoachingDiagnosticManager : NSObject <HDPeriodicActivityDelegate, HDDiagnosticObject> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDPeriodicActivity* _scheduler;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _activityQueue;
	NSDate* _cachedLastSubmittedDate;
	AWDServerConnection* _serverConnection;
	Class _motionActivityManagerClass;

}

@property (nonatomic,retain) Class motionActivityManagerClass;              //@synthesize motionActivityManagerClass=_motionActivityManagerClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_queue_computeStatisticsForCoachingEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(BOOL)_queue_submitMetrics:(id)arg1 ;
-(BOOL)_queue_submitMetricForData:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setActivityManager:(id)arg1 ;
-(void)_performCoachingDiagnosticWithCompletion:(/*^block*/id)arg1 ;
-(id)_queue_statisticsCollectionForAnchorDate:(id)arg1 quantityType:(id)arg2 statisticsOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_queue_applyDataItem:(id)arg1 toMetric:(id)arg2 ;
-(void)setMotionActivityManagerClass:(Class)arg1 ;
-(void)_queue_setLastSubmittedDate:(id)arg1 ;
-(id)diagnosticDescription;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queue_lastSubmittedDate;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 submitMetrics:(BOOL)arg3 handler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_queue_addHealthCharacteristicsToMetrics:(id)arg1 error:(id*)arg2 ;
-(Class)motionActivityManagerClass;
-(BOOL)_queue_submitMetricForActivitySummary:(id)arg1 dateOfBirth:(id)arg2 biologicalSex:(id)arg3 heightSample:(id)arg4 weightSample:(id)arg5 ;
-(id)_dateComponentsAsAge:(id)arg1 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 submitMetrics:(BOOL)arg3 handler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

