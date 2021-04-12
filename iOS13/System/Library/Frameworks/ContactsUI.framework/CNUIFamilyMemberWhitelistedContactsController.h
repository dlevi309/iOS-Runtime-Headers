/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate.h>
#import <libobjc.A.dylib/CNUIFamilyMemberDowntimeContactPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>

@protocol CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberWhitelistedContactsControllerDelegate, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUICoreContactManagementConsentCheck, CNSchedulerProvider;
@class FAFamilyMember, CNContactStore, CNContactFormatter, CNContactViewController, NSArray, NSString;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver> {

	id<CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
	FAFamilyMember* _familyMember;
	id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> _delegate;
	CNContactStore* _familyMemberScopedContactStore;
	CNContactFormatter* _contactCardWarningFormatter;
	id<CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
	id<CNUICoreContactManagementConsentCheck> _contactManagentConsentCheck;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactViewController* _contactViewControllerPresentingItemDetails;

}

@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;                                        //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) CNContactFormatter * contactCardWarningFormatter;                                       //@synthesize contactCardWarningFormatter=_contactCardWarningFormatter - In the implementation block
@property (nonatomic,readonly) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;              //@synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactManagementConsentCheck> contactManagentConsentCheck;                  //@synthesize contactManagentConsentCheck=_contactManagentConsentCheck - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * contactViewControllerPresentingItemDetails;              //@synthesize contactViewControllerPresentingItemDetails=_contactViewControllerPresentingItemDetails - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                                          //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) NSArray * familyMemberContactItems; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (assign,nonatomic,__weak) id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2 ;
-(id)init;
-(id<CNUIFamilyMemberWhitelistedContactsControllerDelegate>)delegate;
-(void)setDelegate:(id<CNUIFamilyMemberWhitelistedContactsControllerDelegate>)arg1 ;
-(long long)status;
-(id<CNUICoreFamilyMemberWhitelistedContactsDataSource>)dataSource;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(id)warningMessageForContact:(id)arg1 ;
-(CNContactFormatter *)contactCardWarningFormatter;
-(FAFamilyMember *)familyMember;
-(void)contactPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)familyMemberContactItemsDidChange;
-(void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1 ;
-(void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1 ;
-(void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2 ;
-(id<CNUIFamilyMemberContactsPresentation>)familyMemberContactsPresentation;
-(long long)fetchStatus;
-(NSArray *)familyMemberContactItems;
-(BOOL)contactManagementEnabled;
-(void)presentDetailsOfFamilyMemberContactItem:(id)arg1 ;
-(void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1 ;
-(void)deleteFamilyMemberContactItem:(id)arg1 ;
-(void)performInteraction:(long long)arg1 ;
-(void)performDefaultInteraction;
-(id)generateContactSourceOptionSheet;
-(id)anchorViewForDefaultInteraction;
-(void)performAddFromMainContacts;
-(void)performAddFromMainContactsForFamilyMember;
-(void)performAddFromMainContactsForThisDevice;
-(void)performAddFromFamilyMemberContacts;
-(void)performAddNewContact;
-(void)addContactsToWhitelist:(id)arg1 ;
-(CNContactStore *)familyMemberScopedContactStore;
-(id<CNUICoreContactManagementConsentCheck>)contactManagentConsentCheck;
-(CNContactViewController *)contactViewControllerPresentingItemDetails;
-(void)setContactViewControllerPresentingItemDetails:(CNContactViewController *)arg1 ;
@end

