/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSPowerMonitorObserver.h>

@protocol BSRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, NSString;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	id<BSRelativeDateTimerDelegate> _delegate;
	unsigned long long _currResolution;
	long long _currValue;

}

@property (assign,nonatomic,__weak) id<BSRelativeDateTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)addTimerToMainRunLoop:(id)arg1 ;
+(void)invalidateTimer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<BSRelativeDateTimerDelegate>)delegate;
-(void)setDelegate:(id<BSRelativeDateTimerDelegate>)arg1 ;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void)_invalidateTimer;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireForEvent;
-(void)_fireAndUpdateTimerIfNecessary;
-(id)_timeDifferenceFromDate:(id)arg1 ;
-(double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3 ;
-(double)nextFireInterval;
@end

