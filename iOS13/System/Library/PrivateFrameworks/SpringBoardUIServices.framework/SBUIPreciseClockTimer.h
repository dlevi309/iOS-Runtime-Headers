/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBUIPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)sharedInstance;
+(id)now;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopMinuteUpdatesForToken:(id)arg1 ;
@end

