/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardType;
-(CGSize)intrinsicContentSize;
-(long long)keyboardAppearance;
-(id<SFAutomaticPasswordInputViewDelegate>)delegate;
-(id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2 ;
-(void)setShouldAllowSelfSizing:(BOOL)arg1 ;
-(void)setInputViewSizing:(id<SFAutomaticPasswordInputViewSizing>)arg1 ;
-(void)_useStrongPasswordButtonAction:(id)arg1 ;
-(void)setDelegate:(id<SFAutomaticPasswordInputViewDelegate>)arg1 ;
-(void)_useCustomPasswordButtonAction:(id)arg1 ;
-(id<SFAutomaticPasswordInputViewSizing>)inputViewSizing;
-(BOOL)shouldAllowSelfSizing;
-(BOOL)allowsSelfSizing;
@end

