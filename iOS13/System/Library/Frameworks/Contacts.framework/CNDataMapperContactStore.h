/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNContactStore.h>

@protocol CNDataMapper, CNContactsLogger, CNRegulatoryLogger;
@interface CNDataMapperContactStore : CNContactStore {

	id<CNDataMapper> _mapper;
	id<CNContactsLogger> _logger;
	id<CNRegulatoryLogger> _regulatoryLogger;

}

@property (nonatomic,readonly) id<CNContactsLogger> logger;                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger;              //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<CNDataMapper> mapper;                //@synthesize mapper=_mapper - In the implementation block
+(BOOL)enableContactsOutOfProcess;
+(Class)dataMapperClassForOptions:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id<CNContactsLogger>)logger;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)currentHistoryToken;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
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
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)identifierWithError:(id*)arg1 ;
-(int)saveSequenceCount;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_allCustomProperties;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2 ;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1 ;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3 ;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2 ;
-(id)legacyTetheredSyncDeviceAnchor;
-(void)setLegacyTetheredSyncDeviceAnchor:(id)arg1 ;
-(id)legacyTetheredSyncComputerAnchor;
-(void)setLegacyTetheredSyncComputerAnchor:(id)arg1 ;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3 ;
-(id)initWithDataMapper:(id)arg1 environment:(id)arg2 ;
-(NSObject*<CNDataMapper>)mapper;
-(id)initWithEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3 ;
-(BOOL)isValidSaveRequest:(id)arg1 authorizationContext:(id)arg2 error:(id*)arg3 ;
-(id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 ;
-(id)_smartGroupsMatchingPredicate:(id)arg1 ;
-(id)iOSMapper;
@end

