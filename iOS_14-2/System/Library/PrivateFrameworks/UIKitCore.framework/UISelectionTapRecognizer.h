/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextTapRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UISelectionTapRecognizer : UITextTapRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(UIResponder*<UITextInput>)textView;
-(BOOL)isCloseToSelection;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(void)setState:(long long)arg1 ;
@end

