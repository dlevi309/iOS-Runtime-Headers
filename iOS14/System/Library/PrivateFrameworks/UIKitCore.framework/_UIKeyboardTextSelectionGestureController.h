/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIKeyboardTextSelectionGestureControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UITextMagnifierTimeWeightedPoint, UIDelayedAction, _UIStatesFeedbackGenerator;

@interface _UIKeyboardTextSelectionGestureController : NSObject {

	NSMutableArray* _deallocHandlers;
	BOOL _wasScrollingEnabled;
	BOOL _wasNestedPinchingDisabled;
	BOOL _suppressTwoFingerPan;
	BOOL _didSuppressSelectionGrabbers;
	BOOL _isLongPressing;
	BOOL _isPanning;
	BOOL _isSpacePan;
	BOOL _hadAddedTouch;
	BOOL _didFloatCursor;
	int _previousForcePressCount;
	id<_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
	double _lastPressTimestamp;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	double _twoFingerTapTimestamp;
	long long _previousRepeatedGranularity;
	long long _panGestureState;
	double _spacePanDistance;
	NSMutableArray* _activeGestures;
	UIDelayedAction* _tapLogTimer;
	UIDelayedAction* _longForcePressAction;
	_UIStatesFeedbackGenerator* _feedbackBehaviour;
	CGPoint _lastPanTranslation;
	CGPoint _accumulatedAcceleration;
	CGPoint _accumulatedBounding;
	CGPoint _cursorLocationBase;

}

@property (assign,nonatomic) CGPoint lastPanTranslation;                                                  //@synthesize lastPanTranslation=_lastPanTranslation - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedAcceleration;                                             //@synthesize accumulatedAcceleration=_accumulatedAcceleration - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedBounding;                                                 //@synthesize accumulatedBounding=_accumulatedBounding - In the implementation block
@property (assign,nonatomic) double lastPressTimestamp;                                                   //@synthesize lastPressTimestamp=_lastPressTimestamp - In the implementation block
@property (nonatomic,retain) UITextMagnifierTimeWeightedPoint * weightedPoint;                            //@synthesize weightedPoint=_weightedPoint - In the implementation block
@property (assign,nonatomic) double twoFingerTapTimestamp;                                                //@synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp - In the implementation block
@property (assign,nonatomic) long long previousRepeatedGranularity;                                       //@synthesize previousRepeatedGranularity=_previousRepeatedGranularity - In the implementation block
@property (assign,nonatomic) long long panGestureState;                                                   //@synthesize panGestureState=_panGestureState - In the implementation block
@property (assign,nonatomic) BOOL wasScrollingEnabled;                                                    //@synthesize wasScrollingEnabled=_wasScrollingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wasNestedPinchingDisabled;                                              //@synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled - In the implementation block
@property (assign,nonatomic) BOOL suppressTwoFingerPan;                                                   //@synthesize suppressTwoFingerPan=_suppressTwoFingerPan - In the implementation block
@property (assign,nonatomic) BOOL didSuppressSelectionGrabbers;                                           //@synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers - In the implementation block
@property (assign,nonatomic) BOOL isLongPressing;                                                         //@synthesize isLongPressing=_isLongPressing - In the implementation block
@property (assign,nonatomic) BOOL isPanning;                                                              //@synthesize isPanning=_isPanning - In the implementation block
@property (assign,nonatomic) BOOL isSpacePan;                                                             //@synthesize isSpacePan=_isSpacePan - In the implementation block
@property (assign,nonatomic) BOOL hadAddedTouch;                                                          //@synthesize hadAddedTouch=_hadAddedTouch - In the implementation block
@property (assign,nonatomic) double spacePanDistance;                                                     //@synthesize spacePanDistance=_spacePanDistance - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeGestures;                                             //@synthesize activeGestures=_activeGestures - In the implementation block
@property (assign,nonatomic) BOOL didFloatCursor;                                                         //@synthesize didFloatCursor=_didFloatCursor - In the implementation block
@property (assign,nonatomic) CGPoint cursorLocationBase;                                                  //@synthesize cursorLocationBase=_cursorLocationBase - In the implementation block
@property (nonatomic,retain) UIDelayedAction * tapLogTimer;                                               //@synthesize tapLogTimer=_tapLogTimer - In the implementation block
@property (assign,nonatomic) int previousForcePressCount;                                                 //@synthesize previousForcePressCount=_previousForcePressCount - In the implementation block
@property (nonatomic,retain) UIDelayedAction * longForcePressAction;                                      //@synthesize longForcePressAction=_longForcePressAction - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackBehaviour;                              //@synthesize feedbackBehaviour=_feedbackBehaviour - In the implementation block
@property (assign,nonatomic) id<_UIKeyboardTextSelectionGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)setTapLogTimer:(UIDelayedAction *)arg1 ;
-(double)oneFingerForcePressAllowableMovement;
-(void)setPreviousRepeatedGranularity:(long long)arg1 ;
-(id)addLongPressTextSelectionInteractionsToView:(id)arg1 ;
-(double)spacePanDistance;
-(void)setDidSuppressSelectionGrabbers:(BOOL)arg1 ;
-(void)setFeedbackBehaviour:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)init;
-(UITextMagnifierTimeWeightedPoint *)weightedPoint;
-(id<_UIKeyboardTextSelectionGestureControllerDelegate>)delegate;
-(void)setIsSpacePan:(BOOL)arg1 ;
-(void)setAccumulatedBounding:(CGPoint)arg1 ;
-(CGPoint)accumulatedBounding;
-(CGPoint)cursorLocationBase;
-(double)lastPressTimestamp;
-(BOOL)wasScrollingEnabled;
-(void)setPanGestureState:(long long)arg1 ;
-(void)setLastPressTimestamp:(double)arg1 ;
-(Class)textInteractionClass;
-(void)enableEnclosingScrollViewNestedPinching;
-(void)redisableEnclosingScrollViewNestedPinching;
-(BOOL)wasNestedPinchingDisabled;
-(void)setAccumulatedAcceleration:(CGPoint)arg1 ;
-(double)twoFingerTapTimestamp;
-(void)setPreviousForcePressCount:(int)arg1 ;
-(void)didRemoveSelectionController;
-(void)setSuppressTwoFingerPan:(BOOL)arg1 ;
-(int)previousForcePressCount;
-(double)oneFingerForcePressMinimumDuration;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(id)selectionController;
-(void)setDelegate:(id<_UIKeyboardTextSelectionGestureControllerDelegate>)arg1 ;
-(void)setLongForcePressAction:(UIDelayedAction *)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackBehaviour;
-(id)addTwoFingerTextSelectionInteractionsToView:(id)arg1 ;
-(NSMutableArray *)activeGestures;
-(BOOL)isSpacePan;
-(UIDelayedAction *)longForcePressAction;
-(void)setCursorLocationBase:(CGPoint)arg1 ;
-(void)setActiveGestures:(NSMutableArray *)arg1 ;
-(void)setIsPanning:(BOOL)arg1 ;
-(BOOL)allowOneFingerDeepPress;
-(BOOL)hadAddedTouch;
-(void)_cleanupDeadGesturesIfNecessary;
-(id)addDeallocationHandler:(/*^block*/id)arg1 ;
-(void)setSpacePanDistance:(double)arg1 ;
-(void)configureOneFingerForcePressRecognizer:(id)arg1 ;
-(void)removeDeallocationHandler:(id)arg1 ;
-(BOOL)didSuppressSelectionGrabbers;
-(void)configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(UIDelayedAction *)tapLogTimer;
-(void)setLastPanTranslation:(CGPoint)arg1 ;
-(BOOL)_longPressAllowedForView:(id)arg1 ;
-(void)setDidFloatCursor:(BOOL)arg1 ;
-(id)addOneFingerTextSelectionInteractionsToView:(id)arg1 ;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(void)setHadAddedTouch:(BOOL)arg1 ;
-(void)setIsLongPressing:(BOOL)arg1 ;
-(CGPoint)lastPanTranslation;
-(long long)previousRepeatedGranularity;
-(BOOL)suppressTwoFingerPan;
-(BOOL)isPanning;
-(long long)panGestureState;
-(BOOL)shouldAddForceGesture;
-(void)setWasScrollingEnabled:(BOOL)arg1 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)willRemoveSelectionController;
-(BOOL)didFloatCursor;
-(void)setWeightedPoint:(UITextMagnifierTimeWeightedPoint *)arg1 ;
-(void)dealloc;
-(CGPoint)accumulatedAcceleration;
-(void)setWasNestedPinchingDisabled:(BOOL)arg1 ;
-(void)configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(BOOL)isLongPressing;
@end

