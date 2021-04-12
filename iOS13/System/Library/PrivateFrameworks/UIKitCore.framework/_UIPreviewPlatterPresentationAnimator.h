/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickPresentationTransition.h>

@protocol _UIPreviewPlatterPresentationAnimatorDelegate;
@class UITargetedPreview, UIViewPropertyAnimator, _UIPreviewPlatterPresentationController, _UIContextMenuAnimator, NSArray, _UIPortalView, UIViewFloatAnimatableProperty, _UIContextMenuLayoutArbiterOutput, NSString;

@interface _UIPreviewPlatterPresentationAnimator : NSObject <_UIClickPresentationTransition> {

	BOOL _isDismissTransition;
	BOOL _reparentsInDestinationContainer;
	UITargetedPreview* _sourcePreview;
	id<_UIPreviewPlatterPresentationAnimatorDelegate> _delegate;
	_UIPreviewPlatterPresentationController* _presentationController;
	_UIContextMenuAnimator* _alongsideAnimator;
	unsigned long long _dismissalStyle;
	NSArray* _preferredBackgroundEffects;
	UIViewPropertyAnimator* _backgroundEffectAnimator;
	_UIPortalView* _reparentingPortalView;
	UITargetedPreview* _trackedPreviewForReparenting;
	UIViewFloatAnimatableProperty* _animationProgress;
	/*^block*/id _reparentingAnimationBlock;
	/*^block*/id _backgroundAnimationBlock;
	/*^block*/id _accessoryAnimationBlock;
	_UIContextMenuLayoutArbiterOutput* _expandedLayout;
	UIEdgeInsets _preferredBackgroundInsets;

}

@property (assign,nonatomic,__weak) _UIPreviewPlatterPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL isDismissTransition;                                                             //@synthesize isDismissTransition=_isDismissTransition - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * backgroundEffectAnimator;                                    //@synthesize backgroundEffectAnimator=_backgroundEffectAnimator - In the implementation block
@property (assign,nonatomic) BOOL reparentsInDestinationContainer;                                                 //@synthesize reparentsInDestinationContainer=_reparentsInDestinationContainer - In the implementation block
@property (nonatomic,retain) _UIPortalView * reparentingPortalView;                                                //@synthesize reparentingPortalView=_reparentingPortalView - In the implementation block
@property (nonatomic,retain) UITargetedPreview * trackedPreviewForReparenting;                                     //@synthesize trackedPreviewForReparenting=_trackedPreviewForReparenting - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * animationProgress;                                    //@synthesize animationProgress=_animationProgress - In the implementation block
@property (nonatomic,copy) id reparentingAnimationBlock;                                                           //@synthesize reparentingAnimationBlock=_reparentingAnimationBlock - In the implementation block
@property (nonatomic,copy) id backgroundAnimationBlock;                                                            //@synthesize backgroundAnimationBlock=_backgroundAnimationBlock - In the implementation block
@property (nonatomic,copy) id accessoryAnimationBlock;                                                             //@synthesize accessoryAnimationBlock=_accessoryAnimationBlock - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiterOutput * expandedLayout;                                   //@synthesize expandedLayout=_expandedLayout - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewPlatterPresentationAnimatorDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIContextMenuAnimator * alongsideAnimator;                                           //@synthesize alongsideAnimator=_alongsideAnimator - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalStyle;                                                    //@synthesize dismissalStyle=_dismissalStyle - In the implementation block
@property (nonatomic,retain) NSArray * preferredBackgroundEffects;                                                 //@synthesize preferredBackgroundEffects=_preferredBackgroundEffects - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredBackgroundInsets;                                               //@synthesize preferredBackgroundInsets=_preferredBackgroundInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UITargetedPreview * sourcePreview;                                                      //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
-(void)dealloc;
-(id<_UIPreviewPlatterPresentationAnimatorDelegate>)delegate;
-(void)setDelegate:(id<_UIPreviewPlatterPresentationAnimatorDelegate>)arg1 ;
-(id)_containerView;
-(NSArray *)preferredBackgroundEffects;
-(void)setPreferredBackgroundEffects:(NSArray *)arg1 ;
-(UIEdgeInsets)preferredBackgroundInsets;
-(void)setPreferredBackgroundInsets:(UIEdgeInsets)arg1 ;
-(id)_backgroundView;
-(_UIPreviewPlatterPresentationController *)presentationController;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setDismissalStyle:(unsigned long long)arg1 ;
-(_UIContextMenuAnimator *)alongsideAnimator;
-(id)_platterView;
-(id)_actionsView;
-(void)setExpandedLayout:(_UIContextMenuLayoutArbiterOutput *)arg1 ;
-(BOOL)isDismissTransition;
-(_UIContextMenuLayoutArbiterOutput *)expandedLayout;
-(id)_targetedPreviewForDismissalAnimation;
-(void)_setBackgroundVisible:(BOOL)arg1 ;
-(void)setIsDismissTransition:(BOOL)arg1 ;
-(void)setPresentationController:(_UIPreviewPlatterPresentationController *)arg1 ;
-(void)setReparentsInDestinationContainer:(BOOL)arg1 ;
-(void)_prepareAnimatablePropertyBasedAnimations;
-(id)_platterTransitionView;
-(void)setBackgroundEffectAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)_installAccessories;
-(BOOL)_isDismissingToDrag;
-(UIViewFloatAnimatableProperty *)animationProgress;
-(unsigned long long)dismissalStyle;
-(BOOL)reparentsInDestinationContainer;
-(void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1 ;
-(void)_anchorTransitionViewToTargetedPreview:(id)arg1 ;
-(UIViewPropertyAnimator *)backgroundEffectAnimator;
-(void)setBackgroundAnimationBlock:(id)arg1 ;
-(void)_updateAccessoryAttachment:(id)arg1 ;
-(void)setAccessoryAnimationBlock:(id)arg1 ;
-(void)_actuallyPerformTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)_performReduceMotionDisappearanceTransition;
-(void)_performReduceMotionAppearanceTransition;
-(_UIPortalView *)reparentingPortalView;
-(void)setAnimationProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(id)reparentingAnimationBlock;
-(id)backgroundAnimationBlock;
-(id)accessoryAnimationBlock;
-(void)setTrackedPreviewForReparenting:(UITargetedPreview *)arg1 ;
-(void)setReparentingPortalView:(_UIPortalView *)arg1 ;
-(void)setReparentingAnimationBlock:(id)arg1 ;
-(id)initWithPresentationController:(id)arg1 asDismissal:(BOOL)arg2 ;
-(void)animateForDragSetDown;
-(void)setAlongsideAnimator:(_UIContextMenuAnimator *)arg1 ;
-(UITargetedPreview *)trackedPreviewForReparenting;
@end

