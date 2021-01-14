/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate> {

	UITextField* _editingTextField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setCardGroupItem:(id)arg1 ;
-(id)firstResponderItem;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_cnui_applyContactStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

