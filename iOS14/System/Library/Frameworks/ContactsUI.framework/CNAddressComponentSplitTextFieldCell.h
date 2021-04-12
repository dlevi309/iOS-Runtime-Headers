/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNAddressComponentTextFieldCell.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class UITextField, CNRepeatingGradientSeparatorView, NSString;

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell <NUIContainerViewDelegate> {

	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	CNRepeatingGradientSeparatorView* _separator;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) CNRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
+(Class)containerViewClass;
-(CNRepeatingGradientSeparatorView *)separator;
-(id)textAttributes;
-(void)setTextAttributes:(id)arg1 ;
-(void)setTextFieldLeft:(UITextField *)arg1 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(UITextField *)textFieldLeft;
-(void)setupTextFields;
-(UITextField *)textFieldRight;
-(void)setTextFieldRight:(UITextField *)arg1 ;
-(id)newSeparatorView;
-(void)setSeparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(id)textFields;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

