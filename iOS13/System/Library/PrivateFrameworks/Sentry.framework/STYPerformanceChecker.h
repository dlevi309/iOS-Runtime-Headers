/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface STYPerformanceChecker : NSObject {

	BOOL _underMemoryPressure;
	BOOL _underThermalPressure;
	NSDictionary* _perfCheckerErrors;
	NSObject*<OS_dispatch_queue> _serialUtilityQueue;

}

@property (retain) NSDictionary * perfCheckerErrors;                             //@synthesize perfCheckerErrors=_perfCheckerErrors - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialUtilityQueue;              //@synthesize serialUtilityQueue=_serialUtilityQueue - In the implementation block
@property (assign) BOOL underMemoryPressure;                                     //@synthesize underMemoryPressure=_underMemoryPressure - In the implementation block
@property (assign) BOOL underThermalPressure;                                    //@synthesize underThermalPressure=_underThermalPressure - In the implementation block
+(id)sharedPerfChecker;
-(void)dealloc;
-(void)setSerialUtilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialUtilityQueue;
-(void)setPerfCheckerErrors:(NSDictionary *)arg1 ;
-(void)setUnderThermalPressure:(BOOL)arg1 ;
-(void)setUnderMemoryPressure:(BOOL)arg1 ;
-(void)checkFramerateOfAnimationScenario:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkLatencyOfResponsivenessScenario:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportError:(long long)arg1 report:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)triage:(id)arg1 ;
-(void)checkPerformanceOfScenarioReport:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)perfCheckerErrors;
-(BOOL)underMemoryPressure;
-(BOOL)underThermalPressure;
@end

