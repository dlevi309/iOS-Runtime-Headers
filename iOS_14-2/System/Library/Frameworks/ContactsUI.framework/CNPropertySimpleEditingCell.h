/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueView;
-(void)prepareForReuse;
-(id)constantConstraints;
-(id)variableConstraints;
-(UITextField *)textField;
-(void)textFieldChanged:(id)arg1 ;
-(id)firstResponderItem;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)dealloc;
@end

