/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performActionWithSender:(id)arg1 ;
-(CNDonationStore *)donationStore;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(id)initWithContact:(id)arg1 ;
-(id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3 ;
-(BOOL)rejectAllDonations;
-(void)showRejectionFailureAlert;
@end

