/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickPresentationTransition.h>

@protocol _UIContextMenuPresentationAnimationDelegate;
@class UITargetedPreview, UIViewPropertyAnimator, _UIPreviewPlatterPresentationController, _UIContextMenuAnimator, NSArray, _UIPortalView, _UIContextMenuReparentingContainerView, UIViewFloatAnimatableProperty, _UIContextMenuLayoutArbiterOutput, NSString;

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition> {

	BOOL _previewOverlapsMenu;
	BOOL _isDismissTransition;
	BOOL _reparentsInDestinationContainer;
	UITargetedPreview* _sourcePreview;
	id<_UIContextMenuPresentationAnimationDelegate> _delegate;
	_UIPreviewPlatterPresentationController* _presentationController;
	_UIContextMenuAnimator* _alongsideAnimator;
	unsigned long long _dismissalStyle;
	NSArray* _preferredBackgroundEffects;
	_UIPortalView* _reparentingPortalView;
	UITargetedPreview* _trackedPreviewForReparenting;
	_UIContextMenuReparentingContainerView* _reparentingContainerView;
	UIViewFloatAnimatableProperty* _animationProgress;
	/*^block*/id _reparentingAnimationBlock;
	/*^block*/id _backgroundAnimationBlock;
	/*^block*/id _accessoryAnimationBlock;
	_UIContextMenuLayoutArbiterOutput* _expandedLayout;
	UIEdgeInsets _preferredBackgroundInsets;

}

@property (assign,nonatomic,__weak) _UIPreviewPlatterPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL isDismissTransition;                                                             //@synthesize isDismissTransition=_isDismissTransition - In the implementation block
@property (assign,nonatomic) BOOL reparentsInDestinationContainer;                                                 //@synthesize reparentsInDestinationContainer=_reparentsInDestinationContainer - In the implementation block
@property (nonatomic,retain) _UIPortalView * reparentingPortalView;                                                //@synthesize reparentingPortalView=_reparentingPortalView - In the implementation block
@property (nonatomic,retain) UITargetedPreview * trackedPreviewForReparenting;                                     //@synthesize trackedPreviewForReparenting=_trackedPreviewForReparenting - In the implementation block
@property (nonatomic,retain) _UIContextMenuReparentingContainerView * reparentingContainerView;                    //@synthesize reparentingContainerView=_reparentingContainerView - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * animationProgress;                                    //@synthesize animationProgress=_animationProgress - In the implementation block
@property (nonatomic,copy) id reparentingAnimationBlock;                                                           //@synthesize reparentingAnimationBlock=_reparentingAnimationBlock - In the implementation block
@property (nonatomic,copy) id backgroundAnimationBlock;                                                            //@synthesize backgroundAnimationBlock=_backgroundAnimationBlock - In the implementation block
@property (nonatomic,copy) id accessoryAnimationBlock;                                                             //@synthesize accessoryAnimationBlock=_accessoryAnimationBlock - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiterOutput * expandedLayout;                                   //@synthesize expandedLayout=_expandedLayout - In the implementation block
@property (assign,nonatomic,__weak) id<_UIContextMenuPresentationAnimationDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIContextMenuAnimator * alongsideAnimator;                                           //@synthesize alongsideAnimator=_alongsideAnimator - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalStyle;                                                    //@synthesize dismissalStyle=_dismissalStyle - In the implementation block
@property (nonatomic,retain) NSArray * preferredBackgroundEffects;                                                 //@synthesize preferredBackgroundEffects=_preferredBackgroundEffects - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredBackgroundInsets;                                               //@synthesize preferredBackgroundInsets=_preferredBackgroundInsets - In the implementation block
@property (assign,nonatomic) BOOL previewOverlapsMenu;                                                             //@synthesize previewOverlapsMenu=_previewOverlapsMenu - In the implementation block
@property (nonatomic,copy) UITargetedPreview * sourcePreview;                                                      //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UIContextMenuPresentationAnimationDelegate>)delegate;
-(id)_backgroundView;
-(unsigned long long)dismissalStyle;
-(BOOL)isDismissTransition;
-(_UIContextMenuLayoutArbiterOutput *)expandedLayout;
-(void)setExpandedLayout:(_UIContextMenuLayoutArbiterOutput *)arg1 ;
-(UIViewFloatAnimatableProperty *)animationProgress;
-(id)_targetedPreviewForDismissalAnimation;
-(void)setPresentationController:(_UIPreviewPlatterPresentationController *)arg1 ;
-(void)_installAccessories;
-(void)_anchorTransitionViewToTargetedPreview:(id)arg1 ;
-(BOOL)_isDismissingToDrag;
-(void)setReparentsInDestinationContainer:(BOOL)arg1 ;
-(void)_setBackgroundVisible:(BOOL)arg1 ;
-(void)setIsDismissTransition:(BOOL)arg1 ;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)_prepareAnimatablePropertyBasedAnimations;
-(id)_platterTransitionView;
-(BOOL)reparentsInDestinationContainer;
-(void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1 ;
-(BOOL)_shouldAnimateBackgroundEffects;
-(void)setBackgroundAnimationBlock:(id)arg1 ;
-(void)_updateAccessoryAttachment:(id)arg1 ;
-(void)setAccessoryAnimationBlock:(id)arg1 ;
-(void)_actuallyPerformTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)_performReduceMotionDisappearanceTransition;
-(_UIPortalView *)reparentingPortalView;
-(void)_performReduceMotionAppearanceTransition;
-(_UIContextMenuReparentingContainerView *)reparentingContainerView;
-(void)setAnimationProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(id)reparentingAnimationBlock;
-(id)backgroundAnimationBlock;
-(id)accessoryAnimationBlock;
-(void)setTrackedPreviewForReparenting:(UITargetedPreview *)arg1 ;
-(void)setReparentingContainerView:(_UIContextMenuReparentingContainerView *)arg1 ;
-(void)setReparentingPortalView:(_UIPortalView *)arg1 ;
-(void)setReparentingAnimationBlock:(id)arg1 ;
-(id)initWithPresentationController:(id)arg1 asDismissal:(BOOL)arg2 ;
-(void)animateForDragSetDown;
-(void)setAlongsideAnimator:(_UIContextMenuAnimator *)arg1 ;
-(UITargetedPreview *)trackedPreviewForReparenting;
-(id)_containerView;
-(void)setDelegate:(id<_UIContextMenuPresentationAnimationDelegate>)arg1 ;
-(void)setPreferredBackgroundEffects:(NSArray *)arg1 ;
-(void)setPreferredBackgroundInsets:(UIEdgeInsets)arg1 ;
-(id)_platterView;
-(id)_actionsView;
-(UIEdgeInsets)preferredBackgroundInsets;
-(UITargetedPreview *)sourcePreview;
-(NSArray *)preferredBackgroundEffects;
-(_UIPreviewPlatterPresentationController *)presentationController;
-(BOOL)previewOverlapsMenu;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setPreviewOverlapsMenu:(BOOL)arg1 ;
-(_UIContextMenuAnimator *)alongsideAnimator;
-(void)setDismissalStyle:(unsigned long long)arg1 ;
@end

