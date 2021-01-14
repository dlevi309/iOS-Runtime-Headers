/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)PIN;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)failedAttemptCount;
-(void)setEnterLabel:(UILabel *)arg1 ;
-(void)setPasscodeField:(UIPasscodeField *)arg1 ;
-(void)setTextEntryField:(UITextField *)arg1 ;
-(void)setFailedLabel:(UILabel *)arg1 ;
-(void)setFailedBackground:(UIImageView *)arg1 ;
-(void)stopPINInput;
-(id)initWithPrinterName:(id)arg1 ;
-(void)startPINInput;
-(UIPasscodeField *)passcodeField;
-(UITextField *)textEntryField;
-(UIImageView *)failedBackground;
-(void)textDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFailedAttemptCount:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)enterLabel;
-(UILabel *)failedLabel;
-(void)showSuccess:(BOOL)arg1 ;
-(void)dealloc;
@end

