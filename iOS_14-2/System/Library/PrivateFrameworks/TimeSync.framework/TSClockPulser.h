/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <libobjc.A.dylib/TSClockClient.h>

@class TSClock, NSString;

@interface TSClockPulser : NSObject <TSClockClient> {

	TSClock* _pulseClock;
	BOOL _hasLastTimestamp;
	BOOL _holdoverMode;
	int _lastLockState;
	BOOL _threadIsRunning;
	BOOL _threadShouldBeRunning;
	unsigned _startSemaphore;
	unsigned _stopSemaphore;
	BOOL _useRealtimePriority;
	int _pulseOffset;
	/*^block*/id _pulseHandler;
	unsigned long long _pulsePeriod;

}

@property (nonatomic,copy) id pulseHandler;                               //@synthesize pulseHandler=_pulseHandler - In the implementation block
@property (assign,nonatomic) BOOL useRealtimePriority;                    //@synthesize useRealtimePriority=_useRealtimePriority - In the implementation block
@property (assign,nonatomic) unsigned long long pulsePeriod;              //@synthesize pulsePeriod=_pulsePeriod - In the implementation block
@property (assign,nonatomic) int pulseOffset;                             //@synthesize pulseOffset=_pulseOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2 ;
-(void)didChangeClockMasterForClock:(id)arg1 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)pulsePeriod;
-(void)pulseThread;
-(int)pulseOffset;
-(id)pulseHandler;
-(BOOL)useRealtimePriority;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1 ;
-(id)initWithPulseClock:(id)arg1 ;
-(BOOL)startPulsing;
-(BOOL)stopPulsing;
-(void)setPulseHandler:(id)arg1 ;
-(void)setUseRealtimePriority:(BOOL)arg1 ;
-(void)setPulsePeriod:(unsigned long long)arg1 ;
-(void)setPulseOffset:(int)arg1 ;
@end

