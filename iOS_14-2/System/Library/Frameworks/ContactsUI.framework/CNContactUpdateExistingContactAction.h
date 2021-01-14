/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, NSString;

@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate> {

	CNContact* _existingContact;

}

@property (nonatomic,retain) CNContact * existingContact;              //@synthesize existingContact=_existingContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(CNContact *)existingContact;
-(void)setExistingContact:(CNContact *)arg1 ;
@end

