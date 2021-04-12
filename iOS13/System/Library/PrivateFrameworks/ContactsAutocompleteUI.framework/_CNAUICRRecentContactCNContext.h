/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class CNContact;

@interface _CNAUICRRecentContactCNContext : NSObject {

	CNContact* _existingContact;
	CNContact* _interimContact;

}

@property (nonatomic,retain) CNContact * existingContact;              //@synthesize existingContact=_existingContact - In the implementation block
@property (nonatomic,retain) CNContact * interimContact;               //@synthesize interimContact=_interimContact - In the implementation block
-(CNContact *)existingContact;
-(void)setExistingContact:(CNContact *)arg1 ;
-(CNContact *)interimContact;
-(void)setInterimContact:(CNContact *)arg1 ;
@end

