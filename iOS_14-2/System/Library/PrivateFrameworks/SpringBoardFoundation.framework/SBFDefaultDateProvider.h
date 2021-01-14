/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFDateProviding.h>

@class NSMutableDictionary, NSTimer, NSCalendar, NSString;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {

	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	NSTimer* _minuteTimer;
	NSCalendar* _calendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_updateMinuteTimer;
-(void)_scheduleNextMinuteTimer;
-(void)_minuteTimerFired;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(id)date;
@end

