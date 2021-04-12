/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInput;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextPosition, UITextRange, UIResponder, UITextInteractionAssistant, UIView;

@interface _UIKeyboardTextSelectionController : NSObject {

	BOOL _hasInteractionAssistant;
	BOOL _hasSelectionInteractionAssistant;
	BOOL _hasTextInputView;
	UITextPosition* _cursorPosition;
	UITextRange* _initialSelection;
	long long _selectionGranularity;
	UITextRange* _selectionBase;
	UIResponder*<UITextInput> _inputDelegate;
	CGRect _caretRectForCursorPosition;

}

@property (assign,nonatomic) CGRect caretRectForCursorPosition;                                                //@synthesize caretRectForCursorPosition=_caretRectForCursorPosition - In the implementation block
@property (nonatomic,retain) UITextRange * initialSelection;                                                   //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) UITextRange * selectionBase;                                                      //@synthesize selectionBase=_selectionBase - In the implementation block
@property (nonatomic,readonly) UIResponder*<UITextInput> inputDelegate;                                        //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) id<UISelectionInteractionAssistant> selectionInteractionAssistant; 
@property (assign,nonatomic) long long selectionGranularity;                                                   //@synthesize selectionGranularity=_selectionGranularity - In the implementation block
@property (nonatomic,retain) UITextPosition * cursorPosition; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (nonatomic,readonly) BOOL hasCaretSelection; 
@property (nonatomic,readonly) BOOL hasRangedSelection; 
@property (nonatomic,readonly) CGRect caretRectForFirstSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLastSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLeftmostSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForRightmostSelectedPosition; 
-(void)setSelectedTextRange:(id)arg1 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(UIResponder*<UITextInput>)inputDelegate;
-(UITextPosition *)cursorPosition;
-(void)endSelectionChange;
-(void)beginSelectionChange;
-(long long)selectionGranularity;
-(void)setCursorPosition:(UITextPosition *)arg1 ;
-(void)setSelectionGranularity:(long long)arg1 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(BOOL)hasCaretSelection;
-(UIView *)textInputView;
-(void)selectionDidChange;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(CGRect)caretRectForFirstSelectedPosition;
-(void)willBeginHighlighterGesture;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)showSelectionCommands;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(BOOL)hasRangedSelection;
-(void)endLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)beginLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)textDidChange;
-(void)scrollSelectionToVisible;
-(void)endSelection;
-(void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(CGPoint)arg3 executionContext:(id)arg4 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)endRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(CGRect)selectedRectInLineWithPoint:(CGPoint)arg1 ;
-(UITextRange *)initialSelection;
-(CGRect)caretRectForCursorPosition;
-(id)initWithInputDelegate:(id)arg1 ;
-(void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateGestureRecognizers;
-(UITextRange *)selectionBase;
-(void)updateLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)endFloatingCursor;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)willHandoffLoupeMagnifier;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)setInitialSelection:(UITextRange *)arg1 ;
-(void)endLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)beginSelection;
-(id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
-(CGPoint)boundedDeltaForTranslation:(CGPoint)arg1 cursorLocationBase:(CGPoint)arg2 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)setSelectionBase:(UITextRange *)arg1 ;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)updateSelectionRects;
-(void)resetCursorPosition;
-(void)updateLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)restartSelection;
-(CGRect)caretRectForLastSelectedPosition;
-(void)updateRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)switchToRangedSelection;
-(void)dealloc;
-(BOOL)beginLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)modifySelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)setCaretRectForCursorPosition:(CGRect)arg1 ;
@end

