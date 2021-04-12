/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIDelayedAction, UIResponder;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIDelayedAction* _secondDelayTimer;
	BOOL _secondDelayElapsed;
	UIResponder*<UITextInput> _textInput;
	double _secondDelay;
	id _userData;

}

@property (assign,nonatomic,__weak) UIResponder*<UITextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                                      //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) BOOL secondDelayElapsed;                               //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic,__weak) id userData;                                      //@synthesize userData=_userData - In the implementation block
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)startTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(void)setSecondDelay:(double)arg1 ;
-(BOOL)secondDelayElapsed;
-(id)userData;
-(void)setUserData:(id)arg1 ;
@end

