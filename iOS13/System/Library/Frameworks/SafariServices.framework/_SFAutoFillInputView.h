/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIInputView.h>

@protocol _SFAutoFillInputViewDelegate;
@class _SFTextSuggestion, UILabel, UIButton, NSMutableArray;

@interface _SFAutoFillInputView : UIInputView {

	_SFTextSuggestion* _suggestion;
	UILabel* _explanationLabel;
	UIButton* _keyboardButton;
	UIButton* _otherPasswordsButton;
	UIButton* _fillCredentialButton;
	NSMutableArray* _dynamicConstraints;
	id<_SFAutoFillInputViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFAutoFillInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SFAutoFillInputViewDelegate>)delegate;
-(void)setDelegate:(id<_SFAutoFillInputViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3 ;
-(void)_updateFillCredentialButtonLabelMetrics;
-(void)_fillCredential:(id)arg1 ;
-(void)_showStandardKeyboard:(id)arg1 ;
-(void)_showMorePasswords:(id)arg1 ;
@end

