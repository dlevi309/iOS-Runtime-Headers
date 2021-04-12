/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>

@protocol SBIndirectPanGestureRecognizerOrientationProviding;
@class SBTouchHistory, UIEvent, UITouch, BSMonotonicReferenceTime, NSTimer, NSValue, NSMutableSet, NSString;

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding> {

	BOOL _shouldCancelAfterMovingAwayFromEdge;
	BOOL _shouldInvertXAxis;
	BOOL _shouldInvertYAxis;
	BOOL _pausedUntilTouchedUpOrMovedAwayFromEdge;
	BOOL _shouldActivateWithThreshold;
	BOOL _shouldRequireGestureToStartAtEdge;
	BOOL _shouldSwitchAxes;
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
	NSMutableSet* _gestureRecognizersToDelayOnMouseActivation;
	double _trackpadHysteresis;
	double _mouseHysteresis;
	CGPoint _origin;
	CGPoint _lastKnownPoint;
	CGPoint _translationWithinHysteresisRange;

}

@property (assign,nonatomic) CGPoint origin;                                                                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGPoint lastKnownPoint;                                                                         //@synthesize lastKnownPoint=_lastKnownPoint - In the implementation block
@property (assign,nonatomic) unsigned long long activatedEdge;                                                               //@synthesize activatedEdge=_activatedEdge - In the implementation block
@property (assign,nonatomic) BOOL shouldSwitchAxes;                                                                          //@synthesize shouldSwitchAxes=_shouldSwitchAxes - In the implementation block
@property (nonatomic,retain) SBTouchHistory * touchHistory;                                                                  //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,retain) UIEvent * currentHoverEvent;                                                                    //@synthesize currentHoverEvent=_currentHoverEvent - In the implementation block
@property (nonatomic,retain) UITouch * currentTouch;                                                                         //@synthesize currentTouch=_currentTouch - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * lastKnownMouseEventTimestamp;                                        //@synthesize lastKnownMouseEventTimestamp=_lastKnownMouseEventTimestamp - In the implementation block
@property (nonatomic,retain) NSTimer * mouseIdleTimer;                                                                       //@synthesize mouseIdleTimer=_mouseIdleTimer - In the implementation block
@property (nonatomic,retain) NSValue * gestureStartLocation;                                                                 //@synthesize gestureStartLocation=_gestureStartLocation - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * mouseEnteredNearEdgeRegionTimestamp;                                 //@synthesize mouseEnteredNearEdgeRegionTimestamp=_mouseEnteredNearEdgeRegionTimestamp - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * lastMouseActivationTimestamp;                                        //@synthesize lastMouseActivationTimestamp=_lastMouseActivationTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableSet * gestureRecognizersToDelayOnMouseActivation;                                      //@synthesize gestureRecognizersToDelayOnMouseActivation=_gestureRecognizersToDelayOnMouseActivation - In the implementation block
@property (assign,nonatomic) double trackpadHysteresis;                                                                      //@synthesize trackpadHysteresis=_trackpadHysteresis - In the implementation block
@property (assign,nonatomic) double mouseHysteresis;                                                                         //@synthesize mouseHysteresis=_mouseHysteresis - In the implementation block
@property (assign,nonatomic) CGPoint translationWithinHysteresisRange;                                                       //@synthesize translationWithinHysteresisRange=_translationWithinHysteresisRange - In the implementation block
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
-(void)reset;
-(CGPoint)origin;
-(unsigned long long)endReason;
-(id)containerView;
-(BOOL)_shouldReceiveEvent:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(double)peakSpeed;
-(BOOL)_wantsHoverEvents;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(SBTouchHistory *)touchHistory;
-(void)setCurrentTouch:(UITouch *)arg1 ;
-(UITouch *)currentTouch;
-(void)setOrientationProvider:(id<SBIndirectPanGestureRecognizerOrientationProviding>)arg1 ;
-(NSValue *)gestureStartLocation;
-(void)setGestureStartLocation:(NSValue *)arg1 ;
-(id<SBIndirectPanGestureRecognizerOrientationProviding>)orientationProvider;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(unsigned long long)currentInputType;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 edges:(unsigned long long)arg3 ;
-(void)setShouldInvertYAxis:(BOOL)arg1 ;
-(void)setActivationRecognitionDistance:(double)arg1 ;
-(void)setShouldRequireGestureToStartAtEdge:(BOOL)arg1 ;
-(void)setHysteresis:(double)arg1 forInputType:(unsigned long long)arg2 ;
-(void)setTranslationAdjustmentBlock:(id)arg1 ;
-(double)activationRecognitionDistance;
-(double)hysteresisForInputType:(unsigned long long)arg1 ;
-(void)setPausedUntilTouchedUpOrMovedAwayFromEdge:(BOOL)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(void)_resetTranslationState;
-(CGPoint)_pointerModelLocation;
-(unsigned long long)_edgeForPointerModelLocation:(CGPoint)arg1 inView:(id)arg2 inset:(double)arg3 ;
-(BOOL)_computeShouldSwitchAxes;
-(IOHIDEventRef)_pointerHIDSubEventFromEvent:(IOHIDEventRef)arg1 ;
-(BOOL)_isTrackpadEvent:(id)arg1 ;
-(BOOL)_pointerEventRepresentsTrackpadTouchUp:(id)arg1 ;
-(BOOL)_pointerEventHasNonZeroOffset:(id)arg1 axis:(unsigned long long)arg2 ;
-(void)_mouseIdleTimerFired:(id)arg1 ;
-(void)_updateTranslationWithPointerEventAttributes:(id)arg1 activeEdge:(unsigned long long)arg2 ;
-(void)updateTouchHistoryWithTouches:(id)arg1 ;
-(BOOL)_hasTranslationReachedThreshold:(double)arg1 withTranslation:(CGPoint)arg2 forEdge:(unsigned long long)arg3 ;
-(void)_mouseIdleTimerElapsed;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(unsigned long long)_axisForEdge:(unsigned long long)arg1 ;
-(void)shouldDelayOtherSystemGesturesOnMouseActivation:(id)arg1 ;
-(BOOL)_isVelocityOrthogonalToAxis:(CGPoint)arg1 axis:(unsigned long long)arg2 ;
-(BOOL)shouldCancelAfterMovingAwayFromEdge;
-(void)setShouldCancelAfterMovingAwayFromEdge:(BOOL)arg1 ;
-(BOOL)shouldInvertXAxis;
-(void)setShouldInvertXAxis:(BOOL)arg1 ;
-(BOOL)shouldInvertYAxis;
-(BOOL)pausedUntilTouchedUpOrMovedAwayFromEdge;
-(id)translationAdjustmentBlock;
-(BOOL)shouldActivateWithThreshold;
-(void)setShouldActivateWithThreshold:(BOOL)arg1 ;
-(BOOL)shouldRequireGestureToStartAtEdge;
-(CGPoint)lastKnownPoint;
-(void)setLastKnownPoint:(CGPoint)arg1 ;
-(unsigned long long)activatedEdge;
-(void)setActivatedEdge:(unsigned long long)arg1 ;
-(BOOL)shouldSwitchAxes;
-(void)setShouldSwitchAxes:(BOOL)arg1 ;
-(UIEvent *)currentHoverEvent;
-(void)setCurrentHoverEvent:(UIEvent *)arg1 ;
-(BSMonotonicReferenceTime *)lastKnownMouseEventTimestamp;
-(void)setLastKnownMouseEventTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(NSTimer *)mouseIdleTimer;
-(void)setMouseIdleTimer:(NSTimer *)arg1 ;
-(BSMonotonicReferenceTime *)mouseEnteredNearEdgeRegionTimestamp;
-(void)setMouseEnteredNearEdgeRegionTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(BSMonotonicReferenceTime *)lastMouseActivationTimestamp;
-(void)setLastMouseActivationTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(NSMutableSet *)gestureRecognizersToDelayOnMouseActivation;
-(void)setGestureRecognizersToDelayOnMouseActivation:(NSMutableSet *)arg1 ;
-(double)trackpadHysteresis;
-(void)setTrackpadHysteresis:(double)arg1 ;
-(double)mouseHysteresis;
-(void)setMouseHysteresis:(double)arg1 ;
-(CGPoint)translationWithinHysteresisRange;
-(void)setTranslationWithinHysteresisRange:(CGPoint)arg1 ;
@end

