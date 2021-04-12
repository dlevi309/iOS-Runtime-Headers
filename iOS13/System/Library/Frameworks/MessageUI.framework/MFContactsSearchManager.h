/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSMutableDictionary, CNAutocompleteStore, NSOperationQueue, NSArray, NSMutableArray, NSString;

@interface MFContactsSearchManager : NSObject {

	NSMutableDictionary* _taskContextsByTaskID;
	CNAutocompleteStore* _autocompleteStore;
	NSOperationQueue* _queue;
	unsigned _genNumber;
	unsigned long long _searchTypes;
	NSArray* _explicitSearchAccountIDs;
	NSArray* _searchAccounts;
	int _contactSearchAccountChangedToken;
	BOOL _registeredForAddressBookChanges;
	NSMutableArray* _corecipientSearchTaskIDs;
	NSString* _sendingAddress;
	BOOL _includeUpcomingEventMembers;
	BOOL _simulatedResultsEnabled;
	NSString* _recentsBundleIdentifier;
	unsigned long long _implicitGroupCreationThreshold;
	unsigned long long _autocompleteSearchType;
	NSString* _sendingAccountIdentifier;

}

@property (nonatomic,readonly) NSArray * searchAccounts;                                                 //@synthesize searchAccounts=_searchAccounts - In the implementation block
@property (retain) NSArray * searchAccountIDs;                                                           //@synthesize explicitSearchAccountIDs=_explicitSearchAccountIDs - In the implementation block
@property (nonatomic,copy) NSString * recentsBundleIdentifier;                                           //@synthesize recentsBundleIdentifier=_recentsBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long implicitGroupCreationThreshold;                          //@synthesize implicitGroupCreationThreshold=_implicitGroupCreationThreshold - In the implementation block
@property (assign,nonatomic) BOOL includeUpcomingEventMembers;                                           //@synthesize includeUpcomingEventMembers=_includeUpcomingEventMembers - In the implementation block
@property (assign,nonatomic) unsigned long long autocompleteSearchType;                                  //@synthesize autocompleteSearchType=_autocompleteSearchType - In the implementation block
@property (nonatomic,copy) NSString * sendingAccountIdentifier;                                          //@synthesize sendingAccountIdentifier=_sendingAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                                                    //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (assign,getter=isSimulatedResultsEnabled,nonatomic) BOOL simulatedResultsEnabled;              //@synthesize simulatedResultsEnabled=_simulatedResultsEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setSendingAddress:(NSString *)arg1 ;
-(void)cancelTaskWithID:(id)arg1 ;
-(id)initWithAutocompleteSearchType:(unsigned long long)arg1 ;
-(void)setSearchTypes:(unsigned long long)arg1 ;
-(void)setSearchAccountIDs:(NSArray *)arg1 ;
-(id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3 ;
-(id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSString *)sendingAddress;
-(void)setImplicitGroupCreationThreshold:(unsigned long long)arg1 ;
-(void)removeRecipientResult:(id)arg1 ;
-(void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3 ;
-(void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2 ;
-(unsigned long long)autocompleteSearchType;
-(NSString *)sendingAccountIdentifier;
-(id)initWithAutocompleteStore:(id)arg1 searchType:(unsigned long long)arg2 ;
-(id)_nextTaskID;
-(BOOL)isSimulatedResultsEnabled;
-(void)_handleTaskFinished:(id)arg1 context:(id)arg2 ;
-(id)searchForText:(id)arg1 consumer:(id)arg2 ;
-(NSString *)recentsBundleIdentifier;
-(void)setRecentsBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)searchAccountIDs;
-(unsigned long long)implicitGroupCreationThreshold;
-(BOOL)includeUpcomingEventMembers;
-(void)setIncludeUpcomingEventMembers:(BOOL)arg1 ;
-(void)setAutocompleteSearchType:(unsigned long long)arg1 ;
-(void)setSendingAccountIdentifier:(NSString *)arg1 ;
-(void)setSimulatedResultsEnabled:(BOOL)arg1 ;
-(NSArray *)searchAccounts;
@end

