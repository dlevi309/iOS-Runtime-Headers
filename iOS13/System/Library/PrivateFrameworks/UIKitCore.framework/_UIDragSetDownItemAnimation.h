/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDragSetDownItemAnimationDelegate, _UIDragSetDownAnimationTarget;
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

@property (assign,nonatomic,__weak) id<_UIDragSetDownItemAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) id<_UIDragSetDownAnimationTarget> visualTarget;                       //@synthesize visualTarget=_visualTarget - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * targetedDropPreview;                          //@synthesize targetedDropPreview=_targetedDropPreview - In the implementation block
@property (nonatomic,retain) UITargetedDragPreview * updatedTargetedDropPreview;                   //@synthesize updatedTargetedDropPreview=_updatedTargetedDropPreview - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double initialDistanceFromTargetFrame;                                //@synthesize initialDistanceFromTargetFrame=_initialDistanceFromTargetFrame - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                                   //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) BOOL defaultAnimation;                                                //@synthesize defaultAnimation=_defaultAnimation - In the implementation block
@property (assign,nonatomic) BOOL sourceAnimation;                                                 //@synthesize sourceAnimation=_sourceAnimation - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;                            //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL hasStartedSpringAnimation;                                       //@synthesize hasStartedSpringAnimation=_hasStartedSpringAnimation - In the implementation block
@property (assign,nonatomic) BOOL midwayToTarget;                                                  //@synthesize midwayToTarget=_midwayToTarget - In the implementation block
@property (assign,nonatomic) BOOL almostToTarget;                                                  //@synthesize almostToTarget=_almostToTarget - In the implementation block
@property (assign,nonatomic) BOOL reparentingCrossfadeComplete;                                    //@synthesize reparentingCrossfadeComplete=_reparentingCrossfadeComplete - In the implementation block
@property (assign,nonatomic) BOOL updatedPreviewWasAdded;                                          //@synthesize updatedPreviewWasAdded=_updatedPreviewWasAdded - In the implementation block
@property (assign,nonatomic) int animationCount;                                                   //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) long long previewMode; 
@property (assign,nonatomic) CGPoint initialVelocity;                                              //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign,nonatomic) CGPoint initialTargetVelocity;                                        //@synthesize initialTargetVelocity=_initialTargetVelocity - In the implementation block
@property (nonatomic,retain) UIView * retargetingContainerView;                                    //@synthesize retargetingContainerView=_retargetingContainerView - In the implementation block
@property (nonatomic,retain) _UIPortalView * retargetingContainerPortalView;                       //@synthesize retargetingContainerPortalView=_retargetingContainerPortalView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * appPlatterView;                                      //@synthesize appPlatterView=_appPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * updatedAppPlatterView;                               //@synthesize updatedAppPlatterView=_updatedAppPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterView * druidPlatterView;                                    //@synthesize druidPlatterView=_druidPlatterView - In the implementation block
@property (nonatomic,retain) _UIPlatterContainerView * platterContainerView;                       //@synthesize platterContainerView=_platterContainerView - In the implementation block
@property (nonatomic,copy) id positionHandler;                                                     //@synthesize positionHandler=_positionHandler - In the implementation block
@property (nonatomic,copy) id morphHandler;                                                        //@synthesize morphHandler=_morphHandler - In the implementation block
@property (nonatomic,copy) id midpointHandler;                                                     //@synthesize midpointHandler=_midpointHandler - In the implementation block
@property (nonatomic,copy) id nonAnimatedMidpointHandler;                                          //@synthesize nonAnimatedMidpointHandler=_nonAnimatedMidpointHandler - In the implementation block
@property (nonatomic,copy) id nearCompletionHandler;                                               //@synthesize nearCompletionHandler=_nearCompletionHandler - In the implementation block
@property (nonatomic,readonly) UIDragItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) _DUIVisibleDroppedItem * droppedItem;                               //@synthesize droppedItem=_droppedItem - In the implementation block
@property (nonatomic,readonly) BOOL reachedTarget;                                                 //@synthesize reachedTarget=_reachedTarget - In the implementation block
@property (nonatomic,readonly) BOOL done;                                                          //@synthesize done=_done - In the implementation block
-(id<_UIDragSetDownItemAnimationDelegate>)delegate;
-(void)setDelegate:(id<_UIDragSetDownItemAnimationDelegate>)arg1 ;
-(UIDragItem *)item;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)done;
-(CGPoint)initialVelocity;
-(void)setInitialVelocity:(CGPoint)arg1 ;
-(UIWindow *)window;
-(UIViewPropertyAnimator *)propertyAnimator;
-(void)setPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(int)animationCount;
-(void)setAnimationCount:(int)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(long long)previewMode;
-(id)initWithDragItem:(id)arg1 droppedItem:(id)arg2 window:(id)arg3 defaultAnimation:(BOOL)arg4 sourceAnimation:(BOOL)arg5 delegate:(id)arg6 ;
-(void)prepareToBeginAnimation;
-(void)updateDroppedItem:(id)arg1 ;
-(void)updateTargetedDropPreview:(id)arg1 ;
-(void)beginAnimation;
-(void)updateAnimationTargeting;
-(BOOL)reachedTarget;
-(_UIPlatterContainerView *)platterContainerView;
-(void)animationCompleted;
-(void)prepareAnimationInWindow;
-(void)configureAnimation;
-(void)_setCenterAndVelocityFromDroppedItem:(id)arg1 ;
-(void)configureSystemDefaultAnimation;
-(void)configureCrossfadingAnimationToTargetedPreview;
-(_DUIVisibleDroppedItem *)droppedItem;
-(void)animationReachedTarget;
-(BOOL)needsReparenting;
-(void)reparentRetargetingContainerViewInTargetContainer;
-(CGRect)targetFrame;
-(UITargetedDragPreview *)targetedDropPreview;
-(BOOL)updatedPreviewWasAdded;
-(_UIPlatterView *)updatedAppPlatterView;
-(UITargetedDragPreview *)updatedTargetedDropPreview;
-(id<_UIDragSetDownAnimationTarget>)visualTarget;
-(UIView *)retargetingContainerView;
-(/*^block*/id)animationCompletionHandler;
-(void)performTrackingAnimations:(/*^block*/id)arg1 ;
-(void)performSpringAnimations:(/*^block*/id)arg1 ;
-(CGRect)getCurrentTargetFrame;
-(double)estimatedFractionCompleteOfAnimation;
-(void)setVisualTarget:(id<_UIDragSetDownAnimationTarget>)arg1 ;
-(void)setTargetedDropPreview:(UITargetedDragPreview *)arg1 ;
-(void)setUpdatedTargetedDropPreview:(UITargetedDragPreview *)arg1 ;
-(double)initialDistanceFromTargetFrame;
-(void)setInitialDistanceFromTargetFrame:(double)arg1 ;
-(void)setTargetFrame:(CGRect)arg1 ;
-(BOOL)defaultAnimation;
-(void)setDefaultAnimation:(BOOL)arg1 ;
-(BOOL)sourceAnimation;
-(void)setSourceAnimation:(BOOL)arg1 ;
-(BOOL)hasStartedSpringAnimation;
-(void)setHasStartedSpringAnimation:(BOOL)arg1 ;
-(BOOL)midwayToTarget;
-(void)setMidwayToTarget:(BOOL)arg1 ;
-(BOOL)almostToTarget;
-(void)setAlmostToTarget:(BOOL)arg1 ;
-(BOOL)reparentingCrossfadeComplete;
-(void)setReparentingCrossfadeComplete:(BOOL)arg1 ;
-(void)setUpdatedPreviewWasAdded:(BOOL)arg1 ;
-(CGPoint)initialTargetVelocity;
-(void)setInitialTargetVelocity:(CGPoint)arg1 ;
-(void)setRetargetingContainerView:(UIView *)arg1 ;
-(_UIPortalView *)retargetingContainerPortalView;
-(void)setRetargetingContainerPortalView:(_UIPortalView *)arg1 ;
-(_UIPlatterView *)appPlatterView;
-(void)setAppPlatterView:(_UIPlatterView *)arg1 ;
-(void)setUpdatedAppPlatterView:(_UIPlatterView *)arg1 ;
-(_UIPlatterView *)druidPlatterView;
-(void)setDruidPlatterView:(_UIPlatterView *)arg1 ;
-(void)setPlatterContainerView:(_UIPlatterContainerView *)arg1 ;
-(id)positionHandler;
-(void)setPositionHandler:(id)arg1 ;
-(id)morphHandler;
-(void)setMorphHandler:(id)arg1 ;
-(id)midpointHandler;
-(void)setMidpointHandler:(id)arg1 ;
-(id)nonAnimatedMidpointHandler;
-(void)setNonAnimatedMidpointHandler:(id)arg1 ;
-(id)nearCompletionHandler;
-(void)setNearCompletionHandler:(id)arg1 ;
@end

