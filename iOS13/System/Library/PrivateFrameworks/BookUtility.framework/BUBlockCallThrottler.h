/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSDate;

@interface BUBlockCallThrottler : NSObject {

	BOOL _running;
	double _minimumTimeBetweenCalls;
	NSDate* _lastBlockCallDate;

}

@property (nonatomic,retain) NSDate * lastBlockCallDate;                  //@synthesize lastBlockCallDate=_lastBlockCallDate - In the implementation block
@property (assign,nonatomic) BOOL running;                                //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) double minimumTimeBetweenCalls;              //@synthesize minimumTimeBetweenCalls=_minimumTimeBetweenCalls - In the implementation block
-(id)init;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(void)runBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock:(/*^block*/id)arg1 throttle:(BOOL)arg2 ;
-(double)minimumTimeBetweenCalls;
-(NSDate *)lastBlockCallDate;
-(void)setLastBlockCallDate:(NSDate *)arg1 ;
-(BOOL)runBlockThrottled:(/*^block*/id)arg1 ;
-(void)setMinimumTimeBetweenCalls:(double)arg1 ;
@end

