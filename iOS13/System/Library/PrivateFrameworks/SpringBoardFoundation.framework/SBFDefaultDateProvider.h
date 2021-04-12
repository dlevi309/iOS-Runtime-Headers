/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)date;
-(void)_updateMinuteTimer;
-(void)_scheduleNextMinuteTimer;
-(void)_minuteTimerFired;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
@end

