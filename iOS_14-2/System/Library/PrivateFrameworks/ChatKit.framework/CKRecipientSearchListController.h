/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ContactsAutocompleteUI/CNAutocompleteResultsTableViewController.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class NSArray, IMAccount, IDSBatchIDQueryController, CKContactsSearchManager, NSDate, NSString;

@interface CKRecipientSearchListController : CNAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate> {

	BOOL shouldHideGroupsDonations;
	BOOL _smsEnabled;
	NSArray* _enteredRecipients;
	NSArray* _prefilteredRecipients;
	IMAccount* _defaultiMessageAccount;
	IDSBatchIDQueryController* _statusQueryController;
	NSArray* _searchResults;
	CKContactsSearchManager* _searchManager;
	NSDate* _idsQueryStartTime;
	NSArray* _conversationCache;

}

@property (nonatomic,retain) CKContactsSearchManager * searchManager;                                  //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSDate * idsQueryStartTime;                                               //@synthesize idsQueryStartTime=_idsQueryStartTime - In the implementation block
@property (nonatomic,copy) NSArray * conversationCache;                                                //@synthesize conversationCache=_conversationCache - In the implementation block
@property (assign,nonatomic,__weak) id<CKRecipientSearchListControllerDelegate> delegate; 
@property (nonatomic,retain) NSArray * enteredRecipients;                                              //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (nonatomic,retain) NSArray * prefilteredRecipients;                                          //@synthesize prefilteredRecipients=_prefilteredRecipients - In the implementation block
@property (assign,nonatomic) BOOL smsEnabled;                                                          //@synthesize smsEnabled=_smsEnabled - In the implementation block
@property (assign,nonatomic) BOOL suppressGroupSuggestions; 
@property (nonatomic,retain) IMAccount * defaultiMessageAccount;                                       //@synthesize defaultiMessageAccount=_defaultiMessageAccount - In the implementation block
@property (nonatomic,retain) IDSBatchIDQueryController * statusQueryController;                        //@synthesize statusQueryController=_statusQueryController - In the implementation block
@property (nonatomic,copy) NSArray * searchResults;                                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldHideGroupsDonations; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)smsEnabled;
-(void)cancelSearch;
-(void)removeRecipient:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(id)_conversationList;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppearDeferredSetup;
-(CKContactsSearchManager *)searchManager;
-(NSArray *)conversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(void)setDefaultiMessageAccount:(IMAccount *)arg1 ;
-(BOOL)isSearchResultsHidden;
-(id)_statusQueryController;
-(void)setIdsQueryStartTime:(NSDate *)arg1 ;
-(void)setConversationCache:(NSArray *)arg1 ;
-(NSArray *)enteredRecipients;
-(NSArray *)prefilteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)setSearchManager:(CKContactsSearchManager *)arg1 ;
-(BOOL)suppressGroupSuggestions;
-(IMAccount *)defaultiMessageAccount;
-(void)setSuppressGroupSuggestions:(BOOL)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setShouldHideGroupsDonations:(BOOL)arg1 ;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(id)conversationCacheForContactsSearchManager:(id)arg1 ;
-(BOOL)shouldHideGroupsDonations;
-(BOOL)hasSearchResults;
-(void)invalidateOutstandingIDStatusRequests;
-(void)invalidateSearchManager;
-(char)_serviceColorForRecipients:(id)arg1 ;
-(long long)idsStatusForAddress:(id)arg1 ;
-(void)setPrefilteredRecipients:(NSArray *)arg1 ;
-(void)setSmsEnabled:(BOOL)arg1 ;
-(IDSBatchIDQueryController *)statusQueryController;
-(void)setStatusQueryController:(IDSBatchIDQueryController *)arg1 ;
-(NSDate *)idsQueryStartTime;
-(void)loadView;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)dealloc;
@end

