/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIInputView.h>

@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;
@class SFAutomaticPasswordExplanationView;

@interface SFAutomaticPasswordInputView : UIInputView {

	SFAutomaticPasswordExplanationView* _explanationView;
	BOOL _shouldAllowSelfSizing;
	long long _keyboardType;
	id<SFAutomaticPasswordInputViewDelegate> _delegate;
	id<SFAutomaticPasswordInputViewSizing> _inputViewSizing;

}

@property (nonatomic,readonly) long long keyboardType;                                                   //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic,__weak) id<SFAutomaticPasswordInputViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SFAutomaticPasswordInputViewSizing> inputViewSizing;              //@synthesize inputViewSizing=_inputViewSizing - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSelfSizing;                                                 //@synthesize shouldAllowSelfSizing=_shouldAllowSelfSizing - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance; 
-(id<SFAutomaticPasswordInputViewDelegate>)delegate;
-(void)setDelegate:(id<SFAutomaticPasswordInputViewDelegate>)arg1 ;
-(long long)keyboardType;
-(CGSize)intrinsicContentSize;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardAppearance;
-(BOOL)allowsSelfSizing;
-(id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2 ;
-(void)setShouldAllowSelfSizing:(BOOL)arg1 ;
-(void)setInputViewSizing:(id<SFAutomaticPasswordInputViewSizing>)arg1 ;
-(void)_useStrongPasswordButtonAction:(id)arg1 ;
-(void)_useCustomPasswordButtonAction:(id)arg1 ;
-(id<SFAutomaticPasswordInputViewSizing>)inputViewSizing;
-(BOOL)shouldAllowSelfSizing;
@end

