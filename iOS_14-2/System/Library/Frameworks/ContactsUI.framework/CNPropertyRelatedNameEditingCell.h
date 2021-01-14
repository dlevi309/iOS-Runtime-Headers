/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class NSString;

@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell <CNContactPickerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)performAccessoryAction;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

