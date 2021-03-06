/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <AVKit/AVTransitionDriver.h>

@protocol AVTransitionDriverDelegate;
@class UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, NSArray, UIView, NSString;

@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate, AVTransitionDriver> {

	BOOL _enabled;
	BOOL _pinchToDismissEnabled;
	BOOL _pinchToPresentEnabled;
	BOOL _panToDismissEnabled;
	BOOL _waitingForTransition;
	BOOL _waitingForBoundsChange;
	BOOL _waitingForLocationChangeAfterBoundsChange;
	BOOL _hasContinued;
	BOOL _hasRotated;
	BOOL _lastNonZeroVelocityWasDownward;
	UIPanGestureRecognizer* _contentTransitioningViewGestureRecognizer;
	id<AVTransitionDriverDelegate> _transitionDriverDelegate;
	double _previousPinchScale;
	double __rotation;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	NSArray* _recognizers;
	double _timestampOfTouchWithLocationChangeAfterBoundsChange;
	long long _initialInterfaceOrientation;
	long long _transitionInteraction;
	UIView* _view;
	CGPoint _gestureLocationAfterBoundsChange;
	CGPoint _lastReportedLocationInWindow;
	CGPoint _anchorLocationInWindow;
	CGRect _initialCoordinateSpaceBounds;

}

@property (assign,getter=isPinchToDismissEnabled,nonatomic) BOOL pinchToDismissEnabled;                                                      //@synthesize pinchToDismissEnabled=_pinchToDismissEnabled - In the implementation block
@property (assign,getter=isPinchToPresentEnabled,nonatomic) BOOL pinchToPresentEnabled;                                                      //@synthesize pinchToPresentEnabled=_pinchToPresentEnabled - In the implementation block
@property (assign,getter=isPanToDismissEnabled,nonatomic) BOOL panToDismissEnabled;                                                          //@synthesize panToDismissEnabled=_panToDismissEnabled - In the implementation block
@property (assign,nonatomic) double previousPinchScale;                                                                                      //@synthesize previousPinchScale=_previousPinchScale - In the implementation block
@property (assign,setter=_setRotation:,nonatomic) double _rotation;                                                                          //@synthesize _rotation=__rotation - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                            //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;                                                      //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSArray * recognizers;                                                                                        //@synthesize recognizers=_recognizers - In the implementation block
@property (assign,getter=isWaitingForTransition,nonatomic) BOOL waitingForTransition;                                                        //@synthesize waitingForTransition=_waitingForTransition - In the implementation block
@property (assign,getter=isWaitingForBoundsChange,nonatomic) BOOL waitingForBoundsChange;                                                    //@synthesize waitingForBoundsChange=_waitingForBoundsChange - In the implementation block
@property (assign,getter=isWaitingForLocationChangeAfterBoundsChange,nonatomic) BOOL waitingForLocationChangeAfterBoundsChange;              //@synthesize waitingForLocationChangeAfterBoundsChange=_waitingForLocationChangeAfterBoundsChange - In the implementation block
@property (assign,nonatomic) double timestampOfTouchWithLocationChangeAfterBoundsChange;                                                     //@synthesize timestampOfTouchWithLocationChangeAfterBoundsChange=_timestampOfTouchWithLocationChangeAfterBoundsChange - In the implementation block
@property (assign,nonatomic) BOOL hasContinued;                                                                                              //@synthesize hasContinued=_hasContinued - In the implementation block
@property (assign,nonatomic) BOOL hasRotated;                                                                                                //@synthesize hasRotated=_hasRotated - In the implementation block
@property (assign,nonatomic) long long initialInterfaceOrientation;                                                                          //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGRect initialCoordinateSpaceBounds;                                                                            //@synthesize initialCoordinateSpaceBounds=_initialCoordinateSpaceBounds - In the implementation block
@property (assign,nonatomic) CGPoint gestureLocationAfterBoundsChange;                                                                       //@synthesize gestureLocationAfterBoundsChange=_gestureLocationAfterBoundsChange - In the implementation block
@property (assign,nonatomic) CGPoint lastReportedLocationInWindow;                                                                           //@synthesize lastReportedLocationInWindow=_lastReportedLocationInWindow - In the implementation block
@property (assign,nonatomic) CGPoint anchorLocationInWindow;                                                                                 //@synthesize anchorLocationInWindow=_anchorLocationInWindow - In the implementation block
@property (assign,nonatomic) BOOL lastNonZeroVelocityWasDownward;                                                                            //@synthesize lastNonZeroVelocityWasDownward=_lastNonZeroVelocityWasDownward - In the implementation block
@property (assign,nonatomic) long long transitionInteraction;                                                                                //@synthesize transitionInteraction=_transitionInteraction - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                                                           //@synthesize view=_view - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTransitionDriverDelegate> transitionDriverDelegate;                                                 //@synthesize transitionDriverDelegate=_transitionDriverDelegate - In the implementation block
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) double rotationVelocity; 
@property (nonatomic,readonly) double pinchScale; 
@property (nonatomic,readonly) double pinchVelocity; 
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * contentTransitioningViewGestureRecognizer;                                      //@synthesize contentTransitioningViewGestureRecognizer=_contentTransitioningViewGestureRecognizer - In the implementation block
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)isTracking;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(BOOL)hasRotated;
-(double)rotation;
-(void)didMoveToView:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGPoint)velocityInWindow;
-(double)angleOfVelocityInWindow;
-(BOOL)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<AVTransitionDriverDelegate>)transitionDriverDelegate;
-(void)setTransitionDriverDelegate:(id<AVTransitionDriverDelegate>)arg1 ;
-(long long)transitionInteraction;
-(double)rotationVelocity;
-(double)pinchVelocity;
-(void)addRecognizersToView:(id)arg1 ;
-(BOOL)lastNonZeroVelocityWasDownward;
-(UIPanGestureRecognizer *)contentTransitioningViewGestureRecognizer;
-(void)setContentTransitioningViewGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id)_locationRecognizer;
-(CGPoint)_untranslatedUnfilteredLocationInFixedCoordinateSpace;
-(CGPoint)_filteredUntranslatedLocationInWindow;
-(void)_handleRotationGesture:(id)arg1 ;
-(BOOL)_isWaitingToContinue;
-(void)_beginTracking:(long long)arg1 ;
-(void)_updateLastNonZeroVelocityDirection;
-(void)_resetGesturesIfPossible;
-(void)_setHasContinuedIfNeeded;
-(BOOL)isPinchToDismissEnabled;
-(void)setPinchToDismissEnabled:(BOOL)arg1 ;
-(BOOL)isPinchToPresentEnabled;
-(double)previousPinchScale;
-(void)setPinchToPresentEnabled:(BOOL)arg1 ;
-(BOOL)isPanToDismissEnabled;
-(void)setPanToDismissEnabled:(BOOL)arg1 ;
-(void)setPreviousPinchScale:(double)arg1 ;
-(void)_setRotation:(double)arg1 ;
-(BOOL)isWaitingForTransition;
-(void)setWaitingForTransition:(BOOL)arg1 ;
-(BOOL)isWaitingForBoundsChange;
-(void)setWaitingForBoundsChange:(BOOL)arg1 ;
-(BOOL)hasContinued;
-(void)setHasContinued:(BOOL)arg1 ;
-(BOOL)isWaitingForLocationChangeAfterBoundsChange;
-(void)setWaitingForLocationChangeAfterBoundsChange:(BOOL)arg1 ;
-(double)timestampOfTouchWithLocationChangeAfterBoundsChange;
-(void)setTimestampOfTouchWithLocationChangeAfterBoundsChange:(double)arg1 ;
-(void)setHasRotated:(BOOL)arg1 ;
-(CGRect)initialCoordinateSpaceBounds;
-(void)setInitialCoordinateSpaceBounds:(CGRect)arg1 ;
-(CGPoint)gestureLocationAfterBoundsChange;
-(void)setGestureLocationAfterBoundsChange:(CGPoint)arg1 ;
-(CGPoint)lastReportedLocationInWindow;
-(void)setLastReportedLocationInWindow:(CGPoint)arg1 ;
-(CGPoint)anchorLocationInWindow;
-(void)setAnchorLocationInWindow:(CGPoint)arg1 ;
-(void)setTransitionInteraction:(long long)arg1 ;
-(void)setLastNonZeroVelocityWasDownward:(BOOL)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(long long)initialInterfaceOrientation;
-(NSArray *)recognizers;
-(UIView *)view;
-(void)_cancel;
-(void)_handlePanGesture:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(CGPoint)translationInWindow;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)_reset;
-(BOOL)isEnabled;
-(double)_rotation;
-(void)_finish;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)pinchScale;
-(CGPoint)locationInWindow;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)_handlePinchGesture:(id)arg1 ;
@end

