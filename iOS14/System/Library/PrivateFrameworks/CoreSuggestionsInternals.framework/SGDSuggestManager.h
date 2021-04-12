/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGDSuggestManagerAllProtocol.h>

@class SGSqlEntityStore, NSXPCConnection, SGSuggestHistory, _PASNotificationToken, NSOperationQueue, SGDManagerForCTS, SGEKEventStoreProvider, CNContactStore, NSDictionary, NSLock, SGXpcTransaction, SGSearchableItemIdTriple, SGFuture, PETEventTracker2, _PASLock, NSMutableDictionary, SGServiceContext, NSString;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol> {

	SGSqlEntityStore* _harvestStore;
	NSXPCConnection* _connection;
	SGSuggestHistory* _history;
	_PASNotificationToken* _assetUpdateToken;
	NSOperationQueue* _messageHarvestQueue;
	SGDManagerForCTS* _ctsManager;
	SGEKEventStoreProvider* _ekStoreProvider;
	CNContactStore* _contactStore;
	NSDictionary* _bundleIdToPET;
	NSLock* _dirtyLock;
	SGXpcTransaction* _dirtyTransaction;
	SGSearchableItemIdTriple* _lastSuggestionsFromMessageRequest;
	SGFuture* _lastSuggestionsFromMessageResponse;
	NSLock* _lastSuggestionsFromMessageLock;
	int _settingsChangeToken;
	PETEventTracker2* _pet2Tracker;
	_PASLock* _recentlyHarvestedDetailLock;
	BOOL _keepRealtimeAsLost;
	NSMutableDictionary* _bufferedInteractionsForBundle;
	SGServiceContext* _context;
	NSString* _clientName;

}

@property (nonatomic,readonly) SGServiceContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                   //@synthesize clientName=_clientName - In the implementation block
+(void)initialize;
+(id)fetchChangeHistory;
+(void)clearChangeHistory:(id)arg1 ;
+(void)clearRequestCache;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)daemonExitWithCompletion:(/*^block*/id)arg1 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareForRealtimeExtraction:(/*^block*/id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)allDeliveriesWithLimit:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)resetConfirmationAndRejectionHistory:(/*^block*/id)arg1 ;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)allContactsWithSnippets:(BOOL)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1 ;
-(BOOL)_clientIsMessages;
-(void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)keepDirty:(BOOL)arg1 ;
-(void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)_rejectReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)evaluateRecipe:(id)arg1 attachments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)reminderTitleForContent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteCloudKitZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)drainQueueCompletelyWithCompletion:(/*^block*/id)arg1 ;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ipsosMessagesWithSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)planReceivedFromServerWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recentURLsWithLimit:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sleepWithCompletion:(/*^block*/id)arg1 ;
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 onlySignificant:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)namesForDetailCacheSnapshotsWithCompletion:(/*^block*/id)arg1 ;
-(id)_showInFormatStringWithLocalization:(id)arg1 ;
-(void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(/*^block*/id)arg3 rejectionUI:(int)arg4 ;
-(void)reminderAlarmTriggeredForRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logUnknownContactInformationShownCount:(unsigned long long)arg1 notShownCount:(unsigned long long)arg2 bundleId:(id)arg3 ;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)clientName;
-(void)confirmEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)bumptTTLForNLEvent:(id)arg1 ;
-(void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(/*^block*/id)arg3 confirmRejectUI:(int)arg4 ;
-(BOOL)_clientIsMail;
-(void)rejectEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(id)storageContactFromRecordId:(id)arg1 ;
-(void)originFromRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 ignoreUserActivitySupport:(BOOL)arg4 ignoreMailCheck:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithConnection:(id)arg1 store:(id)arg2 ;
-(void)isEventCandidateForURL:(id)arg1 title:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SGMContactDetailUsedApp_)_appEnumForBundleId:(id)arg1 ;
-(void)enqueueSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SGServiceContext *)context;
-(void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)filterRealtimeEvents:(id)arg1 ;
-(void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4 ;
-(void)_confirmReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)schemaOrgToEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(/*^block*/id)arg7 ;
-(void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)confirmReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_pmlTraining;
-(void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(/*^block*/id)arg3 withParentConfirmation:(BOOL)arg4 confirmRejectUI:(int)arg5 ;
-(void)geocodeEnrichmentsInPipelineEntity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)rejectRecord:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionDelivery:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 fullCompletionHandler:(/*^block*/id)arg5 ;
-(void)rejectEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createLaunchIntentForStorageEvent:(id)arg1 ;
-(void)rejectReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_dissectMessage:(id)arg1 store:(id)arg2 context:(id)arg3 ;
-(id)_mapToPseudoEvents:(id)arg1 ;
-(void)_suggestionsFromMessageWithIdentifier:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionDelivery:(unsigned long long)arg4 providedBy:(/*^block*/id)arg5 dissectIfNecessary:(BOOL)arg6 ;
-(void)registerForCoreSpotlightIndexing;
-(void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)noopWithCompletion:(/*^block*/id)arg1 ;
-(void)clearContactAggregatorConversation:(id)arg1 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(BOOL)arg4 ;
-(void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_canBannerUseStoredDissection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)entityFromUniqueKey:(id)arg1 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)filterPastEvents:(id)arg1 ;
-(void)rejectRealtimeReminder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2 ;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3 ;
-(void)rejectContactDetailRecord:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processInteractions:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithStore:(id)arg1 ctsManager:(id)arg2 ekStoreProvider:(id)arg3 contactStore:(id)arg4 pet2Tracker:(id)arg5 ;
-(void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 fullCompletionHandler:(/*^block*/id)arg3 ;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 message:(id)arg2 enrichments:(id)arg3 store:(id)arg4 ;
-(void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 completionDelivery:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)eventFromUniqueId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)containsNonCuratedData:(id)arg1 ;
-(void)confirmRealtimeReminder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessagesConnection:(id)arg1 store:(id)arg2 ;
-(void)confirmRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned short)interfaceForRealtimeReminder:(id)arg1 ;
-(void)setupManagerWithConnection:(id)arg1 store:(id)arg2 ctsManager:(id)arg3 ekStoreProvider:(id)arg4 contactStore:(id)arg5 pet2Tracker:(id)arg6 ;
-(void)logEventInteractionForRealtimeEvent:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)sendRTCLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)confirmContactDetailRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSGEntity:(id)arg1 duplicateOfEKEvent:(id)arg2 withStore:(id)arg3 ;
-(id)cachedResultForKey:(id)arg1 generateResult:(/*^block*/id)arg2 validateResults:(/*^block*/id)arg3 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)getPet2Tracker;
-(void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_maybeFormatString;
-(void)clearContactAggregator;
-(void)rejectContact:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)powerStateWithCompletion:(/*^block*/id)arg1 ;
-(void)confirmContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSearchableItemPartOfReimport:(id)arg1 ;
-(void)confirmEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isSearchableItemPartOfReimportWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_setupHistoryObserver:(id)arg1 ;
-(id)filterRealtimeReminders:(id)arg1 ;
@end
