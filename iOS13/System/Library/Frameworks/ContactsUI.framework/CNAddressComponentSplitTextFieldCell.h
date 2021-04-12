/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNAddressComponentTextFieldCell.h>

@class UITextField, CNRepeatingGradientSeparatorView;

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell {

	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	CNRepeatingGradientSeparatorView* _separator;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) CNRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(id)textFields;
-(id)textAttributes;
-(void)setTextAttributes:(id)arg1 ;
-(CNRepeatingGradientSeparatorView *)separator;
-(void)setSeparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(void)setupTextFields;
-(id)currentConstraintsForMetrics:(id)arg1 ;
-(UITextField *)textFieldLeft;
-(void)setTextFieldLeft:(UITextField *)arg1 ;
-(UITextField *)textFieldRight;
-(void)setTextFieldRight:(UITextField *)arg1 ;
@end

