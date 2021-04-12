/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFUnfairLock, HMFTimer, NSPointerArray, HMISystemResourceUsageMonitor, HMIPIDController, MovingAverage, NSArray, NSString;

@interface HMICameraVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {

	BOOL _paused;
	double _analysisFPS;
	unsigned long long _maxConcurrentAnalyzers;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFUnfairLock* _lock;
	HMFTimer* _tick;
	NSPointerArray* _internalAnalyzers;
	HMISystemResourceUsageMonitor* _systemResourceUsageMonitor;
	long long _systemResourceUsageMonitorUsageLevel;
	HMIPIDController* _thermalPIDController;
	MovingAverage* _averageAnalysisTimeMovingAverage;
	MovingAverage* _averageTotalAnalysisTimeMovingAverage;
	double _analysisFPSPreference;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                          //@synthesize lock=_lock - In the implementation block
@property (readonly) HMFTimer * tick;                                                         //@synthesize tick=_tick - In the implementation block
@property (readonly) NSPointerArray * internalAnalyzers;                                      //@synthesize internalAnalyzers=_internalAnalyzers - In the implementation block
@property (readonly) HMISystemResourceUsageMonitor * systemResourceUsageMonitor;              //@synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor - In the implementation block
@property (assign) long long systemResourceUsageMonitorUsageLevel;                            //@synthesize systemResourceUsageMonitorUsageLevel=_systemResourceUsageMonitorUsageLevel - In the implementation block
@property (readonly) HMIPIDController * thermalPIDController;                                 //@synthesize thermalPIDController=_thermalPIDController - In the implementation block
@property (readonly) double averageAnalysisTime; 
@property (readonly) MovingAverage * averageAnalysisTimeMovingAverage;                        //@synthesize averageAnalysisTimeMovingAverage=_averageAnalysisTimeMovingAverage - In the implementation block
@property (readonly) double averageTotalAnalysisTime; 
@property (readonly) MovingAverage * averageTotalAnalysisTimeMovingAverage;                   //@synthesize averageTotalAnalysisTimeMovingAverage=_averageTotalAnalysisTimeMovingAverage - In the implementation block
@property (readonly) double analysisFPSPreference;                                            //@synthesize analysisFPSPreference=_analysisFPSPreference - In the implementation block
@property (readonly) double analysisFPS;                                                      //@synthesize analysisFPS=_analysisFPS - In the implementation block
@property (readonly) long long systemResourceUsageLevel; 
@property (getter=isPaused) BOOL paused;                                                      //@synthesize paused=_paused - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSArray * analyzers; 
@property (readonly) unsigned long long maxConcurrentAnalyzers;                               //@synthesize maxConcurrentAnalyzers=_maxConcurrentAnalyzers - In the implementation block
@property (readonly) long long activeAnalyzerCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(id)init;
-(HMFUnfairLock *)lock;
-(BOOL)isPaused;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setPaused:(BOOL)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)tick;
-(HMISystemResourceUsageMonitor *)systemResourceUsageMonitor;
-(long long)systemResourceUsageLevel;
-(void)systemResourceUsageDidChangeTo:(long long)arg1 ;
-(double)analysisFPS;
-(long long)activeAnalyzerCount;
-(void)setSystemResourceUsageMonitorUsageLevel:(long long)arg1 ;
-(long long)systemResourceUsageMonitorUsageLevel;
-(HMIPIDController *)thermalPIDController;
-(BOOL)inFullBypassMode;
-(NSArray *)analyzers;
-(MovingAverage *)averageAnalysisTimeMovingAverage;
-(MovingAverage *)averageTotalAnalysisTimeMovingAverage;
-(double)averageTotalAnalysisTime;
-(void)updateAnalysisFPS:(id)arg1 ;
-(NSPointerArray *)internalAnalyzers;
-(void)_compactInternalAnalyzers;
-(void)logState;
-(unsigned long long)maxConcurrentAnalyzers;
-(double)averageAnalysisTime;
-(void)resumeThermalPIDController;
-(void)requestDidEnd:(id)arg1 outcome:(long long)arg2 ;
-(void)registerAnalyzer:(id)arg1 ;
-(void)removeAllAnalyzers;
-(double)analysisFPSPreference;
@end

