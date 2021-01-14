/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)now;
+(id)sharedInstance;
-(id)init;
-(void)_onDisplayLink:(id)arg1 ;
-(id)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(void)_handleTimePassed;
-(void)stopMinuteUpdatesForToken:(id)arg1 ;
-(void)_updateDisplayLink;
-(void)dealloc;
@end

