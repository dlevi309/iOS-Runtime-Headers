/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateConstraints;
-(void)_updateFillCredentialButtonLabelMetrics;
-(void)_fillCredential:(id)arg1 ;
-(void)_showStandardKeyboard:(id)arg1 ;
-(void)_showMorePasswords:(id)arg1 ;
-(id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

