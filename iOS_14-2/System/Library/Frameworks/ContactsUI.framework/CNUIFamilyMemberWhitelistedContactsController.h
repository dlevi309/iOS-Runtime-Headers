/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate.h>
#import <libobjc.A.dylib/CNUIFamilyMemberDowntimeContactPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>

@protocol CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberWhitelistedContactsControllerDelegate, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUICoreContactManagementConsentCheck, CNDowntimeWhitelistContainerFetching, CNSchedulerProvider;
@class FAFamilyMember, CNContactStore, CNContactFormatter, CNContactViewController, NSArray, NSString;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver> {

	id<CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
	FAFamilyMember* _familyMember;
	id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> _delegate;
	CNContactStore* _familyMemberScopedContactStore;
	CNContactFormatter* _contactCardWarningFormatter;
	id<CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
	id<CNUICoreContactManagementConsentCheck> _contactManagentConsentCheck;
	id<CNDowntimeWhitelistContainerFetching> _downtimeContaienerFetcher;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactViewController* _contactViewControllerPresentingItemDetails;

}

@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;                                        //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) CNContactFormatter * contactCardWarningFormatter;                                       //@synthesize contactCardWarningFormatter=_contactCardWarningFormatter - In the implementation block
@property (nonatomic,readonly) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;              //@synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactManagementConsentCheck> contactManagentConsentCheck;                  //@synthesize contactManagentConsentCheck=_contactManagentConsentCheck - In the implementation block
@property (nonatomic,readonly) id<CNDowntimeWhitelistContainerFetching> downtimeContaienerFetcher;                     //@synthesize downtimeContaienerFetcher=_downtimeContaienerFetcher - In the implementation block
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
+(id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2 parentContainer:(id)arg3 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(id<CNUIFamilyMemberWhitelistedContactsControllerDelegate>)delegate;
-(id)warningMessageForContact:(id)arg1 ;
-(CNContactFormatter *)contactCardWarningFormatter;
-(id<CNUICoreFamilyMemberWhitelistedContactsDataSource>)dataSource;
-(FAFamilyMember *)familyMember;
-(void)contactPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<CNUIFamilyMemberWhitelistedContactsControllerDelegate>)arg1 ;
-(long long)fetchStatus;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)familyMemberContactItemsDidChange;
-(void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1 ;
-(void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1 ;
-(NSArray *)familyMemberContactItems;
-(void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1 ;
-(id<CNUIFamilyMemberContactsPresentation>)familyMemberContactsPresentation;
-(void)performInteraction:(long long)arg1 ;
-(BOOL)contactManagementEnabled;
-(void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2 ;
-(void)performDefaultInteraction;
-(void)presentDetailsOfFamilyMemberContactItem:(id)arg1 ;
-(void)deleteFamilyMemberContactItem:(id)arg1 ;
-(void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1 ;
-(void)performAddFromMainContacts;
-(id)generateContactSourceOptionSheet;
-(id)anchorViewForDefaultInteraction;
-(void)performAddFromMainContactsForFamilyMember;
-(void)performAddFromMainContactsForThisDevice;
-(void)performAddFromFamilyMemberContacts;
-(void)performAddNewContact;
-(void)addContactsToWhitelist:(id)arg1 ;
-(CNContactStore *)familyMemberScopedContactStore;
-(id<CNUICoreContactManagementConsentCheck>)contactManagentConsentCheck;
-(id<CNDowntimeWhitelistContainerFetching>)downtimeContaienerFetcher;
-(CNContactViewController *)contactViewControllerPresentingItemDetails;
-(void)setContactViewControllerPresentingItemDetails:(CNContactViewController *)arg1 ;
-(long long)status;
@end

