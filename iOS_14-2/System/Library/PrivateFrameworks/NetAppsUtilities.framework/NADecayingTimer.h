/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimer *)timer;
-(id)block;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)_scheduleNextTimer;
-(id)_nextFireDate;
-(NSDate *)referenceDate;
-(void)invalidate;
-(unsigned long long)minimumUnit;
-(void)dealloc;
-(id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1 ;
-(void)_timerEvent;
@end

