/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInteractiveUndoHUDActionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIEditingOverlayInteractionWithView.h>
#import <UIKit/UIInteraction.h>

@class UIView, UIUndoGestureObserver, UIKBProductibitySingleTapGesture, UIKBProductibityDoubleTapGesture, UIKBProductivityPanGestureRecognizer, UIKBProductivityLongPressGestureRecognizer, UIKBProductivityPinchGestureRecognizer, UIKBUndoInteractionHUD, UIKBUndoStateHUD, NSLayoutConstraint, UIDelayedAction, UILayoutGuide, UIKBTextEditingTraits, NSString;

@interface UIUndoGestureInteraction : NSObject <UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction> {

	BOOL _interactiveHUDIsVisible;
	BOOL _undoStateHUDIsAnimating;
	BOOL _multiPinchTimerOn;
	UIView* _view;
	UIUndoGestureObserver* _observerGesture;
	UIKBProductibitySingleTapGesture* _threeFingerSingleTap;
	UIKBProductibityDoubleTapGesture* _threeFingerDoubleTap;
	UIKBProductivityPanGestureRecognizer* _threeFingerSlide;
	UIKBProductivityLongPressGestureRecognizer* _threeFingerLongPress;
	UIKBProductivityPinchGestureRecognizer* _threeFingerPinch;
	UIKBUndoInteractionHUD* _undoInteractiveHUD;
	UIKBUndoStateHUD* _undoStateHUD;
	NSLayoutConstraint* _undoStateHUDTopConstraint;
	NSLayoutConstraint* _undoStateHUDCenterConstraint;
	NSLayoutConstraint* _undoHUDContainerWidthConstraint;
	NSLayoutConstraint* _undoHUDContainerHeightConstraint;
	UIDelayedAction* _undoStateHUDDismissTimer;
	long long _currentAppearance;
	UILayoutGuide* _layoutGuide;
	long long _previousRecognizedPanDirection;
	UIDelayedAction* _multiPansTimer;
	double _remainingDistanceToTravel;
	long long _beginPanDirection;
	unsigned long long _panDownStateChangedCounter;
	double _lastTapTimestamp;
	double _initPinchableDistance;
	double _previousPinchPerimeter;
	long long _potentialPinchDirection;
	UIKBTextEditingTraits* _editingTraits;
	CGPoint _previousPanLocation;
	CGPoint _beginPanLocation;
	CGRect _currentActuallSceneBounds;

}

@property (assign,nonatomic,__weak) UIView * view;                                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIUndoGestureObserver * observerGesture;                                        //@synthesize observerGesture=_observerGesture - In the implementation block
@property (nonatomic,retain) UIKBProductibitySingleTapGesture * threeFingerSingleTap;                        //@synthesize threeFingerSingleTap=_threeFingerSingleTap - In the implementation block
@property (nonatomic,retain) UIKBProductibityDoubleTapGesture * threeFingerDoubleTap;                        //@synthesize threeFingerDoubleTap=_threeFingerDoubleTap - In the implementation block
@property (nonatomic,retain) UIKBProductivityPanGestureRecognizer * threeFingerSlide;                        //@synthesize threeFingerSlide=_threeFingerSlide - In the implementation block
@property (nonatomic,retain) UIKBProductivityLongPressGestureRecognizer * threeFingerLongPress;              //@synthesize threeFingerLongPress=_threeFingerLongPress - In the implementation block
@property (nonatomic,retain) UIKBProductivityPinchGestureRecognizer * threeFingerPinch;                      //@synthesize threeFingerPinch=_threeFingerPinch - In the implementation block
@property (nonatomic,retain) UIKBUndoInteractionHUD * undoInteractiveHUD;                                    //@synthesize undoInteractiveHUD=_undoInteractiveHUD - In the implementation block
@property (nonatomic,retain) UIKBUndoStateHUD * undoStateHUD;                                                //@synthesize undoStateHUD=_undoStateHUD - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDTopConstraint;                                 //@synthesize undoStateHUDTopConstraint=_undoStateHUDTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDCenterConstraint;                              //@synthesize undoStateHUDCenterConstraint=_undoStateHUDCenterConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoHUDContainerWidthConstraint;                           //@synthesize undoHUDContainerWidthConstraint=_undoHUDContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoHUDContainerHeightConstraint;                          //@synthesize undoHUDContainerHeightConstraint=_undoHUDContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) UIDelayedAction * undoStateHUDDismissTimer;                                     //@synthesize undoStateHUDDismissTimer=_undoStateHUDDismissTimer - In the implementation block
@property (assign,nonatomic) long long currentAppearance;                                                    //@synthesize currentAppearance=_currentAppearance - In the implementation block
@property (assign,nonatomic) CGRect currentActuallSceneBounds;                                               //@synthesize currentActuallSceneBounds=_currentActuallSceneBounds - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                                                    //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (assign,nonatomic) BOOL interactiveHUDIsVisible;                                                   //@synthesize interactiveHUDIsVisible=_interactiveHUDIsVisible - In the implementation block
@property (assign,nonatomic) long long previousRecognizedPanDirection;                                       //@synthesize previousRecognizedPanDirection=_previousRecognizedPanDirection - In the implementation block
@property (nonatomic,retain) UIDelayedAction * multiPansTimer;                                               //@synthesize multiPansTimer=_multiPansTimer - In the implementation block
@property (assign,nonatomic) double remainingDistanceToTravel;                                               //@synthesize remainingDistanceToTravel=_remainingDistanceToTravel - In the implementation block
@property (assign,nonatomic) CGPoint previousPanLocation;                                                    //@synthesize previousPanLocation=_previousPanLocation - In the implementation block
@property (assign,nonatomic) CGPoint beginPanLocation;                                                       //@synthesize beginPanLocation=_beginPanLocation - In the implementation block
@property (assign,nonatomic) long long beginPanDirection;                                                    //@synthesize beginPanDirection=_beginPanDirection - In the implementation block
@property (assign,nonatomic) unsigned long long panDownStateChangedCounter;                                  //@synthesize panDownStateChangedCounter=_panDownStateChangedCounter - In the implementation block
@property (assign,nonatomic) BOOL undoStateHUDIsAnimating;                                                   //@synthesize undoStateHUDIsAnimating=_undoStateHUDIsAnimating - In the implementation block
@property (assign,nonatomic) double lastTapTimestamp;                                                        //@synthesize lastTapTimestamp=_lastTapTimestamp - In the implementation block
@property (assign,nonatomic) BOOL multiPinchTimerOn;                                                         //@synthesize multiPinchTimerOn=_multiPinchTimerOn - In the implementation block
@property (assign,nonatomic) double initPinchableDistance;                                                   //@synthesize initPinchableDistance=_initPinchableDistance - In the implementation block
@property (assign,nonatomic) double previousPinchPerimeter;                                                  //@synthesize previousPinchPerimeter=_previousPinchPerimeter - In the implementation block
@property (assign,nonatomic) long long potentialPinchDirection;                                              //@synthesize potentialPinchDirection=_potentialPinchDirection - In the implementation block
@property (nonatomic,retain) UIKBTextEditingTraits * editingTraits;                                          //@synthesize editingTraits=_editingTraits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentProductivityGestureTutorialInlineWithCompletion:(/*^block*/id)arg1 ;
+(id)iWorkFamily;
+(void)presentProductivityGestureTutorialIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(long long)keyboardAppearance;
-(void)undo:(BOOL)arg1 ;
-(void)redo:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(id)_undoManager;
-(double)currentTime;
-(void)_addGestureRecognizers;
-(void)_removeGestureRecognizers;
-(void)tooSlow:(id)arg1 ;
-(CGRect)actualSceneBounds;
-(BOOL)canCut;
-(BOOL)canCopy;
-(BOOL)canPaste;
-(void)cutOperation;
-(void)copyOperation;
-(void)pasteOperation;
-(void)disableEnclosingScrollViewScrolling;
-(void)clearHUDViews;
-(void)removeAllHUDOnContainerChange;
-(BOOL)currentInteractiveHUDVisible;
-(void)setUndoInteractiveHUDVisibility:(BOOL)arg1 ;
-(BOOL)currentStateHUDVisible;
-(void)setUndoStateHUDVisibility:(BOOL)arg1 withType:(long long)arg2 available:(BOOL)arg3 ;
-(UILayoutGuide *)layoutGuide;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)clearUndoStateHUDDismissTimer;
-(void)clearMultiPinchTimer;
-(UIKBUndoInteractionHUD *)undoInteractiveHUD;
-(void)setUndoInteractiveHUD:(UIKBUndoInteractionHUD *)arg1 ;
-(UIKBUndoStateHUD *)undoStateHUD;
-(void)setUndoStateHUD:(UIKBUndoStateHUD *)arg1 ;
-(void)setCurrentActuallSceneBounds:(CGRect)arg1 ;
-(BOOL)isRTLMode;
-(CGRect)currentActuallSceneBounds;
-(NSLayoutConstraint *)undoHUDContainerWidthConstraint;
-(NSLayoutConstraint *)undoHUDContainerHeightConstraint;
-(long long)currentAppearance;
-(BOOL)needUpdateHUDForContainerChange;
-(void)layoutUndoInteractiveHUD;
-(void)setCurrentAppearance:(long long)arg1 ;
-(void)layoutUndoStateHUD;
-(void)setUndoStateHUDIsAnimating:(BOOL)arg1 ;
-(void)touchUndoStateHUDDismissTimer;
-(void)animateDisplayingStateHUD;
-(void)animateInStateHUD;
-(BOOL)undoStateHUDIsAnimating;
-(NSLayoutConstraint *)undoStateHUDTopConstraint;
-(void)_createAndUpdateUndoInteractiveHUDIfNecessary;
-(void)setUndoHUDType:(long long)arg1 visibility:(BOOL)arg2 ;
-(void)_createAndUpdateUndoStateHUDIfNecessary;
-(UIDelayedAction *)undoStateHUDDismissTimer;
-(void)undoStateHUDDismissTimerElaspsed:(id)arg1 ;
-(void)setUndoStateHUDDismissTimer:(UIDelayedAction *)arg1 ;
-(UIUndoGestureObserver *)observerGesture;
-(void)observerGestureHandler:(id)arg1 ;
-(void)setObserverGesture:(UIUndoGestureObserver *)arg1 ;
-(UIKBProductibitySingleTapGesture *)threeFingerSingleTap;
-(void)threeFingerSingleTap:(id)arg1 ;
-(void)setThreeFingerSingleTap:(UIKBProductibitySingleTapGesture *)arg1 ;
-(UIKBProductibityDoubleTapGesture *)threeFingerDoubleTap;
-(void)threeFingerDoubleTap:(id)arg1 ;
-(void)setThreeFingerDoubleTap:(UIKBProductibityDoubleTapGesture *)arg1 ;
-(UIKBProductivityPanGestureRecognizer *)threeFingerSlide;
-(void)threeFingerSlide:(id)arg1 ;
-(void)setThreeFingerSlide:(UIKBProductivityPanGestureRecognizer *)arg1 ;
-(UIKBProductivityLongPressGestureRecognizer *)threeFingerLongPress;
-(void)threeFingerLongPress:(id)arg1 ;
-(void)setThreeFingerLongPress:(UIKBProductivityLongPressGestureRecognizer *)arg1 ;
-(UIKBProductivityPinchGestureRecognizer *)threeFingerPinch;
-(void)threeFingerPinch:(id)arg1 ;
-(void)setThreeFingerPinch:(UIKBProductivityPinchGestureRecognizer *)arg1 ;
-(void)_createGestureRecognizersIfNecessary;
-(void)setPreviousRecognizedPanDirection:(long long)arg1 ;
-(void)setPanDownStateChangedCounter:(unsigned long long)arg1 ;
-(void)setLastTapTimestamp:(double)arg1 ;
-(id)currentResponder;
-(unsigned long long)privateEditingInteractionOptions;
-(BOOL)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg1 ;
-(BOOL)undoManagerOperationsUndoRedoAvailable;
-(BOOL)undoManagerOperationsCutCopyPasteAvailable;
-(BOOL)interactiveHUDIsVisible;
-(BOOL)textEditingOperationsAvailableWithGestureRecognizer:(id)arg1 ;
-(BOOL)bundleIniWorkFamily:(id)arg1 ;
-(UIDelayedAction *)multiPansTimer;
-(void)multiPansTimerElaspsed:(id)arg1 ;
-(void)setMultiPansTimer:(UIDelayedAction *)arg1 ;
-(void)deactiveActiveKeysIfNeeded:(id)arg1 ;
-(double)lastTapTimestamp;
-(void)threeFingerDoubleTapUndoAction;
-(void)_startUndoPan:(id)arg1 ;
-(void)_updateUndoPan:(id)arg1 ;
-(void)_endPan:(id)arg1 ;
-(BOOL)multiPinchTimerOn;
-(void)setMultiPinchTimerOn:(BOOL)arg1 ;
-(void)_startPinch:(id)arg1 ;
-(void)_updatePinch:(id)arg1 ;
-(void)_endPinch:(id)arg1 ;
-(void)_cancelPinch:(id)arg1 ;
-(void)setInitPinchableDistance:(double)arg1 ;
-(void)setPotentialPinchDirection:(long long)arg1 ;
-(double)initPinchableDistance;
-(long long)potentialPinchDirection;
-(id)interactiveHUDButtonForDirection:(long long)arg1 ;
-(void)fullyCloseCoverWithComplete:(/*^block*/id)arg1 ;
-(BOOL)performActionWithDirection:(long long)arg1 ;
-(long long)undoControlTypeWithDirection:(long long)arg1 ;
-(void)startMultiPinchTimer:(double)arg1 ;
-(void)fullyOpenAndCloseCoverWithBeginDirection:(long long)arg1 ;
-(id)scrollViewForInputDelegate;
-(void)setPreviousPanLocation:(CGPoint)arg1 ;
-(void)setBeginPanDirection:(long long)arg1 ;
-(unsigned long long)panDownStateChangedCounter;
-(BOOL)undoGestureIsMoving:(id)arg1 ;
-(long long)slideDirectionWithGesture:(id)arg1 ;
-(long long)beginPanDirection;
-(void)setRemainingDistanceToTravel:(double)arg1 ;
-(CGPoint)previousPanLocation;
-(double)remainingDistanceToTravel;
-(void)animateSpringCoverWithSuccess:(BOOL)arg1 direction:(long long)arg2 remainingDistanceToTravel:(double)arg3 ;
-(id)responderForOperation:(SEL)arg1 withSender:(id)arg2 ;
-(UIKBTextEditingTraits *)editingTraits;
-(void)editingOverlayContainerDidChangeToSceneBounds:(CGRect)arg1 ;
-(void)layoutUndoHUDSliderDetails;
-(id)_undoManagerFlattenedGroupingInfo;
-(void)touchMultiPansTimer;
-(void)clearMultiPansTimer;
-(void)setUndoStateHUDTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)undoStateHUDCenterConstraint;
-(void)setUndoStateHUDCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUndoHUDContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUndoHUDContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInteractiveHUDIsVisible:(BOOL)arg1 ;
-(long long)previousRecognizedPanDirection;
-(CGPoint)beginPanLocation;
-(void)setBeginPanLocation:(CGPoint)arg1 ;
-(double)previousPinchPerimeter;
-(void)setPreviousPinchPerimeter:(double)arg1 ;
-(void)setEditingTraits:(UIKBTextEditingTraits *)arg1 ;
@end

