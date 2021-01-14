/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@protocol OS_dispatch_source;
@class CADisplayLink, NSHashTable, NSDate, NSObject, NSCalendar;

@interface CLKClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSHashTable* _handlersByUpdateFrequency[5];
	NSHashTable* _allHandlers;
	unsigned long long _nextToken;
	NSDate* _lastNow;
	long long _lastHour;
	long long _lastMinute;
	long long _lastSecond;
	long long _last15fps;
	long long _last30fps;
	long long _last60fps;
	BOOL _paused;
	BOOL _isForeground;
	BOOL _backlightOn;
	BOOL _permittedToRun;
	NSObject*<OS_dispatch_source> _signalSource;
	NSDate* _waitTimerScheduledFireTime;
	NSObject*<OS_dispatch_source> _waitForNextEventTimer;
	NSCalendar* _calendar;

}
+(id)now;
+(id)sharedInstance;
+(void)_forceDate:(id)arg1 ;
-(id)init;
-(void)_onDisplayLink:(id)arg1 ;
-(void)pause;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_handleTimePassed;
-(void)unpause;
-(void)_updateDisplayLink;
-(void)dealloc;
-(id)startSecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopUpdatesForToken:(id)arg1 ;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(id)start30fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(id)start15fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_dumpIndentificationLogs;
-(id)_nextTokenWithUpdateFrequency:(long long)arg1 wantsCommit:(BOOL)arg2 wantsHighAccuracy:(BOOL)arg3 identificationLog:(/*^block*/id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_maybeClearLastSeenTimeComponents;
-(id)startUpdatesWithUpdateFrequency:(long long)arg1 withHandler:(/*^block*/id)arg2 identificationLog:(/*^block*/id)arg3 ;
-(double)_timeUntilNextHighAccuracyEventFromHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 nanosecond:(long long)arg4 ;
-(void)_createDisplayLinkIfNeeded;
-(BOOL)_hasHandlers;
-(void)_cancelWaitTimer;
-(void)_setDisplayLinkFrameInterval:(long long)arg1 ;
-(double)_timeUntilNextHighAccuracyEventFromNow;
-(long long)_minimumPossibleUpdateFrequency;
-(void)_updateDisplayLinkWithTimeUntilNextHighAccuracyEvent:(double)arg1 withMinimumUpdateFrequency:(long long)arg2 ;
-(void)_updateIsPermittedToRun;
-(void)setHandler:(id)arg1 wantsCommit:(BOOL)arg2 ;
-(id)startSecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)start15fpsUpdatesWithHandler:(/*^block*/id)arg1 ;
-(id)start60fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
@end

