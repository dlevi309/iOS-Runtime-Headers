/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)invalidate;
-(UIResponder*<UITextInput>)textView;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)startTimer;
-(BOOL)_tracksPointerTouch;
-(BOOL)_allowsForShortDelay;
-(BOOL)isCloseToCaret;
-(BOOL)isWithinRecentTap;
-(BOOL)shouldUseLegacyBehavior;
@end

