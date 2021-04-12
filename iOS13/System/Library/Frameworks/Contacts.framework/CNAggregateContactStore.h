/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactStore.h>

@class CNContactStore, NSArray;

@interface CNAggregateContactStore : CNContactStore {

	CNContactStore* _mainStore;
	NSArray* _contactStores;

}

@property (nonatomic,copy) NSArray * contactStores;                            //@synthesize contactStores=_contactStores - In the implementation block
@property (nonatomic,__weak,readonly) CNContactStore * mainStore; 
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(void)setContactStores:(NSArray *)arg1 ;
-(NSArray *)contactStores;
-(BOOL)hasMultipleGroupsOrAccounts;
-(CNContactStore *)mainStore;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(void)_enumerateStoresUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(BOOL)arg4 ;
-(id)_allStoreResultsWithError:(id*)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsSaveRequest:(id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)enumeratorForContactFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(id)initWithContactStores:(id)arg1 ;
-(BOOL)store:(id)arg1 supportsSelector:(SEL)arg2 ;
-(id)mainContactStore;
-(id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)iOSMapper;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
@end

