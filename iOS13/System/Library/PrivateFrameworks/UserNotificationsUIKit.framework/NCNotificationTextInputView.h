/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol NCNotificationTextInputViewDelegate;
@class NCNotificationAction, UIStackView, UITextView, UIButton, NSString;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate> {

	id<NCNotificationTextInputViewDelegate> _delegate;
	NCNotificationAction* _action;
	UIStackView* _horizontalStack;
	UITextView* _textView;
	UIButton* _button;

}

@property (nonatomic,retain) UIStackView * horizontalStack;                                        //@synthesize horizontalStack=_horizontalStack - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationTextInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationAction * action;                                        //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NCNotificationTextInputViewDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationTextInputViewDelegate>)arg1 ;
-(NCNotificationAction *)action;
-(UITextView *)textView;
-(BOOL)isFirstResponder;
-(void)setTextView:(UITextView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setAction:(NCNotificationAction *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(BOOL)canResignFirstResponder;
-(void)setButton:(UIButton *)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setButtonTitle:(id)arg1 ;
-(void)_updateForTextChange;
-(double)_textViewWidth;
-(double)_maximumTextViewHeight;
-(UIStackView *)horizontalStack;
-(void)setHorizontalStack:(UIStackView *)arg1 ;
@end

