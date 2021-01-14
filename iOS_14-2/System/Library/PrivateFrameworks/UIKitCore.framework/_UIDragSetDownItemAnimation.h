/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIViewSpringAnimationBehaviorDescribing, _UIDragSetDownItemAnimationDelegate, _UIDragSetDownAnimationTarget;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIDragItem, _DUIVisibleDroppedItem, UIWindow, UITargetedDragPreview, UIViewPropertyAnimator, UIView, _UIPortalView, _UIPlatterView, _UIPlatterContainerView;

@interface _UIDragSetDownItemAnimation : NSObject {

	BOOL _reachedTarget;
	BOOL _done;
	BOOL _defaultAnimation;
	BOOL _sourceAnimation;
	BOOL _hasStartedSpringAnimation;
	BOOL _midwayToTarget;
	BOOL _almostToTarget;
	BOOL _reparentingCrossfadeComplete;
	BOOL _updatedPreviewWasAdded;
	int _animationCount;
	UIDragItem* _item;
	_DUIVisibleDroppedItem* _droppedItem;
	id<UIViewSpringAnimationBehaviorDescribing> _customSpringAnimationBehavior;
	id<_UIDragSetDownItemAnimationDelegate> _delegate;
	UIWindow* _window;
	id<_UIDragSetDownAnimationTarget> _visualTarget;
	UITargetedDragPreview* _targetedDropPreview;
	UITargetedDragPreview* _updatedTargetedDropPreview;
	double _initialDistanceFromTargetFrame;
	UIViewPropertyAnimator* _propertyAnimator;
	/*^block*/id _completionHandler;
	UIView* _retargetingContainerView;
	_UIPortalView* _retargetingContainerPortalView;
	_UIPlatterView* _appPlatterView;
	_UIPlatterView* _updatedAppPlatterView;
	_UIPlatterView* _druidPlatterView;
	_UIPlatterContainerView* _platterContainerView;
	_UIPlatterView* _defaultPlatterView;
	/*^block*/id _positionHandler;
	/*^block*/id _morphHandler;
	/*^block*/id _midpointHandler;
	/*^block*/id _nonAnimatedMidpointHandler;
	/*^block*/id _nearCompletionHandler;
	CGPoint _center;
	CGPoint _initialVelocity;
	CGPoint _initialTargetVelocity;
	CGRect _targetFrame;

}

@property (assign,nonatomic,__weak) id<_UIDragSetDownItemAnimationDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                                      //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) id<_UIDragSetDownAnimationTarget> visualTarget;                                         //@synthesize visualTarget=_visualTarget - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * targetedDropPreview;                                            //@synthesize targetedDropPreview=_targetedDropPreview - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * updatedTargetedDropPreview;                                     //@synthesize updatedTargetedDropPreview=_updatedTargetedDropPreview - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                                         //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double initialDistanceFromTargetFrame;                                                  //@synthesize initialDistanceFromTargetFrame=_initialDistanceFromTargetFrame - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                                                     //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) BOOL defaultAnimation;                                                                  //@synthesize defaultAnimation=_defaultAnimation - In the implementation block
@property (assign,nonatomic) BOOL sourceAnimation;                                                                   //@synthesize sourceAnimation=_sourceAnimation - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;                                              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL hasStartedSpringAnimation;                                                         //@synthesize hasStartedSpringAnimation=_hasStartedSpringAnimation - In the implementation block
@property (assign,nonatomic) BOOL midwayToTarget;                                                                    //@synthesize midwayToTarget=_midwayToTarget - In the implementation block
@property (assign,nonatomic) BOOL almostToTarget;                                                                    //@synthesize almostToTarget=_almostToTarget - In the implementation block
@property (assign,nonatomic) BOOL reparentingCrossfadeComplete;                                                      //@synthesize reparentingCrossfadeComplete=_reparentingCrossfadeComplete - In the implementation block
@property (assign,nonatomic) BOOL updatedPreviewWasAdded;                                                            //@synthesize updatedPreviewWasAdded=_updatedPreviewWasAdded - In the implementation block
@property (assign,nonatomic) int animationCount;                                                                     //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) long long previewMode; 
@property (assign,nonatomic) CGPoint initialVelocity;                                                                //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign,nonatomic) CGPoint initialTargetVelocity;                                                          //@synthesize initialTargetVelocity=_initialTargetVelocity - In the implementation block
@property (nonatomic,retain) UIView * retargetingContainerView;                                                      //@synthesize retargetingContainerView=_retargetingContainerView - In the implementation block
@property (nonatomic,retain) _UIPortalView * retargetingContainerPortalView;                                         //@synthesize retargetingContainerPortalView=_retargetingContainerPortalView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * appPlatterView;                                                        //@synthesize appPlatterView=_appPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * updatedAppPlatterView;                                                 //@synthesize updatedAppPlatterView=_updatedAppPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * druidPlatterView;                                                      //@synthesize druidPlatterView=_druidPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterContainerView * platterContainerView;                                         //@synthesize platterContainerView=_platterContainerView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * defaultPlatterView;                                                    //@synthesize defaultPlatterView=_defaultPlatterView - In the implementation block
@property (nonatomic,copy) id positionHandler;                                                                       //@synthesize positionHandler=_positionHandler - In the implementation block
@property (nonatomic,copy) id morphHandler;                                                                          //@synthesize morphHandler=_morphHandler - In the implementation block
@property (nonatomic,copy) id midpointHandler;                                                                       //@synthesize midpointHandler=_midpointHandler - In the implementation block
@property (nonatomic,copy) id nonAnimatedMidpointHandler;                                                            //@synthesize nonAnimatedMidpointHandler=_nonAnimatedMidpointHandler - In the implementation block
@property (nonatomic,copy) id nearCompletionHandler;                                                                 //@synthesize nearCompletionHandler=_nearCompletionHandler - In the implementation block
@property (nonatomic,readonly) UIDragItem * item;                                                                    //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) _DUIVisibleDroppedItem * droppedItem;                                                 //@synthesize droppedItem=_droppedItem - In the implementation block
@property (nonatomic,readonly) BOOL reachedTarget;                                                                   //@synthesize reachedTarget=_reachedTarget - In the implementation block
@property (nonatomic,readonly) BOOL done;                                                                            //@synthesize done=_done - In the implementation block
@property (nonatomic,readonly) UIWindow * targetContainerWindow; 
@property (nonatomic,retain) id<UIViewSpringAnimationBehaviorDescribing> customSpringAnimationBehavior;              //@synthesize customSpringAnimationBehavior=_customSpringAnimationBehavior - In the implementation block
-(id)initWithDragItem:(id)arg1 droppedItem:(id)arg2 window:(id)arg3 defaultAnimation:(BOOL)arg4 sourceAnimation:(BOOL)arg5 delegate:(id)arg6 ;
-(CGPoint)initialVelocity;
-(CGPoint)center;
-(void)setInitialVelocity:(CGPoint)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<_UIDragSetDownItemAnimationDelegate>)delegate;
-(UIDragItem *)item;
-(_UIPlatterContainerView *)platterContainerView;
-(void)updateDroppedItem:(id)arg1 ;
-(void)beginAnimation;
-(UIWindow *)targetContainerWindow;
-(void)setCustomSpringAnimationBehavior:(id<UIViewSpringAnimationBehaviorDescribing>)arg1 ;
-(void)prepareToBeginAnimation;
-(void)updateTargetedDropPreview:(id)arg1 ;
-(void)updateAnimationTargeting;
-(id)completionHandler;
-(BOOL)done;
-(long long)previewMode;
-(UIViewPropertyAnimator *)propertyAnimator;
-(int)animationCount;
-(void)setAnimationCount:(int)arg1 ;
-(void)setDelegate:(id<_UIDragSetDownItemAnimationDelegate>)arg1 ;
-(void)setPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)animationCompleted;
-(void)setCenter:(CGPoint)arg1 ;
-(UIWindow *)window;
-(BOOL)reachedTarget;
-(void)setTargetFrame:(CGRect)arg1 ;
-(BOOL)midwayToTarget;
-(BOOL)needsReparenting;
-(id<_UIDragSetDownAnimationTarget>)visualTarget;
-(void)setVisualTarget:(id<_UIDragSetDownAnimationTarget>)arg1 ;
-(BOOL)almostToTarget;
-(BOOL)sourceAnimation;
-(void)configureAnimation;
-(void)prepareAnimationInWindow;
-(void)_setCenterAndVelocityFromDroppedItem:(id)arg1 ;
-(id)morphHandler;
-(void)configureSystemDefaultAnimation;
-(BOOL)updatedPreviewWasAdded;
-(BOOL)defaultAnimation;
-(void)configureCrossfadingAnimationToTargetedPreview;
-(void)animationReachedTarget;
-(void)reparentRetargetingContainerViewInTargetContainer;
-(UITargetedDragPreview *)targetedDropPreview;
-(_UIPlatterView *)updatedAppPlatterView;
-(UITargetedDragPreview *)updatedTargetedDropPreview;
-(/*^block*/id)animationCompletionHandler;
-(void)performTrackingAnimations:(/*^block*/id)arg1 ;
-(void)performSpringAnimations:(/*^block*/id)arg1 ;
-(CGRect)getCurrentTargetFrame;
-(double)estimatedFractionCompleteOfAnimation;
-(id<UIViewSpringAnimationBehaviorDescribing>)customSpringAnimationBehavior;
-(void)setTargetedDropPreview:(UITargetedDragPreview *)arg1 ;
-(void)setUpdatedTargetedDropPreview:(UITargetedDragPreview *)arg1 ;
-(void)setDefaultAnimation:(BOOL)arg1 ;
-(double)initialDistanceFromTargetFrame;
-(void)setInitialDistanceFromTargetFrame:(double)arg1 ;
-(void)setSourceAnimation:(BOOL)arg1 ;
-(BOOL)hasStartedSpringAnimation;
-(void)setHasStartedSpringAnimation:(BOOL)arg1 ;
-(void)setMidwayToTarget:(BOOL)arg1 ;
-(void)setAlmostToTarget:(BOOL)arg1 ;
-(BOOL)reparentingCrossfadeComplete;
-(void)setReparentingCrossfadeComplete:(BOOL)arg1 ;
-(void)setUpdatedPreviewWasAdded:(BOOL)arg1 ;
-(_UIPlatterView *)appPlatterView;
-(_DUIVisibleDroppedItem *)droppedItem;
-(CGPoint)initialTargetVelocity;
-(void)setInitialTargetVelocity:(CGPoint)arg1 ;
-(UIView *)retargetingContainerView;
-(void)setRetargetingContainerView:(UIView *)arg1 ;
-(_UIPortalView *)retargetingContainerPortalView;
-(id)positionHandler;
-(void)setRetargetingContainerPortalView:(_UIPortalView *)arg1 ;
-(void)setAppPlatterView:(_UIPlatterView *)arg1 ;
-(_UIPlatterView *)druidPlatterView;
-(CGRect)targetFrame;
-(void)setUpdatedAppPlatterView:(_UIPlatterView *)arg1 ;
-(void)setDruidPlatterView:(_UIPlatterView *)arg1 ;
-(void)setPlatterContainerView:(_UIPlatterContainerView *)arg1 ;
-(_UIPlatterView *)defaultPlatterView;
-(void)setDefaultPlatterView:(_UIPlatterView *)arg1 ;
-(void)setPositionHandler:(id)arg1 ;
-(void)setMorphHandler:(id)arg1 ;
-(id)midpointHandler;
-(void)setMidpointHandler:(id)arg1 ;
-(id)nearCompletionHandler;
-(id)nonAnimatedMidpointHandler;
-(void)setNonAnimatedMidpointHandler:(id)arg1 ;
-(void)setNearCompletionHandler:(id)arg1 ;
@end

