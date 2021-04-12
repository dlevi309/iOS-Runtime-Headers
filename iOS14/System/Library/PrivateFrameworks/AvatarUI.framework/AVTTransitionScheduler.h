/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTTransitionScheduler
@property (nonatomic,copy,readonly) id eventHandler; 
@required
-(id)eventHandler;
-(void)stop;
-(id)initWithEventHandler:(/*^block*/id)arg1;
-(void)scheduleEvent;
-(void)didCompleteEvent;

@end

