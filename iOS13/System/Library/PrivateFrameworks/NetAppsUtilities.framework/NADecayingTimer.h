/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject {

	NSDate* _referenceDate;
	unsigned long long _minimumUnit;
	/*^block*/id _block;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumUnit;              //@synthesize minimumUnit=_minimumUnit - In the implementation block
@property (nonatomic,copy,readonly) id block;                               //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)block;
-(NSDate *)referenceDate;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)_scheduleNextTimer;
-(unsigned long long)minimumUnit;
-(id)_nextFireDate;
-(id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1 ;
-(void)_timerEvent;
@end

