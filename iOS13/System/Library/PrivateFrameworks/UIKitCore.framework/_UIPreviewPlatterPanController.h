/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIPreviewPlatterPanControllerDelegate;
@class UIBezierPath, UIViewSpringAnimationBehavior, UIPanGestureRecognizer, NSArray, UIView, _UIVelocityIntegrator, NSString;

@interface _UIPreviewPlatterPanController : NSObject <UIGestureRecognizerDelegate> {

	unsigned long long _currentDetentIndex;
	double _initialYTranslation;
	UIBezierPath* _actionScrubPath;
	double _currentDistanceToActionScrubPath;
	CGPoint _initialLocationInsidePreview;
	BOOL _actionsViewIsVisible;
	BOOL _touchEverEnteredMenu;
	BOOL _enabled;
	UIViewSpringAnimationBehavior* _animationBehavior;
	id<_UIPreviewPlatterPanControllerDelegate> _delegate;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSArray* _detents;
	unsigned long long _initialDetentIndex;
	unsigned long long _rubberbandingEdges;
	NSArray* _accessoryViews;
	UIView* _containerView;
	UIView* _platterView;
	UIView* _actionsView;
	_UIVelocityIntegrator* _velocityIntegrator;
	CGPoint _originalPlatterCenter;
	CGPoint _originalActionsCenter;
	NSRange _menuAnchor;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                           //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * platterView;                                             //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UIView * actionsView;                                             //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                           //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                              //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (nonatomic,readonly) UIViewSpringAnimationBehavior * animationBehavior;                     //@synthesize animationBehavior=_animationBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewPlatterPanControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSArray * detents;                                                       //@synthesize detents=_detents - In the implementation block
@property (assign,nonatomic) unsigned long long initialDetentIndex;                                   //@synthesize initialDetentIndex=_initialDetentIndex - In the implementation block
@property (assign,nonatomic) CGPoint originalPlatterCenter;                                           //@synthesize originalPlatterCenter=_originalPlatterCenter - In the implementation block
@property (assign,nonatomic) CGPoint originalActionsCenter;                                           //@synthesize originalActionsCenter=_originalActionsCenter - In the implementation block
@property (assign,nonatomic) NSRange menuAnchor;                                                      //@synthesize menuAnchor=_menuAnchor - In the implementation block
@property (assign,nonatomic) unsigned long long rubberbandingEdges;                                   //@synthesize rubberbandingEdges=_rubberbandingEdges - In the implementation block
@property (nonatomic,retain) NSArray * accessoryViews;                                                //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<_UIPreviewPlatterPanControllerDelegate>)delegate;
-(void)setDelegate:(id<_UIPreviewPlatterPanControllerDelegate>)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(NSArray *)detents;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setDetents:(NSArray *)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setActionsView:(UIView *)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_canSwipeDownToDismiss;
-(UIView *)platterView;
-(UIView *)actionsView;
-(CGVector)_currentPlatterVelocity;
-(int)_nearestDetentWithTranslation:(CGPoint)arg1 ;
-(void)_updateViewPositionsWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ended:(BOOL)arg3 withVelocity:(BOOL)arg4 ;
-(void)_updateActionScrubPathWithLocationIfNecessary:(CGPoint)arg1 ;
-(BOOL)_canBeginDraggingWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ;
-(NSRange)menuAnchor;
-(CGPoint)originalPlatterCenter;
-(void)_updatePlatterGestureDebugUIWithGesture:(id)arg1 invalidate:(BOOL)arg2 ;
-(double)_dragTearOffThreshold;
-(double)_tearOffSpeedMultiplier;
-(void)_animationsForPreviewPlusActionsStyleWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ;
-(void)_animationsForActionsStyleWithLocation:(CGPoint)arg1 ended:(BOOL)arg2 ;
-(void)_animationsForAnyAttachedAccessoryViews;
-(UIViewSpringAnimationBehavior *)animationBehavior;
-(CGPoint)_rubberBandedTranslationForGestureTranslation:(CGPoint)arg1 ;
-(CGPoint)originalActionsCenter;
-(NSArray *)accessoryViews;
-(BOOL)_initialPointInPlatterIsValid;
-(double)_rangeOfMotion;
-(unsigned long long)rubberbandingEdges;
-(id)initWithContainerView:(id)arg1 platterView:(id)arg2 actionsView:(id)arg3 ;
-(void)setInitialDetentIndex:(unsigned long long)arg1 ;
-(unsigned long long)initialDetentIndex;
-(void)setOriginalPlatterCenter:(CGPoint)arg1 ;
-(void)setOriginalActionsCenter:(CGPoint)arg1 ;
-(void)setMenuAnchor:(NSRange)arg1 ;
-(void)setRubberbandingEdges:(unsigned long long)arg1 ;
-(void)setAccessoryViews:(NSArray *)arg1 ;
@end

