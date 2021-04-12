/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NCAudioPlayerControlsDelegate;
@class UIButton, NCAudioPlayerTimelineSlider, UIView;

@interface NCAudioPlayerControlsView : UIView {

	BOOL _enabled;
	BOOL _contentViewLoaded;
	BOOL _contentViewLayoutConstraintsLoaded;
	id<NCAudioPlayerControlsDelegate> _delegate;
	UIButton* _pauseButton;
	UIButton* _playButton;
	long long _state;
	NCAudioPlayerTimelineSlider* _timelineSlider;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIButton * pauseButton;                                         //@synthesize pauseButton=_pauseButton - In the implementation block
@property (nonatomic,retain) UIButton * playButton;                                          //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) NCAudioPlayerTimelineSlider * timelineSlider;                   //@synthesize timelineSlider=_timelineSlider - In the implementation block
@property (assign,nonatomic) BOOL contentViewLoaded;                                         //@synthesize contentViewLoaded=_contentViewLoaded - In the implementation block
@property (assign,nonatomic) BOOL contentViewLayoutConstraintsLoaded;                        //@synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded - In the implementation block
@property (assign,nonatomic,__weak) id<NCAudioPlayerControlsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NCAudioPlayerControlsDelegate>)delegate;
-(void)setDelegate:(id<NCAudioPlayerControlsDelegate>)arg1 ;
-(long long)state;
-(BOOL)isEnabled;
-(void)setState:(long long)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)loadContentView;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(UIButton *)playButton;
-(void)setPlayButton:(UIButton *)arg1 ;
-(UIButton *)pauseButton;
-(void)setPauseButton:(UIButton *)arg1 ;
-(void)loadContentViewLayoutConstraints;
-(void)setContentViewLoaded:(BOOL)arg1 ;
-(void)setContentViewLayoutConstraintsLoaded:(BOOL)arg1 ;
-(NCAudioPlayerTimelineSlider *)timelineSlider;
-(void)pauseButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)playButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)stopButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)setTimelineSlider:(NCAudioPlayerTimelineSlider *)arg1 ;
-(BOOL)contentViewLoaded;
-(BOOL)contentViewLayoutConstraintsLoaded;
@end

