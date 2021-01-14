/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)iOSMapper;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)currentHistoryToken;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)currentHistoryAnchor;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)initWithContactStores:(id)arg1 ;
-(void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(BOOL)arg4 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_allStoreResultsWithError:(id*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_enumerateStoresUsingBlock:(/*^block*/id)arg1 ;
-(id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(BOOL)store:(id)arg1 supportsSelector:(SEL)arg2 ;
-(BOOL)supportsSaveRequest:(id)arg1 ;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)enumeratorForContactFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setContactStores:(NSArray *)arg1 ;
-(CNContactStore *)mainStore;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(NSArray *)contactStores;
-(id)mainContactStore;
@end

