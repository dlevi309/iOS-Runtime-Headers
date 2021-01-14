/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIScribbleInteractionDelegate.h>

@protocol NCNotificationTextInputViewDelegate;
@class NCNotificationAction, UIStackView, UITextView, UIButton, UIScribbleInteraction, NSString;

@interface NCNotificationTextInputView : UIView <UITextViewDelegate, UIScribbleInteractionDelegate> {

	id<NCNotificationTextInputViewDelegate> _delegate;
	NCNotificationAction* _action;
	UIStackView* _horizontalStack;
	UITextView* _textView;
	UIButton* _button;
	UIScribbleInteraction* _scribbleInteraction;

}

@property (nonatomic,retain) UIStackView * horizontalStack;                                        //@synthesize horizontalStack=_horizontalStack - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIScribbleInteraction * scribbleInteraction;                          //@synthesize scribbleInteraction=_scribbleInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationTextInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationAction * action;                                        //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(UIScribbleInteraction *)scribbleInteraction;
-(BOOL)resignFirstResponder;
-(void)setScribbleInteraction:(UIScribbleInteraction *)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(UIButton *)button;
-(CGSize)intrinsicContentSize;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NCNotificationTextInputViewDelegate>)delegate;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(NCNotificationAction *)action;
-(void)setAction:(NCNotificationAction *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<NCNotificationTextInputViewDelegate>)arg1 ;
-(void)scribbleInteractionDidFinishWriting:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setButtonTitle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)_updateForTextChange;
-(double)_textViewHeight;
-(double)_maximumTextViewHeight;
-(double)_textViewWidth;
-(double)_pencilModeHeight;
-(UIStackView *)horizontalStack;
-(void)setHorizontalStack:(UIStackView *)arg1 ;
@end

