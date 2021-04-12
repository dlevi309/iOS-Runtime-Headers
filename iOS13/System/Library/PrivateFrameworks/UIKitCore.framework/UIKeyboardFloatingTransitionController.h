/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKeyboardFloatingTransitionControllerDelegate;
@class UIKeyboardFloatingPinchGestureRecognizer, UIPanGestureRecognizer, UIInputWindowController, UIKeyboardFloatingTransitionState, NSArray, UIView, _UIPopoverStandardChromeView, UIKBVisualEffectView, UIViewSpringAnimationBehavior, NSString;

@interface UIKeyboardFloatingTransitionController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _isTransitioning;
	BOOL _startedFromFloating;
	BOOL _withinDockingRegion;
	BOOL _expandedForDocking;
	id<UIKeyboardFloatingTransitionControllerDelegate> _delegate;
	UIKeyboardFloatingPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIInputWindowController* _inputWindowController;
	UIKeyboardFloatingTransitionState* _startState;
	UIKeyboardFloatingTransitionState* _endState;
	NSArray* _commonVisibleKeys;
	UIView* _platterView;
	UIView* _platterCornerRadiusView;
	_UIPopoverStandardChromeView* _platterPopoverBackgroundView;
	UIKBVisualEffectView* _platterVisualEffectView;
	UIView* _pillView;
	double _progress;
	double _gestureBeginTime;
	UIViewSpringAnimationBehavior* _animationBehavior;
	CGPoint _lastGestureCenter;

}

@property (nonatomic,retain) UIKeyboardFloatingPinchGestureRecognizer * pinchGestureRecognizer;               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isTransitioning;                                                            //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,retain) UIInputWindowController * inputWindowController;                                 //@synthesize inputWindowController=_inputWindowController - In the implementation block
@property (nonatomic,retain) UIKeyboardFloatingTransitionState * startState;                                  //@synthesize startState=_startState - In the implementation block
@property (nonatomic,retain) UIKeyboardFloatingTransitionState * endState;                                    //@synthesize endState=_endState - In the implementation block
@property (assign,nonatomic) BOOL startedFromFloating;                                                        //@synthesize startedFromFloating=_startedFromFloating - In the implementation block
@property (nonatomic,retain) NSArray * commonVisibleKeys;                                                     //@synthesize commonVisibleKeys=_commonVisibleKeys - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                                            //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIView * platterCornerRadiusView;                                                //@synthesize platterCornerRadiusView=_platterCornerRadiusView - In the implementation block
@property (nonatomic,retain) _UIPopoverStandardChromeView * platterPopoverBackgroundView;                     //@synthesize platterPopoverBackgroundView=_platterPopoverBackgroundView - In the implementation block
@property (nonatomic,retain) UIKBVisualEffectView * platterVisualEffectView;                                  //@synthesize platterVisualEffectView=_platterVisualEffectView - In the implementation block
@property (nonatomic,retain) UIView * pillView;                                                               //@synthesize pillView=_pillView - In the implementation block
@property (assign,nonatomic) double progress;                                                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double gestureBeginTime;                                                         //@synthesize gestureBeginTime=_gestureBeginTime - In the implementation block
@property (assign,nonatomic) CGPoint lastGestureCenter;                                                       //@synthesize lastGestureCenter=_lastGestureCenter - In the implementation block
@property (assign,nonatomic) BOOL withinDockingRegion;                                                        //@synthesize withinDockingRegion=_withinDockingRegion - In the implementation block
@property (assign,nonatomic) BOOL expandedForDocking;                                                         //@synthesize expandedForDocking=_expandedForDocking - In the implementation block
@property (retain) UIViewSpringAnimationBehavior * animationBehavior;                                         //@synthesize animationBehavior=_animationBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardFloatingTransitionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magneticEdgeMargin;
+(BOOL)isPointWithinDockingRegion:(CGPoint)arg1 ;
+(id)snapshotOfKeyplaneView:(id)arg1 ;
-(id<UIKeyboardFloatingTransitionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardFloatingTransitionControllerDelegate>)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIView *)platterView;
-(UIViewSpringAnimationBehavior *)animationBehavior;
-(UIView *)pillView;
-(void)setPillView:(UIView *)arg1 ;
-(BOOL)isTransitioning;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)beginTransitionFromPanGestureRecognizer:(id)arg1 ;
-(UIKeyboardFloatingPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)finalizeTransition;
-(void)setCommonVisibleKeys:(NSArray *)arg1 ;
-(NSArray *)commonVisibleKeys;
-(void)handlePanGestureRecognizerAction:(id)arg1 ;
-(void)updateHysteresisForCurrentFloatingState;
-(void)removeGestureRecognizers;
-(void)handlePinchGestureRecognizerAction:(id)arg1 ;
-(void)setPinchGestureRecognizer:(UIKeyboardFloatingPinchGestureRecognizer *)arg1 ;
-(void)beginPanGesture:(id)arg1 ;
-(void)updatePanGesture:(id)arg1 ;
-(void)endPanGesture:(id)arg1 ;
-(void)beginTransitionAtPoint:(CGPoint)arg1 withScale:(double)arg2 ;
-(void)setWithinDockingRegion:(BOOL)arg1 ;
-(void)updateTransitionAtPoint:(CGPoint)arg1 withScale:(double)arg2 interactive:(BOOL)arg3 ;
-(void)endTransitionAtPoint:(CGPoint)arg1 withScale:(double)arg2 ;
-(void)beginPinchGesture:(id)arg1 ;
-(void)updatePinchGesture:(id)arg1 ;
-(void)endPinchGesture:(id)arg1 ;
-(void)setIsTransitioning:(BOOL)arg1 ;
-(void)initializeContextAtPoint:(CGPoint)arg1 ;
-(UIKeyboardFloatingTransitionState *)endState;
-(UIKeyboardFloatingTransitionState *)startState;
-(void)updateAnimationAtScale:(double)arg1 ;
-(double)gestureBeginTime;
-(BOOL)expandedForDocking;
-(BOOL)startedFromFloating;
-(void)setStartedFromFloating:(BOOL)arg1 ;
-(void)setInputWindowController:(UIInputWindowController *)arg1 ;
-(void)setStartState:(UIKeyboardFloatingTransitionState *)arg1 ;
-(void)setEndState:(UIKeyboardFloatingTransitionState *)arg1 ;
-(void)captureStateForStart:(BOOL)arg1 ;
-(UIInputWindowController *)inputWindowController;
-(void)setPlatterCornerRadiusView:(UIView *)arg1 ;
-(UIView *)platterCornerRadiusView;
-(void)setPlatterPopoverBackgroundView:(_UIPopoverStandardChromeView *)arg1 ;
-(_UIPopoverStandardChromeView *)platterPopoverBackgroundView;
-(void)setPlatterVisualEffectView:(UIKBVisualEffectView *)arg1 ;
-(UIKBVisualEffectView *)platterVisualEffectView;
-(void)setExpandedForDocking:(BOOL)arg1 ;
-(void)constrainAccessoryViewToBottom;
-(void)setAnimationBehavior:(UIViewSpringAnimationBehavior *)arg1 ;
-(void)setLastGestureCenter:(CGPoint)arg1 ;
-(void)setGestureBeginTime:(double)arg1 ;
-(void)restoreAccessoryViewConstraints;
-(BOOL)withinDockingRegion;
-(void)inputViewSnapshot:(id*)arg1 withPlatterInsets:(UIEdgeInsets*)arg2 ;
-(CGPoint)lastGestureCenter;
@end

