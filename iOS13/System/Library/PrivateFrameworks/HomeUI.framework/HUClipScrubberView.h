/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUClipScrubberPlayheadView, UIView, UIButton, UICollectionView, HUBlendedSeparatorView;

@interface HUClipScrubberView : UIView {

	BOOL _isPlayingMedia;
	HUClipScrubberPlayheadView* _playHeadView;
	UIView* _contentView;
	UIButton* _leftActionButton;
	UIButton* _rightActionButton;
	UICollectionView* _clipCollectionView;
	unsigned long long _displayMode;
	HUBlendedSeparatorView* _leftBlendedSeparator;
	HUBlendedSeparatorView* _rightBlendedSeparator;

}

@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) HUClipScrubberPlayheadView * playHeadView;                   //@synthesize playHeadView=_playHeadView - In the implementation block
@property (nonatomic,retain) UIButton * leftActionButton;                                 //@synthesize leftActionButton=_leftActionButton - In the implementation block
@property (nonatomic,retain) UIButton * rightActionButton;                                //@synthesize rightActionButton=_rightActionButton - In the implementation block
@property (nonatomic,retain) UICollectionView * clipCollectionView;                       //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                              //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) HUBlendedSeparatorView * leftBlendedSeparator;               //@synthesize leftBlendedSeparator=_leftBlendedSeparator - In the implementation block
@property (nonatomic,retain) HUBlendedSeparatorView * rightBlendedSeparator;              //@synthesize rightBlendedSeparator=_rightBlendedSeparator - In the implementation block
@property (assign,nonatomic) BOOL isPlayingMedia;                                         //@synthesize isPlayingMedia=_isPlayingMedia - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)displayMode;
-(id)_deleteImage;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)_addConstraints;
-(id)_playImage;
-(id)_pauseImage;
-(void)setRightBlendedSeparator:(HUBlendedSeparatorView *)arg1 ;
-(HUBlendedSeparatorView *)rightBlendedSeparator;
-(UICollectionView *)clipCollectionView;
-(UIButton *)leftActionButton;
-(UIButton *)rightActionButton;
-(BOOL)isPlayingMedia;
-(void)setIsPlayingMedia:(BOOL)arg1 ;
-(id)playOrPauseImageForEngineMode:(unsigned long long)arg1 ;
-(void)hideEditInterface;
-(void)displayEditInterface;
-(HUBlendedSeparatorView *)leftBlendedSeparator;
-(void)setLeftBlendedSeparator:(HUBlendedSeparatorView *)arg1 ;
-(void)updateTimeControlStatus:(unsigned long long)arg1 forEngineMode:(unsigned long long)arg2 ;
-(void)navigateToLivePosition;
-(void)navigateToOffset:(double)arg1 ;
-(void)updateMode:(unsigned long long)arg1 ;
-(void)updateDisplayMode:(unsigned long long)arg1 ;
-(HUClipScrubberPlayheadView *)playHeadView;
-(void)setPlayHeadView:(HUClipScrubberPlayheadView *)arg1 ;
-(void)setLeftActionButton:(UIButton *)arg1 ;
-(void)setRightActionButton:(UIButton *)arg1 ;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
@end

