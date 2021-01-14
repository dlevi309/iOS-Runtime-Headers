/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <TSReading/TSWPEditingController.h>

@interface SXTextTangierEditingController : TSWPEditingController {

	BOOL _startingInitialSelectionDrag;

}

@property (assign,nonatomic) BOOL startingInitialSelectionDrag;              //@synthesize startingInitialSelectionDrag=_startingInitialSelectionDrag - In the implementation block
-(BOOL)wantsKeyboard;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)wantsCaret;
-(BOOL)canAddOrShowComment;
-(BOOL)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2 ;
-(void)tappedOnKnob:(id)arg1 ;
-(id)editingReps;
-(id)editorKeyboardLanguage;
-(BOOL)startingInitialSelectionDrag;
-(void)setStartingInitialSelectionDrag:(BOOL)arg1 ;
@end

