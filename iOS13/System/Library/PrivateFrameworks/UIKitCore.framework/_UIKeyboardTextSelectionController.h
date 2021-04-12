/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _selectionGranularity;
	UITextRange* _initialSelection;
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
-(void)dealloc;
-(UIView *)textInputView;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)showSelectionCommands;
-(UIResponder*<UITextInput>)inputDelegate;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginSelectionChange;
-(void)beginSelection;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)restartSelection;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endSelection;
-(void)endSelectionChange;
-(void)willHandoffLoupeMagnifier;
-(void)updateSelectionRects;
-(void)updateGestureRecognizers;
-(UITextInteractionAssistant *)interactionAssistant;
-(id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1 ;
-(id)initWithInputDelegate:(id)arg1 ;
-(void)textDidChange;
-(void)selectionDidChange;
-(UITextPosition *)cursorPosition;
-(void)setCursorPosition:(UITextPosition *)arg1 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scrollSelectionToVisible;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)setCaretRectForCursorPosition:(CGRect)arg1 ;
-(void)resetCursorPosition;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)setInitialSelection:(UITextRange *)arg1 ;
-(UITextRange *)initialSelection;
-(void)setSelectionBase:(UITextRange *)arg1 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3 ;
-(UITextRange *)selectionBase;
-(void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(CGRect)selectedRectInLineWithPoint:(CGPoint)arg1 ;
-(BOOL)hasCaretSelection;
-(BOOL)hasRangedSelection;
-(CGRect)caretRectForFirstSelectedPosition;
-(CGRect)caretRectForLastSelectedPosition;
-(CGRect)caretRectForCursorPosition;
-(void)switchToRangedSelection;
-(void)willBeginHighlighterGesture;
-(void)beginLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)endLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)beginRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)endRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(BOOL)beginLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)updateLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)endLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)boundedDeltaForTranslation:(CGPoint)arg1 cursorLocationBase:(CGPoint)arg2 ;
-(void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(CGPoint)arg3 executionContext:(id)arg4 ;
-(void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
@end

