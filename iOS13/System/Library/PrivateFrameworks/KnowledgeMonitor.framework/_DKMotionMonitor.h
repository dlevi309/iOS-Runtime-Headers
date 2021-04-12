/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class CMMotionActivityManager, NSOperationQueue, NSObject;

@interface _DKMotionMonitor : _DKMonitor {

	BOOL _monitoringActivity;
	BOOL _shouldRecordMotion;
	BOOL _activateTimer;
	long long _lastReportedMotionState;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _motionStateProcessingTimer;
	unsigned long long _currentDominantMotionState;
	double _dominantActivityInterval;

}

@property (assign,nonatomic) BOOL monitoringActivity;                                               //@synthesize monitoringActivity=_monitoringActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordMotion;                                               //@synthesize shouldRecordMotion=_shouldRecordMotion - In the implementation block
@property (assign,nonatomic) long long lastReportedMotionState;                                     //@synthesize lastReportedMotionState=_lastReportedMotionState - In the implementation block
@property (nonatomic,retain) CMMotionActivityManager * activityManager;                             //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> motionStateProcessingTimer;              //@synthesize motionStateProcessingTimer=_motionStateProcessingTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long currentDominantMotionState;                       //@synthesize currentDominantMotionState=_currentDominantMotionState - In the implementation block
@property (nonatomic,readonly) double dominantActivityInterval;                                     //@synthesize dominantActivityInterval=_dominantActivityInterval - In the implementation block
@property (nonatomic,readonly) BOOL activateTimer;                                                  //@synthesize activateTimer=_activateTimer - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(unsigned long long)_activityTypeToMotionState:(id)arg1 ;
+(id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)update;
-(void)deactivate;
-(void)addState:(id)arg1 ;
-(CMMotionActivityManager *)activityManager;
-(void)setActivityManager:(CMMotionActivityManager *)arg1 ;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)computeDominantMotionState;
-(void)addMotionActivity:(id)arg1 ;
-(id)classesForSecureStateDecoding;
-(BOOL)monitoringActivity;
-(void)setMonitoringActivity:(BOOL)arg1 ;
-(BOOL)shouldRecordMotion;
-(void)setShouldRecordMotion:(BOOL)arg1 ;
-(long long)lastReportedMotionState;
-(void)setLastReportedMotionState:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)motionStateProcessingTimer;
-(void)setMotionStateProcessingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)currentDominantMotionState;
-(double)dominantActivityInterval;
-(BOOL)activateTimer;
@end

