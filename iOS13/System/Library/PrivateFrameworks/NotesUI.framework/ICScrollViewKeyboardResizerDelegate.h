/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol ICScrollViewKeyboardResizerDelegate <NSObject>
@optional
-(BOOL)keyboardResizerAutoscrollAboveKeyboard;
-(void)keyboardResizerAdjustInsetsWithKeyboardFrame:(CGRect)arg1 scrollAboveHeight:(double)arg2 duration:(double)arg3;
-(double)topInsetForResizer:(id)arg1;

@required
-(double)consumedBottomAreaForResizer:(id)arg1;
-(id)keyboardResizerScrollView;

@end

