/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@protocol OS_dispatch_source;
@class CADisplayLink, NSMutableDictionary, NSObject;

@interface CLKClockTimer : NSObject {

	CADisplayLink* _displayLink;
	CADisplayLink* _30fpsDisplayLink;
	CADisplayLink* _nativeDisplayLink;
	NSMutableDictionary* _minuteHandlers;
	NSMutableDictionary* _secondHandlers;
	NSMutableDictionary* _subsecondHandlers;
	NSMutableDictionary* _30fpsHandlers;
	NSMutableDictionary* _nativeHandlers;
	unsigned long long _nextToken;
	long long _lastHour;
	long long _lastMinute;
	long long _lastSecond;
	double _lastSubsecondFraction;
	BOOL _permittedToRun;
	NSObject*<OS_dispatch_source> _signalSource;
	NSMutableDictionary* _identificationLogsByToken;

}
+(id)sharedInstance;
+(id)now;
+(void)_forceDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)pause;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_handleTimePassed;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopMinuteUpdatesForToken:(id)arg1 ;
-(void)_removeToken:(id)arg1 ;
-(id)startSecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopSecondUpdatesForToken:(id)arg1 ;
-(void)_dumpIndentificationLogs;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(id)_nextTokenWithIdentificationLog:(/*^block*/id)arg1 ;
-(void)_maybeClearLastSeenTimeComponents;
-(id)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_update30fpsDisplayLink;
-(void)_updateNativeDisplayLink;
-(void)_on30fpsDisplayLink:(id)arg1 ;
-(void)_onNativeDisplayLink:(id)arg1 ;
-(void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1 ;
-(id)startSecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSubsecondUpdatesForToken:(id)arg1 ;
-(id)start30fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stop30fpsUpdatesForToken:(id)arg1 ;
-(id)startDisplayNativeUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopDisplayNativeUpdatesForToken:(id)arg1 ;
-(void)unpause;
@end

