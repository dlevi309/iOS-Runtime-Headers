/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)accessoryView;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)addScrubberWithDeferral;
-(void)didChangePlayingStatus;
-(void)setPlayControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)timeLabelScrollView;
-(NSLayoutConstraint *)topScrubber;
-(void)setTopScrubber:(NSLayoutConstraint *)arg1 ;
-(UIView *)scrubberContainer;
-(void)setScrubberContainer:(UIView *)arg1 ;
-(double)scrubberVerticalOffset;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
-(void)dealloc;
-(BOOL)scrubbing;
-(void)setScrubbing:(BOOL)arg1 ;
@end

