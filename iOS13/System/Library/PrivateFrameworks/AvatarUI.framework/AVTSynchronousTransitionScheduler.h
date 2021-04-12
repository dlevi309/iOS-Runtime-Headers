/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler> {

	BOOL _isRunningEvent;
	/*^block*/id _eventHandler;

}

@property (assign,nonatomic) BOOL isRunningEvent;                 //@synthesize isRunningEvent=_isRunningEvent - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)stop;
-(id)eventHandler;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(BOOL)isRunningEvent;
-(void)setIsRunningEvent:(BOOL)arg1 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
@end

