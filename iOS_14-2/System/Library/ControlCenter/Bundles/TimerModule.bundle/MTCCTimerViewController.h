/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)setSliderView:(CCUISteppedSliderView *)arg1 ;
-(MTCCTimer *)timer;
-(void)_reloadForCurrentStateAnimated:(BOOL)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(id)init;
-(id<MTCCTimerViewControllerDelegate>)delegate;
-(MTCCTimer *)internalTimer;
-(void)setInternalTimer:(MTCCTimer *)arg1 ;
-(void)displayLinkTick:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)viewForTouchContinuation;
-(double)preferredExpandedContentHeight;
-(CCUISteppedSliderView *)sliderView;
-(double)preferredExpandedContinuousCornerRadius;
-(void)setDelegate:(id<MTCCTimerViewControllerDelegate>)arg1 ;
-(double)preferredExpandedContentWidth;
-(double)sliderValueFromRemainingTime:(double)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)sliderValueChanged:(id)arg1 ;
-(void)sliderDidBeginEditing:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setTimer:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

