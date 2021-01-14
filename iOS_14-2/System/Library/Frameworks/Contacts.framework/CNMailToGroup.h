/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactFormatter;

@interface CNMailToGroup : NSObject {

	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)os_log;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)init;
-(CNContactFormatter *)contactFormatter;
-(id)santizeMailingAddress:(id)arg1 ;
-(id)mailUrlForContacts:(id)arg1 ;
-(id)mailUrlForContacts:(id)arg1 needsEmailAddresses:(BOOL)arg2 ;
-(BOOL)allContactsHaveEmailAddress:(id)arg1 ;
-(id)mailingAddressForContact:(id)arg1 ;
-(id)emailAddressForContact:(id)arg1 ;
@end

