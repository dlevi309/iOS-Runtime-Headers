/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerPrivateDelegate.h>
#import <libobjc.A.dylib/CNFamilyMemberAddContactsOptionsSheetDelegate.h>
#import <libobjc.A.dylib/CNUIFamilyMemberDowntimeContactPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>

@protocol CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberContactsControllerDelegate, CNUICoreFamilyMemberContactsDataSource, CNSchedulerProvider;
@class FAFamilyMember, CNContactStore, CNContactPickerViewController, NSString;

@interface CNUIFamilyMemberContactsController : NSObject <CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver> {

	id<CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
	FAFamilyMember* _familyMember;
	id<CNUIFamilyMemberContactsControllerDelegate> _delegate;
	CNContactStore* _familyMemberScopedContactStore;
	id<CNUICoreFamilyMemberContactsDataSource> _dataSource;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactPickerViewController* _contactPickerViewController;

}

@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;                                        //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;              //@synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic,__weak) CNContactPickerViewController * contactPickerViewController;                       //@synthesize contactPickerViewController=_contactPickerViewController - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                                          //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) long long countOfFamilyMemberContacts; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (assign,nonatomic,__weak) id<CNUIFamilyMemberContactsControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isViewController:(id)arg1 presentedByContactPicker:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)presentViewController:(id)arg1 ;
-(id)init;
-(id<CNUIFamilyMemberContactsControllerDelegate>)delegate;
-(id<CNUICoreFamilyMemberContactsDataSource>)dataSource;
-(FAFamilyMember *)familyMember;
-(void)pickerDidSelectAddNewContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<CNUIFamilyMemberContactsControllerDelegate>)arg1 ;
-(long long)fetchStatus;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)familyMemberContactItemsDidChange;
-(void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2 ;
-(id<CNUIFamilyMemberContactsPresentation>)familyMemberContactsPresentation;
-(void)performInteraction:(long long)arg1 ;
-(id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2 ;
-(void)performDefaultInteraction;
-(CNContactStore *)familyMemberScopedContactStore;
-(void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg1 ;
-(void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg1 ;
-(void)addContactsOptionsSheetViewControllerDidCancel:(id)arg1 ;
-(long long)countOfFamilyMemberContacts;
-(void)performDisplayContactsInteraction;
-(void)performAddFromMainContactsInteraction;
-(void)performAddContactsInteraction;
-(id)anchorViewForAddContactsInteraction;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)cancelPresentationOfViewController:(id)arg1 ;
-(CNContactPickerViewController *)contactPickerViewController;
-(void)setContactPickerViewController:(CNContactPickerViewController *)arg1 ;
@end

