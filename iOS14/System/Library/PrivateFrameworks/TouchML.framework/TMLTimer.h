/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
-(void)setInterval:(double)arg1 ;
-(id)block;
-(double)tolerance;
-(double)interval;
-(void)start;
-(void)setRepeats:(BOOL)arg1 ;
-(void)fire;
-(void)setBlock:(id)arg1 ;
-(BOOL)repeats;
-(void)stop;
-(void)timerFired:(id)arg1 ;
-(void)setTolerance:(double)arg1 ;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(NSString *)runLoopMode;
-(void)tmlDispose;
@end

