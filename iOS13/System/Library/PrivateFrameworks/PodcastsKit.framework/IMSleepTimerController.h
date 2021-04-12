/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol IMSleepTimerDelegate;
@class IMAVPlayer;

@interface IMSleepTimerController : NSObject {

	id<IMSleepTimerDelegate> _delegate;
	IMAVPlayer* _player;

}

@property (nonatomic,retain) IMAVPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<IMSleepTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMSleepTimerDelegate>)delegate;
-(void)setDelegate:(id<IMSleepTimerDelegate>)arg1 ;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)addActionForTime:(double)arg1 alertController:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 autoStop:(unsigned long long)arg2 timerTime:(double)arg3 alertController:(id)arg4 ;
-(id)alertControllerForSleepTimer;
@end

