/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

