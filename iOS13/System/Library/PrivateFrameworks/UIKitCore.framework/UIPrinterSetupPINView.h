/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UIPasscodeField, UITextField, UIImageView, NSString;

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {

	UILabel* _titleLabel;
	UILabel* _enterLabel;
	UIPasscodeField* _passcodeField;
	UITextField* _textEntryField;
	UILabel* _failedLabel;
	UIImageView* _failedBackground;
	long long _failedAttemptCount;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * enterLabel;                         //@synthesize enterLabel=_enterLabel - In the implementation block
@property (nonatomic,retain) UIPasscodeField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UITextField * textEntryField;                 //@synthesize textEntryField=_textEntryField - In the implementation block
@property (nonatomic,retain) UILabel * failedLabel;                        //@synthesize failedLabel=_failedLabel - In the implementation block
@property (nonatomic,retain) UIImageView * failedBackground;               //@synthesize failedBackground=_failedBackground - In the implementation block
@property (assign,nonatomic) long long failedAttemptCount;                 //@synthesize failedAttemptCount=_failedAttemptCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)setEnterLabel:(UILabel *)arg1 ;
-(void)setPasscodeField:(UIPasscodeField *)arg1 ;
-(void)setTextEntryField:(UITextField *)arg1 ;
-(void)setFailedLabel:(UILabel *)arg1 ;
-(void)setFailedBackground:(UIImageView *)arg1 ;
-(id)initWithPrinterName:(id)arg1 ;
-(void)startPINInput;
-(void)stopPINInput;
-(id)PIN;
-(void)showSuccess:(BOOL)arg1 ;
-(UILabel *)enterLabel;
-(UIPasscodeField *)passcodeField;
-(UITextField *)textEntryField;
-(UILabel *)failedLabel;
-(UIImageView *)failedBackground;
-(long long)failedAttemptCount;
-(void)setFailedAttemptCount:(long long)arg1 ;
@end

