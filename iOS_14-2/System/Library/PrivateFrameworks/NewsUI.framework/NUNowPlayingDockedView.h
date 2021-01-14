/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUNowPlayingBackgroundView.h>

@protocol NUNowPlayingDockedViewDelegate;
@class UIView, UILabel, UIButton;

@interface NUNowPlayingDockedView : NUNowPlayingBackgroundView {

	BOOL _waiting;
	id<NUNowPlayingDockedViewDelegate> _delegate;
	UIView* _contentView;
	UILabel* _publisherLabel;
	UILabel* _titleLabel;
	UIButton* _rewindButton;
	UIButton* _playPauseButton;

}

@property (assign,nonatomic,__weak) id<NUNowPlayingDockedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * publisherLabel;                                      //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rewindButton;                                       //@synthesize rewindButton=_rewindButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                    //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) BOOL waiting;                                                    //@synthesize waiting=_waiting - In the implementation block
-(UILabel *)titleLabel;
-(void)setPublisher:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NUNowPlayingDockedViewDelegate>)delegate;
-(void)setTitle:(id)arg1 ;
-(void)setDelegate:(id<NUNowPlayingDockedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)waiting;
-(UIButton *)playPauseButton;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(UIView *)contentView;
-(UILabel *)publisherLabel;
-(void)setWaiting:(BOOL)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 waiting:(BOOL)arg2 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)rewindButtonTapped:(id)arg1 ;
-(void)pauseButtonTapped:(id)arg1 ;
-(UIButton *)rewindButton;
-(void)_updateTitleAccessibilityLabel;
@end

