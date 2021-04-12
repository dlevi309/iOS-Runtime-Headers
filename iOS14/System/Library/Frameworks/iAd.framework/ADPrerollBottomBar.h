/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@protocol ADPrerollBottomBarDelegate;
@class ADPrerollButton, UILabel, NSTimer, UIImage, ADVolumeSlider;

@interface ADPrerollBottomBar : UIView {

	BOOL _layoutForExpandedSize;
	BOOL _isFullscreen;
	BOOL _skipButtonCountingDown;
	id<ADPrerollBottomBarDelegate> _delegate;
	ADPrerollButton* _actionButton;
	UILabel* _skipLabel;
	UILabel* _shortSkipLabel;
	ADPrerollButton* _skipButton;
	double _skipDuration;
	double _lastViewingStartTime;
	double _accumulatedViewingTime;
	NSTimer* _skipAccumulationTimer;
	UIImage* _playImage;
	UIImage* _pauseImage;
	ADPrerollButton* _playPauseButton;
	ADVolumeSlider* _volumeSlider;

}

@property (nonatomic,retain) ADPrerollButton * actionButton;                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UILabel * skipLabel;                                         //@synthesize skipLabel=_skipLabel - In the implementation block
@property (nonatomic,retain) UILabel * shortSkipLabel;                                    //@synthesize shortSkipLabel=_shortSkipLabel - In the implementation block
@property (nonatomic,retain) ADPrerollButton * skipButton;                                //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) BOOL skipButtonCountingDown;                                 //@synthesize skipButtonCountingDown=_skipButtonCountingDown - In the implementation block
@property (assign,nonatomic) double skipDuration;                                         //@synthesize skipDuration=_skipDuration - In the implementation block
@property (assign,nonatomic) double lastViewingStartTime;                                 //@synthesize lastViewingStartTime=_lastViewingStartTime - In the implementation block
@property (assign,nonatomic) double accumulatedViewingTime;                               //@synthesize accumulatedViewingTime=_accumulatedViewingTime - In the implementation block
@property (nonatomic,retain) NSTimer * skipAccumulationTimer;                             //@synthesize skipAccumulationTimer=_skipAccumulationTimer - In the implementation block
@property (nonatomic,retain) UIImage * playImage;                                         //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                        //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,retain) ADPrerollButton * playPauseButton;                           //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) ADVolumeSlider * volumeSlider;                               //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (assign,nonatomic,__weak) id<ADPrerollBottomBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL layoutForExpandedSize;                                  //@synthesize layoutForExpandedSize=_layoutForExpandedSize - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                           //@synthesize isFullscreen=_isFullscreen - In the implementation block
-(BOOL)isFullscreen;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<ADPrerollBottomBarDelegate>)delegate;
-(void)setVolumeSlider:(ADVolumeSlider *)arg1 ;
-(void)setDelegate:(id<ADPrerollBottomBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_actionButtonTapped:(id)arg1 ;
-(ADPrerollButton *)actionButton;
-(void)setActionButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)playPauseButton;
-(ADVolumeSlider *)volumeSlider;
-(UIImage *)playImage;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(ADPrerollButton *)skipButton;
-(void)setSkipButton:(ADPrerollButton *)arg1 ;
-(UIImage *)pauseImage;
-(void)dealloc;
-(void)setPlayPauseButton:(ADPrerollButton *)arg1 ;
-(void)setSkipDuration:(double)arg1 ;
-(double)skipDuration;
-(void)_skipButtonTapped:(id)arg1 ;
-(void)displayAsPaused:(BOOL)arg1 ;
-(void)setLayoutForExpandedSize:(BOOL)arg1 ;
-(BOOL)layoutForExpandedSize;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)setSkipLabel:(UILabel *)arg1 ;
-(UILabel *)skipLabel;
-(void)setShortSkipLabel:(UILabel *)arg1 ;
-(UILabel *)shortSkipLabel;
-(double)accumulatedViewingTime;
-(void)_pauseButtonTapped:(id)arg1 ;
-(void)_pauseCountdown;
-(void)_resumeCountdown;
-(BOOL)skipButtonCountingDown;
-(void)_updateSkipLabel;
-(void)setSkipButtonCountingDown:(BOOL)arg1 ;
-(void)setLastViewingStartTime:(double)arg1 ;
-(void)_accumulateViewingTime;
-(void)setSkipAccumulationTimer:(NSTimer *)arg1 ;
-(double)lastViewingStartTime;
-(void)setAccumulatedViewingTime:(double)arg1 ;
-(void)showActionButton:(BOOL)arg1 ;
-(void)beginCountdownWithDuration:(double)arg1 ;
-(NSTimer *)skipAccumulationTimer;
@end

