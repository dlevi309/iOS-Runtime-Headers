/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/_UIHoverEventRespondable.h>
#import <libobjc.A.dylib/SBIndirectTouchLifecycleObserving.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>

@protocol SBIndirectPanGestureRecognizerOrientationProviding;
@class SBTouchHistory, UIEvent, UITouch, BSMonotonicReferenceTime, NSTimer, NSValue, SBSystemGestureManager, NSString;

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, SBIndirectTouchLifecycleObserving, SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding> {

	BOOL _shouldCancelAfterMovingAwayFromEdge;
	BOOL _shouldInvertXAxis;
	BOOL _shouldInvertYAxis;
	BOOL _pausedUntilTouchedUpOrMovedAwayFromEdge;
	BOOL _shouldActivateWithThreshold;
	BOOL _shouldRequireGestureToStartAtEdge;
	BOOL _gesturePassedThroughScreenCenterRegion;
	unsigned long long _edges;
	/*^block*/id _translationAdjustmentBlock;
	double _activationRecognitionDistance;
	unsigned long long _endReason;
	unsigned long long _currentInputType;
	id<SBIndirectPanGestureRecognizerOrientationProviding> _orientationProvider;
	unsigned long long _activatedEdge;
	SBTouchHistory* _touchHistory;
	UIEvent* _currentHoverEvent;
	UITouch* _currentTouch;
	BSMonotonicReferenceTime* _lastKnownMouseEventTimestamp;
	NSTimer* _mouseIdleTimer;
	NSValue* _gestureStartLocation;
	BSMonotonicReferenceTime* _mouseEnteredNearEdgeRegionTimestamp;
	BSMonotonicReferenceTime* _lastMouseActivationTimestamp;
	double _trackpadHysteresis;
	double _mouseHysteresis;
	SBSystemGestureManager* _systemGestureManager;
	CGPoint _origin;
	CGPoint _lastKnownPoint;
	CGPoint _translationWithinHysteresisRange;

}

@property (assign,nonatomic) CGPoint origin;                                                                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGPoint lastKnownPoint;                                                                         //@synthesize lastKnownPoint=_lastKnownPoint - In the implementation block
@property (assign,nonatomic) unsigned long long activatedEdge;                                                               //@synthesize activatedEdge=_activatedEdge - In the implementation block
@property (nonatomic,retain) SBTouchHistory * touchHistory;                                                                  //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,retain) UIEvent * currentHoverEvent;                                                                    //@synthesize currentHoverEvent=_currentHoverEvent - In the implementation block
@property (nonatomic,retain) UITouch * currentTouch;                                                                         //@synthesize currentTouch=_currentTouch - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * lastKnownMouseEventTimestamp;                                        //@synthesize lastKnownMouseEventTimestamp=_lastKnownMouseEventTimestamp - In the implementation block
@property (nonatomic,retain) NSTimer * mouseIdleTimer;                                                                       //@synthesize mouseIdleTimer=_mouseIdleTimer - In the implementation block
@property (nonatomic,retain) NSValue * gestureStartLocation;                                                                 //@synthesize gestureStartLocation=_gestureStartLocation - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * mouseEnteredNearEdgeRegionTimestamp;                                 //@synthesize mouseEnteredNearEdgeRegionTimestamp=_mouseEnteredNearEdgeRegionTimestamp - In the implementation block
@property (assign,nonatomic) BOOL gesturePassedThroughScreenCenterRegion;                                                    //@synthesize gesturePassedThroughScreenCenterRegion=_gesturePassedThroughScreenCenterRegion - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * lastMouseActivationTimestamp;                                        //@synthesize lastMouseActivationTimestamp=_lastMouseActivationTimestamp - In the implementation block
@property (assign,nonatomic) double trackpadHysteresis;                                                                      //@synthesize trackpadHysteresis=_trackpadHysteresis - In the implementation block
@property (assign,nonatomic) double mouseHysteresis;                                                                         //@synthesize mouseHysteresis=_mouseHysteresis - In the implementation block
@property (assign,nonatomic) CGPoint translationWithinHysteresisRange;                                                       //@synthesize translationWithinHysteresisRange=_translationWithinHysteresisRange - In the implementation block
@property (nonatomic,retain) SBSystemGestureManager * systemGestureManager;                                                  //@synthesize systemGestureManager=_systemGestureManager - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                                                                       //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelAfterMovingAwayFromEdge;                                                       //@synthesize shouldCancelAfterMovingAwayFromEdge=_shouldCancelAfterMovingAwayFromEdge - In the implementation block
@property (assign,nonatomic) BOOL shouldInvertXAxis;                                                                         //@synthesize shouldInvertXAxis=_shouldInvertXAxis - In the implementation block
@property (assign,nonatomic) BOOL shouldInvertYAxis;                                                                         //@synthesize shouldInvertYAxis=_shouldInvertYAxis - In the implementation block
@property (assign,nonatomic) BOOL pausedUntilTouchedUpOrMovedAwayFromEdge;                                                   //@synthesize pausedUntilTouchedUpOrMovedAwayFromEdge=_pausedUntilTouchedUpOrMovedAwayFromEdge - In the implementation block
@property (nonatomic,copy) id translationAdjustmentBlock;                                                                    //@synthesize translationAdjustmentBlock=_translationAdjustmentBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldActivateWithThreshold;                                                               //@synthesize shouldActivateWithThreshold=_shouldActivateWithThreshold - In the implementation block
@property (assign,nonatomic) double activationRecognitionDistance;                                                           //@synthesize activationRecognitionDistance=_activationRecognitionDistance - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireGestureToStartAtEdge;                                                         //@synthesize shouldRequireGestureToStartAtEdge=_shouldRequireGestureToStartAtEdge - In the implementation block
@property (nonatomic,readonly) unsigned long long endReason;                                                                 //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) unsigned long long currentInputType;                                                          //@synthesize currentInputType=_currentInputType - In the implementation block
@property (assign,nonatomic,__weak) id<SBIndirectPanGestureRecognizerOrientationProviding> orientationProvider;              //@synthesize orientationProvider=_orientationProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemGestureRecognizerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)peakSpeed;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setLastKnownPoint:(CGPoint)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(unsigned long long)endReason;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(double)trackpadHysteresis;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBTouchHistory *)touchHistory;
-(BOOL)_isPointerOnTopScreenCorner:(CGPoint)arg1 radius:(double)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(id<SBIndirectPanGestureRecognizerOrientationProviding>)orientationProvider;
-(CGPoint)origin;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setShouldActivateWithThreshold:(BOOL)arg1 ;
-(void)setMouseIdleTimer:(NSTimer *)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setMouseEnteredNearEdgeRegionTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(void)setShouldInvertXAxis:(BOOL)arg1 ;
-(BOOL)gesturePassedThroughScreenCenterRegion;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3 systemGestureManager:(id)arg4 ;
-(void)setLastMouseActivationTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(NSTimer *)mouseIdleTimer;
-(NSValue *)gestureStartLocation;
-(void)setActivationRecognitionDistance:(double)arg1 ;
-(UIEvent *)currentHoverEvent;
-(BOOL)shouldInvertYAxis;
-(void)setShouldCancelAfterMovingAwayFromEdge:(BOOL)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setGestureStartLocation:(NSValue *)arg1 ;
-(CGPoint)_centerOfCircleForRoundedCorner:(unsigned long long)arg1 radius:(double)arg2 inView:(id)arg3 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3 ;
-(unsigned long long)edges;
-(double)hysteresisForInputType:(unsigned long long)arg1 ;
-(void)trackpadDidTouchUpWithEvent:(id)arg1 ;
-(void)setActivatedEdge:(unsigned long long)arg1 ;
-(unsigned long long)activatedEdge;
-(BSMonotonicReferenceTime *)mouseEnteredNearEdgeRegionTimestamp;
-(CGPoint)lastKnownPoint;
-(id)containerView;
-(void)_mouseIdleTimerElapsed;
-(void)_resetTranslationState;
-(SBSystemGestureManager *)systemGestureManager;
-(long long)_effectiveOrientation;
-(BOOL)shouldActivateWithThreshold;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(BOOL)shouldRequireGestureToStartAtEdge;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(unsigned long long)_axisForEdge:(unsigned long long)arg1 ;
-(void)updateTouchHistoryWithTouches:(id)arg1 ;
-(void)setShouldRequireGestureToStartAtEdge:(BOOL)arg1 ;
-(CGPoint)translationWithinHysteresisRange;
-(void)setSystemGestureManager:(SBSystemGestureManager *)arg1 ;
-(BSMonotonicReferenceTime *)lastMouseActivationTimestamp;
-(void)setShouldInvertYAxis:(BOOL)arg1 ;
-(double)activationRecognitionDistance;
-(void)_updateTranslationWithPointerEventAttributes:(id)arg1 activeEdge:(unsigned long long)arg2 ;
-(BOOL)shouldInvertXAxis;
-(CGPoint)_pointerModelLocation;
-(void)_mouseIdleTimerFired:(id)arg1 ;
-(void)setTranslationWithinHysteresisRange:(CGPoint)arg1 ;
-(void)reset;
-(unsigned long long)_edgeForPointerModelLocation:(CGPoint)arg1 inView:(id)arg2 inset:(double)arg3 ;
-(BOOL)_isPointOnRoundedCorner:(CGPoint)arg1 corner:(unsigned long long)arg2 radius:(double)arg3 inView:(id)arg4 ;
-(void)setGesturePassedThroughScreenCenterRegion:(BOOL)arg1 ;
-(void)setHysteresis:(double)arg1 forInputType:(unsigned long long)arg2 ;
-(void)setTrackpadHysteresis:(double)arg1 ;
-(void)setCurrentTouch:(UITouch *)arg1 ;
-(BOOL)_shouldReceiveEvent:(id)arg1 ;
-(void)setTranslationAdjustmentBlock:(id)arg1 ;
-(BSMonotonicReferenceTime *)lastKnownMouseEventTimestamp;
-(BOOL)shouldCancelAfterMovingAwayFromEdge;
-(void)setMouseHysteresis:(double)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(UITouch *)currentTouch;
-(void)setOrientationProvider:(id<SBIndirectPanGestureRecognizerOrientationProviding>)arg1 ;
-(double)mouseHysteresis;
-(BOOL)pausedUntilTouchedUpOrMovedAwayFromEdge;
-(id)translationAdjustmentBlock;
-(unsigned long long)currentInputType;
-(void)setCurrentHoverEvent:(UIEvent *)arg1 ;
-(void)setPausedUntilTouchedUpOrMovedAwayFromEdge:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)_hasTranslationReachedThreshold:(double)arg1 withTranslation:(CGPoint)arg2 forEdge:(unsigned long long)arg3 ;
-(void)setLastKnownMouseEventTimestamp:(BSMonotonicReferenceTime *)arg1 ;
@end

