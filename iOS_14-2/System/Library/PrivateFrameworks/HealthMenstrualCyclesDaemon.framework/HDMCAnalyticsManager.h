/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class HDMCAnalysisManager, HDPeriodicActivity, HDProfile, NSObject, NSString;

@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDMCAnalysisManager* _analysisManager;
	HDPeriodicActivity* _activity;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 analysisManager:(id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(void)_queue_performActivityWithCompletion:(/*^block*/id)arg1 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)_queue_submitAnalyticsWithActivityCompletion:(/*^block*/id)arg1 ;
-(double)_submissionInterval;
-(double)_retryInterval;
@end

