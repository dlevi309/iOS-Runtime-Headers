/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSUbiquitousKeyValueStore, NSOrderedSet;

@interface IMPinnedConversationsController : NSObject {

	BOOL _hasCompletedInitialization;
	BOOL _hasDefferedPinnedConversationsDidChangeNotification;
	NSUbiquitousKeyValueStore* _dataStore;
	NSOrderedSet* _pinnedConversationIdentifierSet;
	long long _numberOfPendingForceSyncs;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * dataStore;                               //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSOrderedSet * pinnedConversationIdentifierSet;                        //@synthesize pinnedConversationIdentifierSet=_pinnedConversationIdentifierSet - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedInitialization;                                       //@synthesize hasCompletedInitialization=_hasCompletedInitialization - In the implementation block
@property (assign,nonatomic) BOOL hasDefferedPinnedConversationsDidChangeNotification;              //@synthesize hasDefferedPinnedConversationsDidChangeNotification=_hasDefferedPinnedConversationsDidChangeNotification - In the implementation block
@property (assign,nonatomic) long long numberOfPendingForceSyncs;                                   //@synthesize numberOfPendingForceSyncs=_numberOfPendingForceSyncs - In the implementation block
+(unsigned long long)maximumNumberOfPinnedConversations;
+(id)sharedInstance;
+(id)requiredKeys;
+(long long)currentPinConfigurationVersion;
+(id)_forceSyncDispatchQueue;
+(id)_ubiquitousDispatchQueue;
-(NSUbiquitousKeyValueStore *)dataStore;
-(id)init;
-(id)pinnedConversationIdentifiers;
-(void)conversationsWereDeletedWithIdentifiers:(id)arg1 ;
-(void)setPinnedConversationIdentifiers:(id)arg1 withUpdateReason:(id)arg2 ;
-(void)fetchPinnedConversationIdentifiersFromLocalStore;
-(BOOL)shouldSync;
-(void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
-(void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1 ;
-(void)imCloudKitHooksSetEnabledDidReturn:(id)arg1 ;
-(void)performOneTimeFetchIfNecessary;
-(void)synchronizeLocalDataStore;
-(id)_ubiquitousPinConfigurationInStore:(id)arg1 ;
-(id)_locallyStoredPinConfiguration;
-(id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)arg1 toOtherPinConfiguration:(id)arg2 ;
-(id)pinnedConversationIdentifiersFromPinConfiguration:(id)arg1 ;
-(void)setPinnedConversationIdentifiers:(id)arg1 withUpdateReason:(id)arg2 shouldUpdateStores:(BOOL)arg3 ;
-(void)_updateLocalStoreWithPinConfiguration:(id)arg1 ;
-(id)_dictionaryWithPinnedConversationIdentifiers:(id)arg1 updateReason:(id)arg2 timestamp:(id)arg3 ;
-(NSOrderedSet *)pinnedConversationIdentifierSet;
-(BOOL)pinnedConversationsContainsPinningIdentifier:(id)arg1 ;
-(id)dictionaryWithPinnedConversationIdentifiers:(id)arg1 updateReason:(id)arg2 ;
-(void)updateStoresWithPinConfiguration:(id)arg1 ;
-(void)_postPinnedConversationsDidChangeNotification;
-(BOOL)pinConfigurationIsValid:(id)arg1 ;
-(BOOL)pinConfigurationHasCurrentVersion:(id)arg1 ;
-(void)fetchMostUpToDatePinConfiguration:(/*^block*/id)arg1 ;
-(long long)numberOfPendingForceSyncs;
-(void)setNumberOfPendingForceSyncs:(long long)arg1 ;
-(void)_updateUbiquitousStoreWithPinConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldWriteProposedPinConfiguration:(id)arg1 toUbiquitousStoreWithExistingPinConfiguration:(id)arg2 ;
-(BOOL)shouldUpdateExistingPinConfig:(id)arg1 withProposedPinConfig:(id)arg2 ;
-(void)forceSynchronizeUbiquitousStore;
-(void)_fetchUbiquitousPinConfiguration:(/*^block*/id)arg1 ;
-(id)pinConfigurationWithCurrentVersionForPinConfiguration:(id)arg1 ;
-(BOOL)pinConfigurationHasCompatibleVersion:(id)arg1 ;
-(void)_updatePinningIdentifiersUsingOldToNewPinningIdentifierMapIfNecessary:(id)arg1 ;
-(BOOL)pinnedConversationsContainsChat:(id)arg1 ;
-(void)conversationWasDeletedWithIdentifier:(id)arg1 ;
-(void)setPinnedConversationIdentifierSet:(NSOrderedSet *)arg1 ;
-(BOOL)hasCompletedInitialization;
-(void)setHasCompletedInitialization:(BOOL)arg1 ;
-(BOOL)hasDefferedPinnedConversationsDidChangeNotification;
-(void)setHasDefferedPinnedConversationsDidChangeNotification:(BOOL)arg1 ;
@end

