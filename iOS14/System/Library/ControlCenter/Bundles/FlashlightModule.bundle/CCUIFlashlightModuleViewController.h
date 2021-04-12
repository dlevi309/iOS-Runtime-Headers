/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
*/

#import <FlashlightModule/FlashlightModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/SBUIFlashlightObserver.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, SBUIFlashlightController, CCUISteppedSliderView, NSString;

@interface CCUIFlashlightModuleViewController : CCUIButtonModuleViewController <SBUIFlashlightObserver, CCUIContentModuleContentViewController> {

	SBUIFlashlightController* _flashlight;
	CCUISteppedSliderView* _sliderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(id)viewForTouchContinuation;
-(double)preferredExpandedContentHeight;
-(double)preferredExpandedContinuousCornerRadius;
-(void)_sliderValueDidChange:(id)arg1 ;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateSliderValue;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

