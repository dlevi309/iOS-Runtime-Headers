/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (__weak) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(UIResponder*<UITextInput>)textView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)startTimer;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(BOOL)_allowsForShortDelay;
-(BOOL)_isGestureType:(long long)arg1 ;
-(BOOL)isWithinRecentTap;
-(BOOL)_tracksPointerTouch;
-(BOOL)shouldUseLegacyBehavior;
-(void)invalidate;
-(BOOL)isCloseToCaret;
@end

