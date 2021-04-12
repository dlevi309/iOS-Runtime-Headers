/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <libobjc.A.dylib/HUCameraPlayerScrubbing.h>

@class UIButton, HUMiniScrubber, AVBackgroundView, HFCameraPlaybackEngine, HMCameraClip, CADisplayLink, NSDate, HUBlendedSeparatorView, NSString;

@interface HUCameraMiniScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing> {

	BOOL _isVisible;
	BOOL _isScrubbing;
	UIButton* _playPauseButton;
	HUMiniScrubber* _playbackPositionSlider;
	AVBackgroundView* _backgroundView;
	HFCameraPlaybackEngine* _playbackEngine;
	HMCameraClip* _currentClip;
	UIButton* _liveButton;
	CADisplayLink* _displayLink;
	NSDate* _clipStartDate;
	HUBlendedSeparatorView* _rightBlendedSeparator;

}

@property (nonatomic,retain) UIButton * playPauseButton;                                  //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) HUMiniScrubber * playbackPositionSlider;                     //@synthesize playbackPositionSlider=_playbackPositionSlider - In the implementation block
@property (nonatomic,retain) AVBackgroundView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackEngine * playbackEngine;                     //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) HMCameraClip * currentClip;                                  //@synthesize currentClip=_currentClip - In the implementation block
@property (nonatomic,retain) UIButton * liveButton;                                       //@synthesize liveButton=_liveButton - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                              //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                            //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,retain) NSDate * clipStartDate;                                      //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (nonatomic,retain) HUBlendedSeparatorView * rightBlendedSeparator;              //@synthesize rightBlendedSeparator=_rightBlendedSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentScrubberResolution; 
-(void)dealloc;
-(BOOL)isVisible;
-(AVBackgroundView *)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setBackgroundView:(AVBackgroundView *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)isScrubbing;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)scrubberValueChanged:(id)arg1 ;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(UIButton *)playPauseButton;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(NSDate *)clipStartDate;
-(void)setClipStartDate:(NSDate *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2 ;
-(HMCameraClip *)currentClip;
-(void)_updateSliderPosition;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)_displayLinkUpdated:(id)arg1 ;
-(UIButton *)liveButton;
-(void)playPauseButtonPressed:(id)arg1 ;
-(void)toggleLive:(id)arg1 ;
-(void)setPlaybackPositionSlider:(HUMiniScrubber *)arg1 ;
-(HUMiniScrubber *)playbackPositionSlider;
-(double)_playbackLength;
-(void)_updateScrubberDisplayLinkState;
-(void)_seekToCurrentScrubberValue;
-(void)setRightBlendedSeparator:(HUBlendedSeparatorView *)arg1 ;
-(void)_loopPlaybackIfNeeded;
-(double)currentScrubberResolution;
-(id)initWithPlaybackEngine:(id)arg1 startDate:(id)arg2 ;
-(void)setCurrentClip:(HMCameraClip *)arg1 ;
-(void)setLiveButton:(UIButton *)arg1 ;
-(HUBlendedSeparatorView *)rightBlendedSeparator;
@end

