/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class NSString;


@protocol CNDataMapper <NSObject>
@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
@optional
-(NSString *)legacyTetheredSyncDeviceAnchor;
-(NSString *)legacyTetheredSyncComputerAnchor;
-(id)matchingDictionaryForContact:(id)arg1;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1;
-(void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
-(id)currentHistoryToken;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2;
-(id)userActivityUserInfoForContact:(id)arg1;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
-(id)unifiedContactCountWithError:(id*)arg1;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
-(id)currentHistoryAnchor;
-(id)identifierWithError:(id*)arg1;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4;
-(id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id*)arg2;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
-(BOOL)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)hasMultipleGroupsOrAccounts;
-(void)setNotificationSource:(id)arg1;
-(void)setLegacyTetheredSyncComputerAnchor:(id)arg1;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 contactStore:(id)arg2;
-(id)_smartGroupsMatchingPredicate:(id)arg1 contactStore:(id)arg2;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(int)saveSequenceCount;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2;
-(id)_allCustomProperties;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2;

@required
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)meContactIdentifiers:(id*)arg1;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)contactObservableForFetchRequest:(id)arg1;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;

@end

