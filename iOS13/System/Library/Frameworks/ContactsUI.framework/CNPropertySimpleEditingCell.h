/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)prepareForReuse;
-(UITextField *)textField;
-(void)textFieldChanged:(id)arg1 ;
-(id)valueView;
-(id)variableConstraints;
-(id)constantConstraints;
-(id)firstResponderItem;
-(void)updateValueWithPropertyItem:(id)arg1 ;
@end

