/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSDate, NSString;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate> {

	BOOL _processLaunchInfoSubmitStatus;
	NSDate* _processLaunchTime;
	NSString* _dataSyncStateAsString;
	NSString* _jetsamReason;
	long long _previousPID;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;
	double _processRelaunchEventTimeIntervalThreshold;

}

@property (readonly) double processRelaunchEventTimeIntervalThreshold;                 //@synthesize processRelaunchEventTimeIntervalThreshold=_processRelaunchEventTimeIntervalThreshold - In the implementation block
@property (readonly) id<HMDLogEventProcessLaunchAnalyzerContext> context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerDidFire:(id)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(void)_handleDataSyncStateUpdateLogEvent:(id)arg1 ;
-(void)_handleProcessLaunchLogEvent:(id)arg1 ;
-(void)_updateProcessLaunchInfoFromDisk;
-(void)_readJetsamSnapshotEntryForHomed;
-(double)processRelaunchEventTimeIntervalThreshold;
@end

