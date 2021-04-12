/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUITurnOnSiriViewDelegate;
@class UILabel, UITextView, VTUITurnOnSiriImageView, UIView, NSLayoutConstraint, NSMutableArray, NSArray, UIScrollView, UIButton, NSString;

@interface VTUITurnOnSiriView : UIView <UITextViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	UITextView* _footerTextView;
	VTUITurnOnSiriImageView* _imageView;
	UIView* _imageViewContainer;
	NSLayoutConstraint* _imageViewHeightCapConstraint;
	NSLayoutConstraint* _imageViewHeightMinimumConstraint;
	NSLayoutConstraint* _imageSpacingConstraint;
	NSMutableArray* _horizontalPaddingConstraints;
	NSArray* _siriLanguages;
	UIScrollView* _scrollView;
	UIView* _scrollContainerView;
	id<VTUITurnOnSiriViewDelegate> _stateViewDelegate;
	UIButton* _laterButton;
	UIButton* _continueButton;
	NSArray* _continueButtons;

}

@property (assign,nonatomic,__weak) id<VTUITurnOnSiriViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) UIButton * laterButton;                                             //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) UIButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,readonly) NSArray * continueButtons;                                          //@synthesize continueButtons=_continueButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)continueButton;
-(void)_setImage:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UIButton *)laterButton;
-(void)_setupUI;
-(void)setStateViewDelegate:(id<VTUITurnOnSiriViewDelegate>)arg1 ;
-(NSArray *)continueButtons;
-(void)fadeInSubviews;
-(void)prepareForLastTimeShown;
-(id)languageSelectionOfContinueButton:(id)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(id<VTUITurnOnSiriViewDelegate>)stateViewDelegate;
@end

