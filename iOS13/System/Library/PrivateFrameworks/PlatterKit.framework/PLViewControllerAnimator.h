/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol PLViewControllerAnimatorDelegate;
@class UIView, NSPointerArray, UIViewPropertyAnimator, NSString;

@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	UIView* _sourceView;
	NSPointerArray* _observers;
	BOOL _didPrepareForTransition;
	BOOL _presenting;
	BOOL _includePresentingViewInAnimation;
	BOOL _runAlongsideAnimationsManually;
	UIViewPropertyAnimator* _propertyAnimator;
	id<PLViewControllerAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLViewControllerAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;                             //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) BOOL includePresentingViewInAnimation;                             //@synthesize includePresentingViewInAnimation=_includePresentingViewInAnimation - In the implementation block
@property (assign,nonatomic) BOOL runAlongsideAnimationsManually;                               //@synthesize runAlongsideAnimationsManually=_runAlongsideAnimationsManually - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;                       //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)drivesAnimation;
-(id<PLViewControllerAnimatorDelegate>)delegate;
-(void)setDelegate:(id<PLViewControllerAnimatorDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(BOOL)isPresenting;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(id)_newPropertyAnimator;
-(id)initForPresentation:(BOOL)arg1 withSourceView:(id)arg2 ;
-(void)setIncludePresentingViewInAnimation:(BOOL)arg1 ;
-(id)_presentingViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(id)_presentedViewControllerForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(id)_presentedViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(id)_presentedExpandedPlatterForPresentedView:(id)arg1 ;
-(BOOL)includePresentingViewInAnimation;
-(id)_previewInteractionPresentableViewControllerForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(void)_performTransitionWithContext:(id)arg1 ;
-(void)performTransitionWithContext:(id)arg1 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(void)_animateTransitionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isTransitionAnimated;
-(id)_sourceViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(id)_presentingViewControllerForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)runAlongsideAnimationsManually;
-(void)setRunAlongsideAnimationsManually:(BOOL)arg1 ;
@end

