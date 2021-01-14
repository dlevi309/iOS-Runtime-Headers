/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)becomeFirstResponder;
-(void)didAppear;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_SFDialogViewDelegate>)delegate;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)setTableViewRows:(id)arg1 didSelectRowAction:(/*^block*/id)arg2 ;
-(void)willDisappear;
-(void)setTitleText:(id)arg1 ;
-(void)setDelegate:(id<_SFDialogViewDelegate>)arg1 ;
-(void)_keyboardDismissGesture:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(UIView *)contentView;
-(void)setUsesOpaqueAppearance:(BOOL)arg1 ;
-(void)setDialogActions:(id)arg1 ;
@end

