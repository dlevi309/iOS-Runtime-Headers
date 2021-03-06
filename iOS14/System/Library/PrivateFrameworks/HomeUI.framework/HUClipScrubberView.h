/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUClipScrubberPlayheadView, UIView, AVBackgroundView, UIButton, UICollectionView, HUBlendedSeparatorView;

@interface HUClipScrubberView : UIView {

	BOOL _isPlayingMedia;
	HUClipScrubberPlayheadView* _playHeadView;
	UIView* _contentView;
	AVBackgroundView* _contentBackgroundView;
	HUClipScrubberPlayheadView* _playheadView;
	HUClipScrubberPlayheadView* _backgroundPlayheadView;
	UIButton* _playPauseButton;
	UIButton* _rightActionButton;
	UICollectionView* _clipCollectionView;
	UIView* _collectionViewContainer;
	unsigned long long _displayMode;
	HUBlendedSeparatorView* _leftBlendedSeparator;
	HUBlendedSeparatorView* _rightBlendedSeparator;

}

@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) AVBackgroundView * contentBackgroundView;                         //@synthesize contentBackgroundView=_contentBackgroundView - In the implementation block
@property (nonatomic,retain) HUClipScrubberPlayheadView * playheadView;                        //@synthesize playheadView=_playheadView - In the implementation block
@property (nonatomic,retain) HUClipScrubberPlayheadView * backgroundPlayheadView;              //@synthesize backgroundPlayheadView=_backgroundPlayheadView - In the implementation block
@property (nonatomic,retain) UIButton * playPauseButton;                                       //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) UIButton * rightActionButton;                                     //@synthesize rightActionButton=_rightActionButton - In the implementation block
@property (nonatomic,retain) UICollectionView * clipCollectionView;                            //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (nonatomic,retain) UIView * collectionViewContainer;                                 //@synthesize collectionViewContainer=_collectionViewContainer - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                                   //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) HUBlendedSeparatorView * leftBlendedSeparator;                    //@synthesize leftBlendedSeparator=_leftBlendedSeparator - In the implementation block
@property (nonatomic,retain) HUBlendedSeparatorView * rightBlendedSeparator;                   //@synthesize rightBlendedSeparator=_rightBlendedSeparator - In the implementation block
@property (assign,nonatomic) BOOL isPlayingMedia;                                              //@synthesize isPlayingMedia=_isPlayingMedia - In the implementation block
@property (nonatomic,readonly) HUClipScrubberPlayheadView * playHeadView;                      //@synthesize playHeadView=_playHeadView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_addConstraints;
-(unsigned long long)displayMode;
-(id)_deleteImage;
-(void)layoutSubviews;
-(UIButton *)playPauseButton;
-(void)setContentView:(UIView *)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(UIView *)contentView;
-(HUClipScrubberPlayheadView *)playheadView;
-(AVBackgroundView *)contentBackgroundView;
-(UIView *)collectionViewContainer;
-(HUClipScrubberPlayheadView *)backgroundPlayheadView;
-(UICollectionView *)clipCollectionView;
-(UIButton *)rightActionButton;
-(id)_playImage;
-(BOOL)isPlayingMedia;
-(id)_pauseImage;
-(id)displayModeDescription;
-(void)deactivateLiveButtonDisplay;
-(void)setIsPlayingMedia:(BOOL)arg1 ;
-(void)activateLiveButtonDisplay;
-(void)updateAccessoryButtonsForPlaybackEngine:(id)arg1 ;
-(id)playOrPauseImageForEngineMode:(unsigned long long)arg1 ;
-(void)hideEditInterface;
-(void)displayEditInterface;
-(HUBlendedSeparatorView *)leftBlendedSeparator;
-(HUBlendedSeparatorView *)rightBlendedSeparator;
-(void)setLeftBlendedSeparator:(HUBlendedSeparatorView *)arg1 ;
-(void)setRightBlendedSeparator:(HUBlendedSeparatorView *)arg1 ;
-(void)didUpdatePlaybackEngine:(id)arg1 ;
-(void)navigateToLivePosition;
-(void)navigateToOffset:(double)arg1 ;
-(void)updateDisplayMode:(unsigned long long)arg1 ;
-(HUClipScrubberPlayheadView *)playHeadView;
-(void)setContentBackgroundView:(AVBackgroundView *)arg1 ;
-(void)setPlayheadView:(HUClipScrubberPlayheadView *)arg1 ;
-(void)setBackgroundPlayheadView:(HUClipScrubberPlayheadView *)arg1 ;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(void)setRightActionButton:(UIButton *)arg1 ;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
-(void)setCollectionViewContainer:(UIView *)arg1 ;
@end

