/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, NSTimer;

@interface NTKDelayedBlock : NSObject {

	BOOL _canceled;
	BOOL _invalidated;
	double _delay;
	NSString* _runLoopMode;
	/*^block*/id _action;
	NSTimer* _timer;

}

@property (assign,nonatomic) double delay;                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy) NSString * runLoopMode;              //@synthesize runLoopMode=_runLoopMode - In the implementation block
@property (nonatomic,copy) id action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                   //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL canceled;                     //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                  //@synthesize invalidated=_invalidated - In the implementation block
-(void)dealloc;
-(void)cancel;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)reset;
-(id)action;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(id)initWithDelay:(double)arg1 action:(/*^block*/id)arg2 ;
-(void)resetWithDelay:(double)arg1 ;
-(id)initWithDelay:(double)arg1 runLoopMode:(id)arg2 action:(/*^block*/id)arg3 ;
@end

