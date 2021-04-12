/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLMediaItemViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class QLOverlayPlayButton, UIView, UIScrollView, QLVideoScrubberView, QLWaveformScrubberViewProvider, NSLayoutConstraint, NSString;

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {

	QLOverlayPlayButton* _playButton;
	UIView* _scrubberContainer;
	UIScrollView* _scrubberContainerScrollView;
	QLVideoScrubberView* _scrubber;
	QLWaveformScrubberViewProvider* _scrubberViewProvider;
	BOOL _previewIsVisisble;
	BOOL _scrubbing;
	NSLayoutConstraint* _topScrubber;
	double _scrubberVerticalOffset;

}

@property (retain) NSLayoutConstraint * topScrubber;                //@synthesize topScrubber=_topScrubber - In the implementation block
@property (retain) UIView * scrubberContainer;                      //@synthesize scrubberContainer=_scrubberContainer - In the implementation block
@property (assign) BOOL scrubbing;                                  //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign) double scrubberVerticalOffset;                   //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessoryView;
-(void)_tapRecognized:(id)arg1 ;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)addScrubberWithDeferral;
-(void)didChangePlayingStatus;
-(void)setPlayControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)timeLabelScrollView;
-(NSLayoutConstraint *)topScrubber;
-(void)setTopScrubber:(NSLayoutConstraint *)arg1 ;
-(UIView *)scrubberContainer;
-(void)setScrubberContainer:(UIView *)arg1 ;
-(BOOL)scrubbing;
-(double)scrubberVerticalOffset;
-(void)setScrubberVerticalOffset:(double)arg1 ;
@end

