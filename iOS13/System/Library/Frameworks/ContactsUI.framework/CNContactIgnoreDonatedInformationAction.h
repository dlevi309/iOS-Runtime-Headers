/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIExternalComponentsFactory, CNDonationStore;

@interface CNContactIgnoreDonatedInformationAction : CNContactAction {

	CNUIExternalComponentsFactory* _componentsFactory;
	CNDonationStore* _donationStore;

}

@property (nonatomic,readonly) CNUIExternalComponentsFactory * componentsFactory;              //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (nonatomic,readonly) CNDonationStore * donationStore;                                //@synthesize donationStore=_donationStore - In the implementation block
-(id)initWithContact:(id)arg1 ;
-(CNDonationStore *)donationStore;
-(void)performActionWithSender:(id)arg1 ;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3 ;
-(BOOL)rejectAllDonations;
-(void)showRejectionFailureAlert;
@end

