/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UITextField;

@interface PKPaymentPreferenceTextInputCell : PKTableViewCell {

	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end

