/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _SFDialogViewDelegate;
@class SFDialogContentView, _SFKeyboardLayoutAlignmentView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSLayoutConstraint, UIView;

@interface _SFDialogView : UIView {

	SFDialogContentView* _contentView;
	SFDialogContentView* _contentViewConfiguredForMinimumHeight;
	_SFKeyboardLayoutAlignmentView* _keyboardAlignmentView;
	UISwipeGestureRecognizer* _keyboardDismissSwipeGesture;
	UITapGestureRecognizer* _keyboardDismissTapGesture;
	NSLayoutConstraint* _obscuredInsetTopConstraint;
	NSLayoutConstraint* _obscuredInsetLeftConstraint;
	NSLayoutConstraint* _obscuredInsetBottomConstraint;
	NSLayoutConstraint* _obscuredInsetRightConstraint;
	id<_SFDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<_SFDialogViewDelegate>)delegate;
-(void)setDelegate:(id<_SFDialogViewDelegate>)arg1 ;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setTitleText:(id)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(void)didAppear;
-(void)willDisappear;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)setDialogActions:(id)arg1 ;
-(void)setUsesOpaqueAppearance:(BOOL)arg1 ;
-(void)_keyboardDismissGesture:(id)arg1 ;
-(void)setObscuredInsets:(UIEdgeInsets)arg1 ;
@end

