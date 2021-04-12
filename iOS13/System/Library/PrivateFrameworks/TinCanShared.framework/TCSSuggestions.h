/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/TCSContactsObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NPSManager, CNCoalescingTimer, NSTimer, IDSBatchIDQueryController, NSMutableDictionary, CNContactStore, TCSContacts, NSUserDefaults, NSArray, NSString;

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {

	int _firstUnlockToken;
	int _npsInitialSyncToken;
	NSObject*<OS_dispatch_queue> _generationQueue;
	NSObject*<OS_dispatch_queue> _coreRecentsQueue;
	NSHashTable* _observers;
	NPSManager* _npsManager;
	CNCoalescingTimer* _suggestionsSaveTimer;
	NSTimer* _suggestionGenerationTimer;
	IDSBatchIDQueryController* _queryController;
	NSMutableDictionary* _suggestedDestinationToStatus;
	BOOL _generationTimerEnabled;
	BOOL _shouldObserveSuggestionsDefaultChanges;
	CNContactStore* _contactStore;
	TCSContacts* _contacts;
	NSUserDefaults* _defaults;
	NSMutableDictionary* _suggestions;
	NSArray* _suggestedDestinations;

}

@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) TCSContacts * contacts;                                   //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveSuggestionsDefaultChanges;              //@synthesize shouldObserveSuggestionsDefaultChanges=_shouldObserveSuggestionsDefaultChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suggestions;                        //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * suggestedDestinations;                          //@synthesize suggestedDestinations=_suggestedDestinations - In the implementation block
@property (assign,nonatomic) BOOL generationTimerEnabled;                              //@synthesize generationTimerEnabled=_generationTimerEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptorForRequiredKeys;
-(void)dealloc;
-(void)_invalidate;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSMutableDictionary *)suggestions;
-(void)setSuggestions:(NSMutableDictionary *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(TCSContacts *)contacts;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)setContacts:(TCSContacts *)arg1 ;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_saveSuggestions;
-(void)setShouldObserveSuggestionsDefaultChanges:(BOOL)arg1 ;
-(void)_handleDeviceFirstUnlock;
-(BOOL)_shouldGenerateNewSuggestions;
-(void)_generateNewSuggestions;
-(id)_performHousekeepingOnSuggestions:(id)arg1 ;
-(void)generateNewSuggestionsIfNecessary;
-(void)_stopGenerationTimer;
-(void)_addSuggestedDestination:(id)arg1 withTimestamp:(id)arg2 ;
-(void)_notifyObserversSuggestionsChanged;
-(void)_startGenerationTimerWithFireDate:(id)arg1 ;
-(id)_destinationsFromFavorites;
-(id)_destinationsFromCallHistory;
-(id)_destinationsFromCoreRecents;
-(void)_updateGenerationTimestamps;
-(void)_performIDQueryForSuggestions:(id)arg1 ;
-(void)_syncSuggestions;
-(void)destinationsDidChange:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contacts:(id)arg2 ;
-(NSArray *)suggestedDestinations;
-(void)setGenerationTimerEnabled:(BOOL)arg1 ;
-(void)_deleteSuggestions;
-(BOOL)generationTimerEnabled;
-(BOOL)shouldObserveSuggestionsDefaultChanges;
-(void)setSuggestedDestinations:(NSArray *)arg1 ;
@end

