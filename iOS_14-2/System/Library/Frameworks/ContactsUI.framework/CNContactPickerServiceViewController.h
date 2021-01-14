/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactPickerContentViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentDelegate.h>

@class NSString;

@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidCancel;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(id)_filteredContact:(id)arg1 withKeys:(id)arg2 ;
-(id)_filteredProperty:(id)arg1 ;
@end

