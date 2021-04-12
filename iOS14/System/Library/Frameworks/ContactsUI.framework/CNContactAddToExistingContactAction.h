/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, CNContactPickerViewController, NSString;

@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate> {

	CNContact* _chosenContact;
	CNContactPickerViewController* _contactPicker;

}

@property (nonatomic,retain) CNContactPickerViewController * contactPicker;              //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) CNContact * chosenContact;                                  //@synthesize chosenContact=_chosenContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(CNContact *)chosenContact;
-(CNContactPickerViewController *)contactPicker;
-(void)setChosenContact:(CNContact *)arg1 ;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
@end

