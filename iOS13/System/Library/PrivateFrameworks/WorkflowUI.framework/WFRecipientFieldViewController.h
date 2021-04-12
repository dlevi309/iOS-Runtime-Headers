/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@protocol WFRecipientFieldViewControllerDelegate;
@class CNAutocompleteSearchManager, NSSet, NSString, WFContactPickerCoordinator, CNAutocompleteResultsTableViewController, NSLayoutConstraint, CNComposeRecipientTextView, CNAutocompleteFetchContext, CNContactStore, NSMutableArray, NSNumber, NSArray;

@interface WFRecipientFieldViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer> {

	CNAutocompleteSearchManager* _searchManager;
	NSSet* _supportedPersonProperties;
	NSString* _fieldLabel;
	id<WFRecipientFieldViewControllerDelegate> _delegate;
	WFContactPickerCoordinator* _contactPickerCoordinator;
	CNAutocompleteResultsTableViewController* _autocompleteResultsController;
	NSLayoutConstraint* _composeHeaderHeightConstraint;
	CNComposeRecipientTextView* _composeTextView;
	CNAutocompleteFetchContext* _fetchContext;
	CNContactStore* _contactStore;
	NSMutableArray* _searchResults;
	NSNumber* _lastSearchID;

}

@property (nonatomic,retain) WFContactPickerCoordinator * contactPickerCoordinator;                                   //@synthesize contactPickerCoordinator=_contactPickerCoordinator - In the implementation block
@property (nonatomic,readonly) CNAutocompleteResultsTableViewController * autocompleteResultsController;              //@synthesize autocompleteResultsController=_autocompleteResultsController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * composeHeaderHeightConstraint;                                      //@synthesize composeHeaderHeightConstraint=_composeHeaderHeightConstraint - In the implementation block
@property (nonatomic,retain) CNComposeRecipientTextView * composeTextView;                                            //@synthesize composeTextView=_composeTextView - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchContext * fetchContext;                                             //@synthesize fetchContext=_fetchContext - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                                         //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNAutocompleteSearchManager * searchManager;                                           //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResults;                                                          //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,retain) NSNumber * lastSearchID;                                                                 //@synthesize lastSearchID=_lastSearchID - In the implementation block
@property (nonatomic,copy) NSSet * supportedPersonProperties;                                                         //@synthesize supportedPersonProperties=_supportedPersonProperties - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                                                                     //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,copy) NSArray * entries; 
@property (assign,nonatomic,__weak) id<WFRecipientFieldViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<WFRecipientFieldViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRecipientFieldViewControllerDelegate>)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(CNContactStore *)contactStore;
-(void)loadView;
-(void)viewDidLoad;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(void)done:(id)arg1 ;
-(void)setFieldLabel:(NSString *)arg1 ;
-(CNAutocompleteFetchContext *)fetchContext;
-(void)setSearchResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchResults;
-(void)cancel:(id)arg1 ;
-(NSString *)fieldLabel;
-(void)commitRemainingText;
-(void)_updateFetchContextChosenAddresses;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg1 ;
-(CNAutocompleteSearchManager *)searchManager;
-(NSSet *)supportedPersonProperties;
-(void)setSupportedPersonProperties:(NSSet *)arg1 ;
-(void)_presentContactViewControllerForRecipient:(id)arg1 ;
-(CNComposeRecipientTextView *)composeTextView;
-(void)_addSearchResults:(id)arg1 forTask:(id)arg2 ;
-(void)_startSearch:(id)arg1 ;
-(void)_finishedSearching;
-(BOOL)hasActiveSearch;
-(void)_cancelActiveSearchClearingText:(BOOL)arg1 ;
-(void)_resetSearchResults;
-(WFContactPickerCoordinator *)contactPickerCoordinator;
-(void)setContactPickerCoordinator:(WFContactPickerCoordinator *)arg1 ;
-(CNAutocompleteResultsTableViewController *)autocompleteResultsController;
-(NSLayoutConstraint *)composeHeaderHeightConstraint;
-(void)setComposeHeaderHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setComposeTextView:(CNComposeRecipientTextView *)arg1 ;
-(NSNumber *)lastSearchID;
-(void)setLastSearchID:(NSNumber *)arg1 ;
@end

