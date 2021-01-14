/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class CNContact;

@interface _CNAUICRRecentContactCNContext : NSObject {

	CNContact* _existingContact;
	CNContact* _interimContact;

}

@property (nonatomic,retain) CNContact * existingContact;              //@synthesize existingContact=_existingContact - In the implementation block
@property (nonatomic,retain) CNContact * interimContact;               //@synthesize interimContact=_interimContact - In the implementation block
-(CNContact *)interimContact;
-(void)setInterimContact:(CNContact *)arg1 ;
-(CNContact *)existingContact;
-(void)setExistingContact:(CNContact *)arg1 ;
@end

