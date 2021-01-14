/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSPowerMonitorObserver.h>

@protocol BSRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, NSString;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	unsigned long long _currResolution;
	long long _currValue;
	id<BSRelativeDateTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BSRelativeDateTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(id<BSRelativeDateTimerDelegate>)delegate;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireAndUpdateTimerIfNecessary;
-(double)nextFireInterval;
-(void)setDate:(id)arg1 ;
-(void)setDelegate:(id<BSRelativeDateTimerDelegate>)arg1 ;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(void)invalidate;
-(id)date;
-(void)dealloc;
@end

