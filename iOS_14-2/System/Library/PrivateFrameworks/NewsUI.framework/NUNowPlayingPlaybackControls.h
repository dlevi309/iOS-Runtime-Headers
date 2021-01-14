/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackControlsLayoutSpecProvider;
@class UIView, UIButton;

@interface NUNowPlayingPlaybackControls : UIView {

	BOOL _isPlaying;
	UIView* _contentView;
	id<NUNowPlayingPlaybackControlsDelegate> _delegate;
	UIButton* _rewindButton;
	UIButton* _playPauseButton;
	UIButton* _nextTrackButton;
	double _inset;
	id<NUNowPlayingPlaybackControlsLayoutSpecProvider> _layoutSpecProvider;

}

@property (nonatomic,retain) UIView * contentView;                                                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<NUNowPlayingPlaybackControlsDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * rewindButton;                                                                   //@synthesize rewindButton=_rewindButton - In the implementation block
@property (nonatomic,retain) UIButton * playPauseButton;                                                                //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) UIButton * nextTrackButton;                                                                //@synthesize nextTrackButton=_nextTrackButton - In the implementation block
@property (assign,nonatomic) double inset;                                                                              //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic,__weak) id<NUNowPlayingPlaybackControlsLayoutSpecProvider> layoutSpecProvider;              //@synthesize layoutSpecProvider=_layoutSpecProvider - In the implementation block
@property (assign,nonatomic) BOOL isPlaying;                                                                            //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) BOOL nextTrackButtonEnabled; 
-(BOOL)isPlaying;
-(id)buttonColor;
-(double)inset;
-(id<NUNowPlayingPlaybackControlsDelegate>)delegate;
-(void)setDelegate:(id<NUNowPlayingPlaybackControlsDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInset:(double)arg1 ;
-(UIButton *)playPauseButton;
-(void)setContentView:(UIView *)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(void)setNextTrackButtonEnabled:(BOOL)arg1 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)rewindButtonTapped:(id)arg1 ;
-(void)pauseButtonTapped:(id)arg1 ;
-(UIButton *)rewindButton;
-(void)nextTrackButtonTapped:(id)arg1 ;
-(id<NUNowPlayingPlaybackControlsLayoutSpecProvider>)layoutSpecProvider;
-(UIButton *)nextTrackButton;
-(id)disabledButtonColor;
-(id)initWithFrame:(CGRect)arg1 inset:(double)arg2 layoutSpecProvider:(id)arg3 ;
-(BOOL)nextTrackButtonEnabled;
-(void)setRewindButton:(UIButton *)arg1 ;
-(void)setNextTrackButton:(UIButton *)arg1 ;
-(void)setLayoutSpecProvider:(id<NUNowPlayingPlaybackControlsLayoutSpecProvider>)arg1 ;
@end

