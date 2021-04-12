/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/HFContactControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol HUAddPeopleViewControllerDelegate;
@class HMHome, MFComposeRecipientTextView, UIView, UITableView, NSLayoutConstraint, NSArray, UIActivityIndicatorView, UIColor, HFContactController, MFContactsSearchManager, NSNumber, NSMutableArray, NSString, NSTimer, IDSBatchIDQueryController;

@interface HUAddPeopleViewController : UIViewController <MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, IDSBatchIDQueryControllerDelegate, HFContactControllerDelegate, CNContactPickerDelegate> {

	BOOL _addressBookAccessDenied;
	BOOL _showingAutoCompleteResults;
	id<HUAddPeopleViewControllerDelegate> _delegate;
	HMHome* _home;
	unsigned long long _state;
	MFComposeRecipientTextView* _composeView;
	UIView* _separatorView;
	UITableView* _tableView;
	NSLayoutConstraint* _composeViewBottomConstraint;
	NSArray* _constraints;
	UIActivityIndicatorView* _spinner;
	UIColor* _effectiveTintColor;
	HFContactController* _contactsController;
	MFContactsSearchManager* _searchManager;
	NSNumber* _lastSearchID;
	NSArray* _autoCompleteResults;
	NSMutableArray* _additionalAutoCompleteResults;
	NSArray* _familyMembers;
	NSString* _unatomizedAddress;
	NSTimer* _statusQueryDebounceTimer;
	IDSBatchIDQueryController* _statusQueryController;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) MFComposeRecipientTextView * composeView;                           //@synthesize composeView=_composeView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                             //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * composeViewBottomConstraint;                   //@synthesize composeViewBottomConstraint=_composeViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                  //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIColor * effectiveTintColor;                                       //@synthesize effectiveTintColor=_effectiveTintColor - In the implementation block
@property (assign,nonatomic) BOOL addressBookAccessDenied;                                       //@synthesize addressBookAccessDenied=_addressBookAccessDenied - In the implementation block
@property (nonatomic,retain) HFContactController * contactsController;                           //@synthesize contactsController=_contactsController - In the implementation block
@property (nonatomic,retain) MFContactsSearchManager * searchManager;                            //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSNumber * lastSearchID;                                            //@synthesize lastSearchID=_lastSearchID - In the implementation block
@property (assign,nonatomic) BOOL showingAutoCompleteResults;                                    //@synthesize showingAutoCompleteResults=_showingAutoCompleteResults - In the implementation block
@property (nonatomic,retain) NSArray * autoCompleteResults;                                      //@synthesize autoCompleteResults=_autoCompleteResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalAutoCompleteResults;                     //@synthesize additionalAutoCompleteResults=_additionalAutoCompleteResults - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                                            //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSString * unatomizedAddress;                                       //@synthesize unatomizedAddress=_unatomizedAddress - In the implementation block
@property (nonatomic,retain) NSTimer * statusQueryDebounceTimer;                                 //@synthesize statusQueryDebounceTimer=_statusQueryDebounceTimer - In the implementation block
@property (nonatomic,retain) IDSBatchIDQueryController * statusQueryController;                  //@synthesize statusQueryController=_statusQueryController - In the implementation block
@property (assign,nonatomic,__weak) id<HUAddPeopleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(UIView *)separatorView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<HUAddPeopleViewControllerDelegate>)delegate;
-(UIActivityIndicatorView *)spinner;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<HUAddPeopleViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(MFContactsSearchManager *)searchManager;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSearchManager:(MFContactsSearchManager *)arg1 ;
-(IDSBatchIDQueryController *)statusQueryController;
-(void)setStatusQueryController:(IDSBatchIDQueryController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(unsigned long long)state;
-(UIColor *)effectiveTintColor;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)familyMembers;
-(void)cancelButtonPressed:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(HMHome *)home;
-(id)requiredKeyDescriptors;
-(BOOL)showingAutoCompleteResults;
-(void)setComposeView:(MFComposeRecipientTextView *)arg1 ;
-(MFComposeRecipientTextView *)composeView;
-(void)sendButtonPressed:(id)arg1 ;
-(void)updateStateDependentUI;
-(void)setEffectiveTintColor:(UIColor *)arg1 ;
-(NSTimer *)statusQueryDebounceTimer;
-(void)scheduleDelayedLookupVisibleRecipients;
-(void)setComposeViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)composeViewBottomConstraint;
-(void)setUnatomizedAddress:(NSString *)arg1 ;
-(void)sendInvites;
-(BOOL)addressBookAccessDenied;
-(void)setAddressBookAccessDenied:(BOOL)arg1 ;
-(NSArray *)autoCompleteResults;
-(id)tintColorForRecipient:(id)arg1 ;
-(HFContactController *)contactsController;
-(id)IDSDestinationForRecipient:(id)arg1 ;
-(void)setAdditionalAutoCompleteResults:(NSMutableArray *)arg1 ;
-(NSNumber *)lastSearchID;
-(void)setLastSearchID:(NSNumber *)arg1 ;
-(void)setShowingAutoCompleteResults:(BOOL)arg1 ;
-(void)lookupVisibleRecipients;
-(id)composeRecipientForAddress:(id)arg1 ;
-(NSMutableArray *)additionalAutoCompleteResults;
-(void)setAutoCompleteResults:(NSArray *)arg1 ;
-(void)setStatusQueryDebounceTimer:(NSTimer *)arg1 ;
-(void)lookupIDSDestinations:(id)arg1 ;
-(id)recipientsWithStatusPassingTest:(/*^block*/id)arg1 ;
-(NSString *)unatomizedAddress;
-(void)setContactsController:(HFContactController *)arg1 ;
@end

