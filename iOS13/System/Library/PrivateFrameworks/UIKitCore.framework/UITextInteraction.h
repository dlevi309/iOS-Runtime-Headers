/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UITextInteractionDelegate, UITextInput, UITextInteraction_AssistantDelegate;
@class NSMutableArray, NSMutableDictionary, UILongPressGestureRecognizer, _UIStatesFeedbackGenerator, UIResponder, UIView, UITextInteractionInputDelegate, NSArray, NSDictionary, NSString;

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UITextInteraction* _parent;
	NSMutableArray* _children;
	NSMutableArray* _gestures;
	NSMutableDictionary* _gestureMap;
	BOOL _inGesture;
	long long _textInteractionMode;
	UILongPressGestureRecognizer* _customHighlighterGesture;
	_UIStatesFeedbackGenerator* _feedbackBehaviour;
	id<UITextInteractionDelegate> _delegate;
	UIResponder*<UITextInput> _textInput;
	UIView* _view;
	UITextInteractionInputDelegate* _interactionInputDelegate;
	id<UITextInteraction_AssistantDelegate> _assistantDelegate;

}

@property (assign,nonatomic,__weak) UIView * view;                                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UITextInteractionInputDelegate * interactionInputDelegate;                     //@synthesize interactionInputDelegate=_interactionInputDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInteraction_AssistantDelegate> assistantDelegate;              //@synthesize assistantDelegate=_assistantDelegate - In the implementation block
@property (__weak,readonly) UITextInteraction * parent; 
@property (__weak,readonly) UITextInteraction * root; 
@property (nonatomic,readonly) NSArray * children;                                                          //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * gestures;                                                          //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,readonly) NSDictionary * gestureMap;                                                   //@synthesize gestureMap=_gestureMap - In the implementation block
@property (assign,setter=setInGesture:,nonatomic) BOOL inGesture;                                           //@synthesize inGesture=_inGesture - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackBehaviour;                                //@synthesize feedbackBehaviour=_feedbackBehaviour - In the implementation block
@property (nonatomic,readonly) long long textInteractionSet; 
@property (nonatomic,retain) UILongPressGestureRecognizer * _customHighlighterGesture;                      //@synthesize customHighlighterGesture=_customHighlighterGesture - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInteractionDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder*<UITextInput> textInput;                                    //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,readonly) long long textInteractionMode;                                               //@synthesize textInteractionMode=_textInteractionMode - In the implementation block
@property (nonatomic,readonly) NSArray * gesturesForFailureRequirements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textInteractionForMode:(long long)arg1 ;
+(id)textInteractionsForSet:(long long)arg1 ;
+(double)_maximumBeamSnappingLength;
-(id)init;
-(void)addChild:(id)arg1 ;
-(UITextInteraction *)parent;
-(id<UITextInteractionDelegate>)delegate;
-(void)setDelegate:(id<UITextInteractionDelegate>)arg1 ;
-(UITextInteraction *)root;
-(NSArray *)children;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(NSArray *)gesturesForFailureRequirements;
-(id)_textInput;
-(id)recognizerForName:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withName:(id)arg2 ;
-(BOOL)currentSelectionContainsPoint:(CGPoint)arg1 ;
-(void)cancelLinkInteractionSession;
-(id<UITextInteraction_AssistantDelegate>)assistantDelegate;
-(void)_createFeedbackIfNecessary;
-(void)_prepareFeedbackForGesture;
-(void)setInGesture:(BOOL)arg1 ;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(void)disableClearsOnInsertion;
-(void)_playFeedbackForCursorMovement;
-(void)_cancelRecognizerWithName:(id)arg1 ;
-(BOOL)inGesture;
-(void)_cleanUpFeedbackForGesture;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(NSDictionary *)gestureMap;
-(_UIStatesFeedbackGenerator *)feedbackBehaviour;
-(NSArray *)gestures;
-(void)setFeedbackBehaviour:(_UIStatesFeedbackGenerator *)arg1 ;
-(BOOL)doesControlDelegate;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(id)defaultDoubleTapRecognizerWithAction:(SEL)arg1 ;
-(id)defaultTapRecognizerWithAction:(SEL)arg1 ;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(BOOL)_shouldObscureTextInput;
-(long long)textInteractionMode;
-(id)interactionWithClass:(Class)arg1 ;
-(void)finishSetup;
-(BOOL)shouldAllowWithTouchTypes:(id)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(id)interactionWithGestureForName:(id)arg1 ;
-(id)_transientState;
-(void)_applyTransientState:(id)arg1 ;
-(UITextInteractionInputDelegate *)interactionInputDelegate;
-(void)setInteractionInputDelegate:(UITextInteractionInputDelegate *)arg1 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(void)_setLinkInteractionSession:(id)arg1 ;
-(BOOL)selection:(id)arg1 containsPoint:(CGPoint)arg2 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)removeGestureRecognizerWithName:(id)arg1 ;
-(void)_callDelegateWillMoveTextRangeExtentAtPoint:(CGPoint)arg1 ;
-(long long)textInteractionSet;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 ;
-(id)linkInteractionSession;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1 ;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRects:(id)arg2 ;
-(id)defaultTripleTapRecognizerWithAction:(SEL)arg1 ;
-(UILongPressGestureRecognizer *)_customHighlighterGesture;
-(void)set_customHighlighterGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setAssistantDelegate:(id<UITextInteraction_AssistantDelegate>)arg1 ;
@end

