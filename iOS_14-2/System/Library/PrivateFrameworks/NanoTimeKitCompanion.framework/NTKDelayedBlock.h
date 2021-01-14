/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCanceled:(BOOL)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)invalidated;
-(void)setDelay:(double)arg1 ;
-(BOOL)canceled;
-(id)action;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(double)delay;
-(void)reset;
-(void)cancel;
-(void)dealloc;
-(id)initWithDelay:(double)arg1 action:(/*^block*/id)arg2 ;
-(void)resetWithDelay:(double)arg1 ;
-(id)initWithDelay:(double)arg1 runLoopMode:(id)arg2 action:(/*^block*/id)arg3 ;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(NSString *)runLoopMode;
@end

