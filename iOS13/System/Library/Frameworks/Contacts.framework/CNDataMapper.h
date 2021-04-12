/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class NSString;


@protocol CNDataMapper <NSObject>
@property (nonatomic,retain) NSString * legacyTetheredSyncDeviceAnchor; 
@property (nonatomic,retain) NSString * legacyTetheredSyncComputerAnchor; 
@optional
-(id)currentHistoryToken;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
-(id)unifiedContactCountWithError:(id*)arg1;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
-(id)userActivityUserInfoForContact:(id)arg1;
-(id)identifierWithError:(id*)arg1;
-(int)saveSequenceCount;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4;
-(void)setNotificationSource:(id)arg1;
-(id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)matchingDictionaryForContact:(id)arg1;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
-(id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id*)arg2;
-(BOOL)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2;
-(id)_allCustomProperties;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 contactStore:(id)arg2;
-(id)_smartGroupsMatchingPredicate:(id)arg1 contactStore:(id)arg2;
-(NSString *)legacyTetheredSyncDeviceAnchor;
-(void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
-(NSString *)legacyTetheredSyncComputerAnchor;
-(void)setLegacyTetheredSyncComputerAnchor:(id)arg1;

@required
-(id)meContactIdentifiers:(id*)arg1;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
-(id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
-(id)contactObservableForFetchRequest:(id)arg1;

@end

