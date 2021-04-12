/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class CADisplayLink;

@interface TSDDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _tickBlock;
	/*^block*/id _completionBlock;
	double _startTime;
	double _lastTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
@property (nonatomic,copy) id tickBlock;                    //@synthesize tickBlock=_tickBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(void)start;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(double)startTime;
-(void)teardown;
-(void)setStartTime:(double)arg1 ;
-(double)lastTime;
-(void)setTickBlock:(id)arg1 ;
-(void)p_handleDisplayLink:(id)arg1 ;
-(id)tickBlock;
-(void)setLastTime:(double)arg1 ;
@end

