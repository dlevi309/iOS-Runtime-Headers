/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInteractiveUndoHUDActionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIEditingOverlayInteractionWithView.h>
#import <UIKit/UIInteraction.h>

@class UIView, UIUndoGestureObserver, UIKBProductivitySingleTapGesture, UIKBProductivityDoubleTapGesture, UIKBProductivityPanGestureRecognizer, UIKBProductivityLongPressGestureRecognizer, UIKBProductivityPinchGestureRecognizer, UIKBUndoInteractionHUD, UIKBUndoStateHUD, NSLayoutConstraint, UIDelayedAction, UILayoutGuide, UIKBTextEditingTraits, NSString;

@interface UIUndoGestureInteraction : NSObject <UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction> {

	BOOL _interactiveHUDIsVisible;
	BOOL _undoStateHUDIsAnimating;
	BOOL _multiPinchTimerOn;
	UIView* _view;
	UIUndoGestureObserver* _observerGesture;
	UIKBProductivitySingleTapGesture* _threeFingerSingleTap;
	UIKBProductivityDoubleTapGesture* _threeFingerDoubleTap;
	UIKBProductivityPanGestureRecognizer* _threeFingerSlide;
	UIKBProductivityLongPressGestureRecognizer* _threeFingerLongPress;
	UIKBProductivityPinchGestureRecognizer* _threeFingerPinch;
	UIKBUndoInteractionHUD* _undoInteractiveHUD;
	long long _interactiveHUDMode;
	/*^block*/id _pasteConfirmationAction;
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
@property (nonatomic,retain) UIKBProductivitySingleTapGesture * threeFingerSingleTap;                        //@synthesize threeFingerSingleTap=_threeFingerSingleTap - In the implementation block
@property (nonatomic,retain) UIKBProductivityDoubleTapGesture * threeFingerDoubleTap;                        //@synthesize threeFingerDoubleTap=_threeFingerDoubleTap - In the implementation block
@property (nonatomic,retain) UIKBProductivityPanGestureRecognizer * threeFingerSlide;                        //@synthesize threeFingerSlide=_threeFingerSlide - In the implementation block
@property (nonatomic,retain) UIKBProductivityLongPressGestureRecognizer * threeFingerLongPress;              //@synthesize threeFingerLongPress=_threeFingerLongPress - In the implementation block
@property (nonatomic,retain) UIKBProductivityPinchGestureRecognizer * threeFingerPinch;                      //@synthesize threeFingerPinch=_threeFingerPinch - In the implementation block
@property (nonatomic,retain) UIKBUndoInteractionHUD * undoInteractiveHUD;                                    //@synthesize undoInteractiveHUD=_undoInteractiveHUD - In the implementation block
@property (assign,nonatomic) long long interactiveHUDMode;                                                   //@synthesize interactiveHUDMode=_interactiveHUDMode - In the implementation block
@property (nonatomic,copy) id pasteConfirmationAction;                                                       //@synthesize pasteConfirmationAction=_pasteConfirmationAction - In the implementation block
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
+(void)presentProductivityGestureTutorialIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(id)iWorkFamily;
+(void)presentProductivityGestureTutorialInlineWithCompletion:(/*^block*/id)arg1 ;
-(void)tooSlow:(id)arg1 ;
-(void)copyOperation;
-(void)pasteOperation;
-(void)setMultiPansTimer:(UIDelayedAction *)arg1 ;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)_startPinch:(id)arg1 ;
-(NSLayoutConstraint *)undoHUDContainerWidthConstraint;
-(UIDelayedAction *)multiPansTimer;
-(void)setInteractiveHUDIsVisible:(BOOL)arg1 ;
-(void)threeFingerLongPress:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(CGRect)actualSceneBounds;
-(void)undoStateHUDDismissTimerElaspsed:(id)arg1 ;
-(void)setPasteConfirmationHUDVisibility:(BOOL)arg1 ;
-(NSLayoutConstraint *)undoStateHUDCenterConstraint;
-(void)setBeginPanDirection:(long long)arg1 ;
-(long long)keyboardAppearance;
-(void)threeFingerSingleTap:(id)arg1 ;
-(BOOL)currentInteractiveHUDVisible;
-(UILayoutGuide *)layoutGuide;
-(void)setInteractiveHUDMode:(long long)arg1 ;
-(BOOL)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg1 ;
-(id)responderForOperation:(SEL)arg1 withSender:(id)arg2 ;
-(double)lastTapTimestamp;
-(void)threeFingerDoubleTap:(id)arg1 ;
-(UIKBProductivityPinchGestureRecognizer *)threeFingerPinch;
-(id)_undoManagerFlattenedGroupingInfo;
-(void)didMoveToView:(id)arg1 ;
-(void)touchUndoStateHUDDismissTimer;
-(UIUndoGestureObserver *)observerGesture;
-(BOOL)bundleIniWorkFamily:(id)arg1 ;
-(void)setUndoInteractiveHUDVisibility:(BOOL)arg1 ;
-(void)clearHUDViews;
-(void)clearUndoStateHUDDismissTimer;
-(unsigned long long)panDownStateChangedCounter;
-(void)setThreeFingerSingleTap:(UIKBProductivitySingleTapGesture *)arg1 ;
-(void)disableEnclosingScrollViewScrolling;
-(void)setUndoInteractiveHUD:(UIKBUndoInteractionHUD *)arg1 ;
-(void)setThreeFingerLongPress:(UIKBProductivityLongPressGestureRecognizer *)arg1 ;
-(BOOL)canPaste;
-(BOOL)isRTLMode;
-(void)setUndoHUDContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)beginPanLocation;
-(void)observerGestureHandler:(id)arg1 ;
-(UIDelayedAction *)undoStateHUDDismissTimer;
-(void)_removeGestureRecognizers;
-(BOOL)undoGestureIsMoving:(id)arg1 ;
-(long long)previousRecognizedPanDirection;
-(void)startMultiPinchTimer:(double)arg1 ;
-(void)animateSpringCoverWithSuccess:(BOOL)arg1 direction:(long long)arg2 remainingDistanceToTravel:(double)arg3 ;
-(void)willMoveToView:(id)arg1 ;
-(void)_cancelPinch:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGRect)currentActuallSceneBounds;
-(void)deactiveActiveKeysIfNeeded:(id)arg1 ;
-(id)scrollViewForInputDelegate;
-(void)setUndoStateHUDTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInitPinchableDistance:(double)arg1 ;
-(void)fullyCloseCoverWithComplete:(/*^block*/id)arg1 ;
-(void)setUndoStateHUDIsAnimating:(BOOL)arg1 ;
-(double)currentTime;
-(double)remainingDistanceToTravel;
-(void)setMultiPinchTimerOn:(BOOL)arg1 ;
-(void)setPotentialPinchDirection:(long long)arg1 ;
-(UIView *)view;
-(void)setThreeFingerDoubleTap:(UIKBProductivityDoubleTapGesture *)arg1 ;
-(BOOL)undoStateHUDIsAnimating;
-(NSLayoutConstraint *)undoStateHUDTopConstraint;
-(void)setPanDownStateChangedCounter:(unsigned long long)arg1 ;
-(UIKBUndoStateHUD *)undoStateHUD;
-(CGPoint)previousPanLocation;
-(void)_createAndUpdateUndoStateHUDIfNecessary;
-(id)interactiveHUDButtonForDirection:(long long)arg1 ;
-(UIKBUndoInteractionHUD *)undoInteractiveHUD;
-(void)setUndoHUDContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLastTapTimestamp:(double)arg1 ;
-(void)fullyOpenAndCloseCoverWithBeginDirection:(long long)arg1 ;
-(void)setPreviousPinchPerimeter:(double)arg1 ;
-(BOOL)undoManagerOperationsCutCopyPasteAvailable;
-(long long)undoControlTypeWithDirection:(long long)arg1 ;
-(BOOL)performActionWithDirection:(long long)arg1 ;
-(void)cutOperation;
-(BOOL)needUpdateHUDForContainerChange;
-(double)initPinchableDistance;
-(void)_addGestureRecognizers;
-(void)setThreeFingerPinch:(UIKBProductivityPinchGestureRecognizer *)arg1 ;
-(void)threeFingerPinch:(id)arg1 ;
-(BOOL)textEditingOperationsAvailableWithGestureRecognizer:(id)arg1 ;
-(void)setUndoStateHUDCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(void)redo:(BOOL)arg1 ;
-(double)previousPinchPerimeter;
-(void)animateDisplayingStateHUD;
-(void)setPasteConfirmationAction:(id)arg1 ;
-(BOOL)currentStateHUDVisible;
-(void)_updatePinch:(id)arg1 ;
-(void)undo:(BOOL)arg1 ;
-(UIKBProductivityLongPressGestureRecognizer *)threeFingerLongPress;
-(UIKBTextEditingTraits *)editingTraits;
-(void)setThreeFingerSlide:(UIKBProductivityPanGestureRecognizer *)arg1 ;
-(BOOL)undoManagerOperationsUndoRedoAvailable;
-(void)layoutUndoInteractiveHUD;
-(long long)potentialPinchDirection;
-(long long)interactiveHUDMode;
-(void)removeAllHUDOnContainerChange;
-(void)setCurrentAppearance:(long long)arg1 ;
-(void)clearMultiPinchTimer;
-(BOOL)canCopy;
-(void)threeFingerDoubleTapUndoAction;
-(BOOL)canCut;
-(void)_updateUndoPan:(id)arg1 ;
-(void)multiPansTimerElaspsed:(id)arg1 ;
-(long long)beginPanDirection;
-(NSLayoutConstraint *)undoHUDContainerHeightConstraint;
-(void)_createAndUpdateUndoInteractiveHUDIfNecessary;
-(void)setBeginPanLocation:(CGPoint)arg1 ;
-(UIKBProductivityDoubleTapGesture *)threeFingerDoubleTap;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchMultiPansTimer;
-(void)setObserverGesture:(UIUndoGestureObserver *)arg1 ;
-(void)clearMultiPansTimer;
-(void)setPreviousRecognizedPanDirection:(long long)arg1 ;
-(unsigned long long)privateEditingInteractionOptions;
-(void)setCurrentActuallSceneBounds:(CGRect)arg1 ;
-(BOOL)interactiveHUDIsVisible;
-(void)_endPinch:(id)arg1 ;
-(void)setUndoHUDType:(long long)arg1 visibility:(BOOL)arg2 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(CGRect)arg1 ;
-(void)setUndoStateHUDDismissTimer:(UIDelayedAction *)arg1 ;
-(void)applicationWillSuspend;
-(void)setEditingTraits:(UIKBTextEditingTraits *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIKBProductivityPanGestureRecognizer *)threeFingerSlide;
-(void)layoutUndoStateHUD;
-(id)_undoManager;
-(void)threeFingerSlide:(id)arg1 ;
-(void)_startUndoPan:(id)arg1 ;
-(void)setPreviousPanLocation:(CGPoint)arg1 ;
-(void)_createGestureRecognizersIfNecessary;
-(long long)slideDirectionWithGesture:(id)arg1 ;
-(UIKBProductivitySingleTapGesture *)threeFingerSingleTap;
-(BOOL)multiPinchTimerOn;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)currentResponder;
-(id)pasteConfirmationAction;
-(void)setUndoStateHUDVisibility:(BOOL)arg1 withType:(long long)arg2 available:(BOOL)arg3 ;
-(void)setUndoStateHUD:(UIKBUndoStateHUD *)arg1 ;
-(long long)currentAppearance;
-(void)animateInStateHUD;
-(void)_endPan:(id)arg1 ;
-(void)setRemainingDistanceToTravel:(double)arg1 ;
@end

