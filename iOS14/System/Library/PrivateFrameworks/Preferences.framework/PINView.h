/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PINEntryView.h>

@protocol PSPINEntryViewDelegate;
@class UILabel, FailureBarView, UIButton, NSString;

@interface PINView : UIView <PINEntryView> {

	UILabel* _titleLabel;
	UILabel* _errorTitleLabel;
	FailureBarView* _failureView;
	UILabel* _pinPolicyLabel;
	BOOL _error;
	UIButton* _optionsButton;
	id<PSPINEntryViewDelegate> _delegate;
	/*^block*/id _passcodeOptionsHandler;
	NSString* _optionsButtonTitle;

}

@property (nonatomic,copy) NSString * optionsButtonTitle;                             //@synthesize optionsButtonTitle=_optionsButtonTitle - In the implementation block
@property (assign,nonatomic,__weak) id<PSPINEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                 //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(id<PSPINEntryViewDelegate>)delegate;
-(void)hideError;
-(id)stringValue;
-(void)setDelegate:(id<PSPINEntryViewDelegate>)arg1 ;
-(void)showFailedAttempts:(long long)arg1 ;
-(void)hideFailedAttempts;
-(void)setStringValue:(id)arg1 ;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)passcodeOptionsHandler;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(id)optionsButton;
-(void)setTitle:(id)arg1 font:(id)arg2 ;
-(double)getCurrentTitleFontSize;
-(NSString *)optionsButtonTitle;
-(void)optionsButtonTapped;
-(void)_layoutBottomSubview:(id)arg1 withMinY:(double)arg2 withSize:(CGSize)arg3 ;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)setShowsOptionsButton:(BOOL)arg1 ;
-(void)notifyDelegatePINChanged;
-(void)notifyDelegatePINEntered;
-(void)setOptionsButtonTitle:(NSString *)arg1 ;
-(void)layoutTopLabel:(id)arg1 withMaxY:(double)arg2 ;
-(void)layoutBottomSubview:(id)arg1 withLabel:(id)arg2 withMinY:(double)arg3 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
@end

