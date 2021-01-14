/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler> {

	/*^block*/id _eventHandler;
	NSTimer* _transitionTimer;
	double _delay;

}

@property (nonatomic,retain) NSTimer * transitionTimer;              //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (nonatomic,readonly) double delay;                         //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)stop;
-(double)delay;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
-(NSTimer *)transitionTimer;
-(void)scheduleTransitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(id)initWithEventHandler:(/*^block*/id)arg1 delay:(double)arg2 ;
@end

