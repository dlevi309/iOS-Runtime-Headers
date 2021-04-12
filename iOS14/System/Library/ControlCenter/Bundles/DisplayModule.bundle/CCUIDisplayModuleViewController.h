/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
*/

#import <DisplayModule/DisplayModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol CCUIDisplayModuleViewControllerDelegate;
@class NSArray, CALayer, UIViewPropertyAnimator, CCUIContinuousSliderView, NSString;

@interface CCUIDisplayModuleViewController : UIViewController <CCUIGroupRendering, CCUIContentModuleContentViewController> {

	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
	BOOL _expanded;
	id<CCUIDisplayModuleViewControllerDelegate> _delegate;
	CCUIContinuousSliderView* _sliderView;

}

@property (nonatomic,retain) CCUIContinuousSliderView * sliderView;                                      //@synthesize sliderView=_sliderView - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIDisplayModuleViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentBrightness; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
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
-(void)viewWillLayoutSubviews;
-(void)setSliderView:(CCUIContinuousSliderView *)arg1 ;
-(void)_updateWithCurrentBrightnessAnimated:(BOOL)arg1 ;
-(float)currentBrightness;
-(void)_setBacklightLevel:(float)arg1 ;
-(id<CCUIDisplayModuleViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(BOOL)isGroupRenderingRequired;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)viewForTouchContinuation;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(CCUIContinuousSliderView *)sliderView;
-(double)preferredExpandedContinuousCornerRadius;
-(void)setDelegate:(id<CCUIDisplayModuleViewControllerDelegate>)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(void)_sliderEditingDidEnd:(id)arg1 ;
-(NSArray *)punchOutRootLayers;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_noteScreenBrightnessDidChange:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(float)_backlightLevel;
-(void)_sliderEditingDidBegin:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)dealloc;
@end

