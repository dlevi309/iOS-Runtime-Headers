/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentDelegate;
@class SUICOrbView, UIView, UILabel, UITextView, UIScrollView, _UIBackdropView, NSLayoutConstraint, NSString;

@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate> {

	SUICOrbView* _orbView;
	UIView* _scrollContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	UITextView* _privacyTextView;
	UIScrollView* _scrollView;
	_UIBackdropView* _backdropView;
	NSLayoutConstraint* _readableLeftAnchorConstraint;
	NSLayoutConstraint* _readableRightAnchorConstraint;
	id<VTUIEnrollmentDelegate> _enrollmentDelegate;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentDelegate> enrollmentDelegate;              //@synthesize enrollmentDelegate=_enrollmentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)safeAreaInsetsDidChange;
-(void)setSubtitle:(id)arg1 ;
-(void)_setupUI;
-(long long)_backdropStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)dealloc;
-(void)setEnrollmentDelegate:(id<VTUIEnrollmentDelegate>)arg1 ;
-(void)fadeInSubviews;
-(void)setInstructionText:(id)arg1 ;
-(BOOL)showPrivacyTextView;
-(id<VTUIEnrollmentDelegate>)enrollmentDelegate;
-(id)_createPrivacyTextView;
@end

