/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)dataMapperClassForOptions:(unsigned long long)arg1 ;
+(BOOL)enableContactsOutOfProcess;
-(id)legacyTetheredSyncDeviceAnchor;
-(id)legacyTetheredSyncComputerAnchor;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)iOSMapper;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(void)setLegacyTetheredSyncDeviceAnchor:(id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)currentHistoryToken;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(id)currentHistoryAnchor;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)init;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4 ;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1 ;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id<CNContactsLogger>)logger;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setLegacyTetheredSyncComputerAnchor:(id)arg1 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(int)saveSequenceCount;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3 ;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2 ;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithDataMapper:(id)arg1 environment:(id)arg2 ;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(NSObject*<CNDataMapper>)mapper;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 ;
-(BOOL)isValidSaveRequest:(id)arg1 authorizationContext:(id)arg2 error:(id*)arg3 ;
-(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_smartGroupsMatchingPredicate:(id)arg1 ;
-(id)_allCustomProperties;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2 ;
@end

