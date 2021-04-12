/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/QLTransitionControllerProtocol.h>

@protocol QLCustomTransitioning, UIViewControllerContextTransitioning;
@class UIView, UINavigationController, QLTransitionContext, UIViewController, NSDate, QLPreviewController, NSString;

@interface QLTransitionController : NSObject <UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol> {

	UIView* _transitionBackgroundView;
	UINavigationController* _disabledNavigationController;
	/*^block*/id _startTransitionBlock;
	BOOL _showing;
	BOOL _hasPerformedTransition;
	QLTransitionContext* _quickLookTransitionContext;
	UIViewController*<QLCustomTransitioning> _animatedController;
	id<UIViewControllerContextTransitioning> _transitionContext;
	id _transitionDriver;
	double _duration;
	unsigned long long _transitionState;
	NSDate* _setupDate;

}

@property (nonatomic,retain) NSDate * setupDate;                                               //@synthesize setupDate=_setupDate - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedTransition;                                      //@synthesize hasPerformedTransition=_hasPerformedTransition - In the implementation block
@property (retain) QLTransitionContext * quickLookTransitionContext;                           //@synthesize quickLookTransitionContext=_quickLookTransitionContext - In the implementation block
@property (readonly) UIViewController * presenterViewController; 
@property (readonly) QLPreviewController * previewController; 
@property (readonly) UIViewController*<QLCustomTransitioning> animatedController;              //@synthesize animatedController=_animatedController - In the implementation block
@property (__weak) id<UIViewControllerContextTransitioning> transitionContext;                 //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) id transitionDriver;                                                      //@synthesize transitionDriver=_transitionDriver - In the implementation block
@property (assign) double duration;                                                            //@synthesize duration=_duration - In the implementation block
@property (assign) unsigned long long transitionState;                                         //@synthesize transitionState=_transitionState - In the implementation block
@property (assign) BOOL showing;                                                               //@synthesize showing=_showing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeTransition:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(id)transitionDriver;
-(double)transitionDuration:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(BOOL)showing;
-(void)setSetupDate:(NSDate *)arg1 ;
-(void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(BOOL)arg2 isToView:(BOOL)arg3 ;
-(void)setQuickLookTransitionContext:(QLTransitionContext *)arg1 ;
-(QLTransitionContext *)quickLookTransitionContext;
-(void)_prepareTimedForcedDismissal;
-(void)_performStartBlockIfNeeded;
-(void)_performForcedDismissal;
-(void)_completeOverlayTransition:(BOOL)arg1 ;
-(void)_completeBackgroundTransition:(BOOL)arg1 ;
-(BOOL)hasPerformedTransition;
-(void)setHasPerformedTransition:(BOOL)arg1 ;
-(BOOL)forceDismissalIfNeeded;
-(void)setUpWithTransitionContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateOverlayTransitionWithProgress:(double)arg1 ;
-(void)_updateBackgroundTransitionWithProgress:(double)arg1 ;
-(SCD_Struct_QL4)_requiredVisualStateTransitions;
-(UIViewController*<QLCustomTransitioning>)animatedController;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(UIViewController *)presenterViewController;
-(QLPreviewController *)previewController;
-(void)setShowing:(BOOL)arg1 ;
-(unsigned long long)transitionState;
-(void)_performTransition;
-(NSDate *)setupDate;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(double)duration;
-(void)tearDownTransition:(BOOL)arg1 ;
@end
