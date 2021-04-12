/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol OS_dispatch_queue, CHHapticDeviceCapability;
#import <CoreHaptics/CoreHaptics-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CHMetricsManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _enginePlayerData;
	NSMutableDictionary* _engineSPI;
	NSMutableDictionary* _engineReporter;
	BOOL _metricsDisabled;
	id<CHHapticDeviceCapability> _defaultDeviceCaps;
	BOOL _testMode;
	NSMutableDictionary* _testData;
	float _CHMetricsIntensityBin1To2Value;
	float _CHMetricsIntensityBin2To3Value;
	unordered_map<AVHapticPlayerEventType, NSString *, std::__1::hash<AVHapticPlayerEventType>, std::__1::equal_to<AVHapticPlayerEventType>, std::__1::allocator<std::__1::pair<const AVHapticPlayerEventType, NSString *> > >* _CHMetricTransientEventTypeStringMap;

}
+(id)sharedManager;
+(double)currentTime;
+(CAMutex*)getLock;
+(void)createSharedManagerWithEngine:(id)arg1 audioSessionID:(unsigned)arg2 SPI:(BOOL)arg3 sessionIsShared:(BOOL)arg4 ;
+(void)destroySharedManagerWithEngine:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addForEngine:(id)arg1 audioSessionID:(unsigned)arg2 sessionIsShared:(BOOL)arg3 SPI:(BOOL)arg4 ;
-(void)destroyForEngine:(id)arg1 ;
-(void)setMetricsEnabledByDefault;
-(id)getKeyForEngine:(id)arg1 ;
-(id)setReporterForEngine:(id)arg1 audioSessionID:(unsigned)arg2 sessionIsShared:(BOOL)arg3 ;
-(void)dispatchOnLocal:(/*^block*/id)arg1 ;
-(void)stopReporter:(id)arg1 ;
-(void)startReporter:(id)arg1 ;
-(void)logMetricForEngine:(id)arg1 metric:(id)arg2 value:(id)arg3 ;
-(id)getKeyForPlayer:(id)arg1 ;
-(void)prepareAdvancedPlaybackData:(id)arg1 player:(id)arg2 events:(id)arg3 ;
-(void)preparePlaybackData:(id)arg1 player:(id)arg2 events:(id)arg3 ;
-(void)removePlaybackData:(id)arg1 player:(id)arg2 ;
-(void)markAdvancedPlaybackAction:(id)arg1 player:(id)arg2 action:(long long)arg3 time:(float)arg4 ;
-(void)markPlaybackAction:(id)arg1 player:(id)arg2 action:(long long)arg3 time:(float)arg4 ;
-(void)logPlaybackMetricForEngine:(id)arg1 playerKey:(id)arg2 endTime:(float)arg3 ;
-(id)copyDataForDictionary:(id)arg1 ;
-(void)multiplyPlaybackMetricsDictionary:(id)arg1 transientData:(id)arg2 continuousData:(id)arg3 endTime:(double)arg4 ;
-(void)resetPlaybackData:(id)arg1 ;
-(void)multiplyAdvancedPlaybackMetricsDictionary:(id)arg1 transientData:(id)arg2 continuousData:(id)arg3 endTime:(double)arg4 ;
-(void)resetAdvancedPlaybackData:(id)arg1 ;
-(void)addToTestDataForPlayer:(id)arg1 transientData:(id)arg2 continuousData:(id)arg3 ;
-(id)continousDictionary:(id)arg1 slot:(unsigned long long)arg2 intensity:(float)arg3 ;
-(id)transientDictionary:(id)arg1 eventType:(unsigned long long)arg2 intensity:(float)arg3 ;
-(void)prepareData:(id)arg1 events:(id)arg2 ;
-(void)multiplyTransientData:(id)arg1 by:(float)arg2 ;
-(void)multiplyContinuousData:(id)arg1 by:(float)arg2 ;
-(id)continuousSharpnessSlotKeyFromSlotValue:(unsigned long long)arg1 ;
-(id)intensityBinKeyFromValue:(float)arg1 ;
-(id)transientEventTypeKeyWithEventType:(unsigned long long)arg1 ;
-(void)handleServerRecovery:(id)arg1 audioSessionID:(unsigned)arg2 sessionIsShared:(BOOL)arg3 ;
-(void)handleEngineStart:(id)arg1 ;
-(void)handleEngineStop:(id)arg1 ;
-(void)handlePlayerInit:(id)arg1 player:(id)arg2 events:(id)arg3 isAdvanced:(BOOL)arg4 ;
-(void)handlePlayerDealloc:(id)arg1 player:(id)arg2 ;
-(void)handleParamCurveEncountered:(id)arg1 ;
-(void)handlePlayerAction:(id)arg1 player:(id)arg2 action:(long long)arg3 time:(float)arg4 isAdvanced:(BOOL)arg5 ;
-(void)handlePlayerFinish:(id)arg1 endTime:(float)arg2 ;
-(void)setMetricsTestModeEnabled;
-(id)getMetricsForPlayer:(id)arg1 ;
-(void)setMetricsDisabledByDefault;
@end

