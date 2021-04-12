/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCalendarScrubberViewDelegate.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HUCalendarScrubberViewController, UIButton, AVBackgroundView, UIView, NSLayoutConstraint, HFCameraPlaybackEngine, NSDate, NSString;

@interface HUCalendarScrubberContainerViewController : UIViewController <HUCalendarScrubberViewDelegate, HFCameraPlaybackEngineObserver> {

	HUCalendarScrubberViewController* _calendarScrubber;
	UIButton* _prevWeekButton;
	UIButton* _nextWeekButton;
	AVBackgroundView* _backgroundView;
	UIView* _hairlineViewLeft;
	UIView* _hairlineViewRight;
	NSLayoutConstraint* _backgroundWidthConstraint;
	HFCameraPlaybackEngine* _playbackEngine;
	NSDate* _lastSelectedDate;

}

@property (nonatomic,retain) HUCalendarScrubberViewController * calendarScrubber;              //@synthesize calendarScrubber=_calendarScrubber - In the implementation block
@property (nonatomic,retain) UIButton * prevWeekButton;                                        //@synthesize prevWeekButton=_prevWeekButton - In the implementation block
@property (nonatomic,retain) UIButton * nextWeekButton;                                        //@synthesize nextWeekButton=_nextWeekButton - In the implementation block
@property (nonatomic,retain) AVBackgroundView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * hairlineViewLeft;                                        //@synthesize hairlineViewLeft=_hairlineViewLeft - In the implementation block
@property (nonatomic,retain) UIView * hairlineViewRight;                                       //@synthesize hairlineViewRight=_hairlineViewRight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backgroundWidthConstraint;                   //@synthesize backgroundWidthConstraint=_backgroundWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;                   //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) NSDate * lastSelectedDate;                                        //@synthesize lastSelectedDate=_lastSelectedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(void)setBackgroundView:(AVBackgroundView *)arg1 ;
-(void)updateViewConstraints;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2 ;
-(void)handleNextButton:(id)arg1 ;
-(void)scrubberViewController:(id)arg1 didSelectItemAtIndex:(id)arg2 ;
-(void)scrubberViewController:(id)arg1 didMoveToSection:(unsigned long long)arg2 ;
-(HUCalendarScrubberViewController *)calendarScrubber;
-(UIButton *)prevWeekButton;
-(UIButton *)nextWeekButton;
-(UIView *)hairlineViewLeft;
-(UIView *)hairlineViewRight;
-(void)handlePreviousButton:(id)arg1 ;
-(void)_updateNextPreviousButtonState;
-(NSLayoutConstraint *)backgroundWidthConstraint;
-(NSDate *)lastSelectedDate;
-(void)setLastSelectedDate:(NSDate *)arg1 ;
-(void)_jumpToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCalendarScrubber:(HUCalendarScrubberViewController *)arg1 ;
-(void)setPrevWeekButton:(UIButton *)arg1 ;
-(void)setNextWeekButton:(UIButton *)arg1 ;
-(void)setHairlineViewLeft:(UIView *)arg1 ;
-(void)setHairlineViewRight:(UIView *)arg1 ;
-(void)setBackgroundWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end
