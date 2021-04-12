/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <TSReading/TSWPEditingController.h>

@interface SXTextTangierEditingController : TSWPEditingController {

	BOOL _startingInitialSelectionDrag;

}

@property (assign,nonatomic) BOOL startingInitialSelectionDrag;              //@synthesize startingInitialSelectionDrag=_startingInitialSelectionDrag - In the implementation block
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)wantsCaret;
-(BOOL)wantsKeyboard;
-(BOOL)canAddOrShowComment;
-(BOOL)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2 ;
-(void)tappedOnKnob:(id)arg1 ;
-(id)editingReps;
-(id)editorKeyboardLanguage;
-(BOOL)startingInitialSelectionDrag;
-(void)setStartingInitialSelectionDrag:(BOOL)arg1 ;
@end

