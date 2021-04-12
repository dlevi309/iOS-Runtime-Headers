/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLMediaItemBaseViewController.h>
#import <libobjc.A.dylib/QLMediaScrubberGestureDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, UIView, UILabel, UIScrollView, NSLayoutConstraint, NSTimer, NSNumber, QLMediaScrubberGesture, UITapGestureRecognizer, NSString;

@interface QLMediaItemViewController : QLMediaItemBaseViewController <QLMediaScrubberGestureDelegate, UIGestureRecognizerDelegate> {

	NSMutableDictionary* _playingInfo;
	UIView* _timeLabelBackground;
	UILabel* _timeLabel;
	UIScrollView* _scrubberScrollView;
	NSLayoutConstraint* _timeLabelConstraintX;
	NSLayoutConstraint* _timeLabelConstraintY;
	NSTimer* _playbackTimeHiddenTimer;
	long long _playbackTimeFormat;
	BOOL _wasPlayingBeforeStartScrubbing;
	NSNumber* _isSeeking;
	QLMediaScrubberGesture* _scrubGesture;
	UITapGestureRecognizer* _tapToPlayGesture;

}

@property (nonatomic,retain) QLMediaScrubberGesture * scrubGesture;                  //@synthesize scrubGesture=_scrubGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToPlayGesture;              //@synthesize tapToPlayGesture=_tapToPlayGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)registeredKeyCommands;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg1 ;
-(void)showTimeLabelIfNeeded;
-(void)hideTimeLabelAfterDelay;
-(id)timeLabelScrollView;
-(void)observePlayingTime:(SCD_Struct_QL15)arg1 ;
-(QLMediaScrubberGesture *)scrubGesture;
-(BOOL)shouldHandleRegisteringForCommandCenterHandlers;
-(void)tapToPlayGestureChanged:(id)arg1 ;
-(void)_registerForCommandCenterHandlers;
-(void)_updateCommandCenterPlayingInfoWithCurrentPlaybackTimeInformation;
-(void)removeTimeLabel;
-(void)_unregisterForCommandCenterHandlers;
-(void)hideTimeLabelAnimated:(BOOL)arg1 ;
-(void)setTimeLabelNeedsUpdate;
-(id)labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3 ;
-(void)showTimeLabel;
-(void)setUpTimeLabelIfNeeded;
-(void)hideTimeLabel;
-(long long)userTappedPlayInControlCenter:(id)arg1 ;
-(long long)userTappedPauseInControlCenter:(id)arg1 ;
-(long long)userScrubbedInControlCenter:(id)arg1 ;
-(id)_playingInfoWithPlaybackDuration:(double)arg1 elapsedTime:(double)arg2 ;
-(void)scrubberDidStartScrubbing:(id)arg1 ;
-(void)scrubber:(id)arg1 didChangeValue:(float)arg2 ;
-(void)scrubberDidEndScrubbing:(id)arg1 ;
-(void)setScrubGesture:(QLMediaScrubberGesture *)arg1 ;
-(UITapGestureRecognizer *)tapToPlayGesture;
-(void)setTapToPlayGesture:(UITapGestureRecognizer *)arg1 ;
@end

