/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSTimer, NSString;

@interface TMLTimer : NSObject {

	NSTimer* _timer;
	/*^block*/id _block;
	BOOL _repeats;
	BOOL _running;
	double _interval;
	double _tolerance;
	NSString* _runLoopMode;

}

@property (nonatomic,copy) id block;                            //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL repeats;                      //@synthesize repeats=_repeats - In the implementation block
@property (assign,nonatomic) double interval;                   //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double tolerance;                  //@synthesize tolerance=_tolerance - In the implementation block
@property (assign,nonatomic) BOOL running;                      //@synthesize running=_running - In the implementation block
@property (nonatomic,copy) NSString * runLoopMode;              //@synthesize runLoopMode=_runLoopMode - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)initializeJSContext:(id)arg1 ;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(void)stop;
-(void)start;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(BOOL)repeats;
-(void)setRepeats:(BOOL)arg1 ;
-(id)block;
-(BOOL)running;
-(void)setBlock:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(void)tmlDispose;
@end

