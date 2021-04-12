/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler> {

	BOOL _isRunningEvent;
	/*^block*/id _eventHandler;

}

@property (assign,nonatomic) BOOL isRunningEvent;                 //@synthesize isRunningEvent=_isRunningEvent - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)stop;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(BOOL)isRunningEvent;
-(void)setIsRunningEvent:(BOOL)arg1 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
@end

