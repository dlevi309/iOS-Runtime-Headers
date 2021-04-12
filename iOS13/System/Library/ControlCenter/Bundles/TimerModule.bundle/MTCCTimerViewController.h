/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
*/

#import <TimerModule/TimerModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUITouchContinuationProviding.h>

@protocol MTCCTimerViewControllerDelegate;
@class MTCCTimer, CCUISteppedSliderView, CADisplayLink, NSString;

@interface MTCCTimerViewController : CCUIButtonModuleViewController <CCUITouchContinuationProviding> {

	id<MTCCTimerViewControllerDelegate> _delegate;
	MTCCTimer* _internalTimer;
	CCUISteppedSliderView* _sliderView;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) MTCCTimer * internalTimer;                                          //@synthesize internalTimer=_internalTimer - In the implementation block
@property (nonatomic,retain) CCUISteppedSliderView * sliderView;                               //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                      //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic,__weak) id<MTCCTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MTCCTimer * timer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<MTCCTimerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MTCCTimerViewControllerDelegate>)arg1 ;
-(MTCCTimer *)timer;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)viewForTouchContinuation;
-(void)setSliderView:(CCUISteppedSliderView *)arg1 ;
-(CCUISteppedSliderView *)sliderView;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(void)displayLinkTick:(id)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(void)setTimer:(id)arg1 animated:(BOOL)arg2 ;
-(void)_reloadForCurrentStateAnimated:(BOOL)arg1 ;
-(void)sliderDidBeginEditing:(id)arg1 ;
-(double)sliderValueFromRemainingTime:(double)arg1 ;
-(MTCCTimer *)internalTimer;
-(void)setInternalTimer:(MTCCTimer *)arg1 ;
@end

