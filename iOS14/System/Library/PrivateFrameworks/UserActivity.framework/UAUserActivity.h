/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/SFCompanionAdvertiserDelegate.h>

@protocol OS_dispatch_group, UAUserActivityDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSObject, NSMutableSet, NSError, NSDate, NSDictionary, NSData, NSSet, UAUserActivityManager, NSUUID, CSSearchableItemAttributeSet, NSUserActivity;

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

	NSMutableDictionary* _frameworkPayload;
	NSString* _title;
	NSURL* _webpageURL;
	NSURL* _referrerURL;
	NSString* _targetContentIdentifier;
	SFCompanionAdvertiser* _advertiser;
	NSObject*<OS_dispatch_group> _advertiserCompletedGroup;
	SFCompanionAdvertiser* _resumerAdvertiser;
	NSMutableSet* _dirtyPayloadIdentifiers;
	double _lastSaveTime;
	BOOL _saveScheduled;
	BOOL _createsNewUUIDIfSaved;
	NSError* _decodeUserInfoError;
	BOOL _needsSave;
	BOOL _needsSaveValueAtEndOfWillSaveCallback;
	BOOL _dirty;
	BOOL _sendToServerPending;
	BOOL _activityHasBeenSentToServer;
	BOOL _supportsContinuationStreams;
	BOOL _forceImmediateSendToServer;
	BOOL _encodedContainsUnsynchronizedCloudDocument;
	BOOL _encodedFileProviderURL;
	BOOL _userActivityWasCreatedSent;
	BOOL _indexInProcess;
	long long _inWillSaveCallback;
	NSDate* _expirationDate;
	NSString* _contentUserAction;
	NSString* _teamIdentifier;
	unsigned long long _os_state_handler;
	int _forwardToCoreSpotlightIndexerCount;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForReminders;
	BOOL _eligibleForPublicIndexing;
	BOOL _eligibleForPrediction;
	NSString* _persistentIdentifier;
	id<UAUserActivityDelegate> _delegate;
	unsigned _userInfoChangeCount;
	NSDictionary* _savedUserInfo;
	BOOL _invalidated;
	BOOL _userInfoContainsFileURLs;
	BOOL _universalLink;
	BOOL _canCreateStreams;
	NSDate* _madeCurrentDate;
	NSDate* _madeCurrentEndDate;
	double _madeCurrentInterval;
	NSDate* _madeInitiallyCurrentDate;
	NSDate* _sentToIndexerDate;
	NSData* _cachedEncodedUserInfo;
	NSSet* _keywords;
	NSSet* _requiredUserInfoKeys;
	NSDictionary* _userInfo;
	UAUserActivityManager* _manager;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _suggestedActionType;
	NSDictionary* _options;
	NSUUID* _originalUniqueIdentifier;
	NSMutableDictionary* _payloadObjects;
	NSMutableDictionary* _payloadUpdateBlocks;
	NSMutableDictionary* _payloadDataCache;
	NSObject*<OS_dispatch_queue> _willCallSaveSerializationQueue;

}

@property (copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * contentUserAction; 
@property (copy) NSSet * requiredUserInfoKeys; 
@property (copy) NSSet * keywords; 
@property (copy) NSString * contentIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff; 
@property (getter=isEligibleForSearch) BOOL eligibleForSearch; 
@property (getter=isEligibleForReminders) BOOL eligibleForReminders; 
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; 
@property (copy) CSSearchableItemAttributeSet * contentAttributeSet; 
@property (readonly) BOOL forwardToCoreSpotlightIndexer; 
@property (getter=isEligibleForPrediction) BOOL eligibleForPrediction; 
@property (copy) NSString * persistentIdentifier; 
@property (__weak,readonly) UAUserActivityManager * manager;                                          //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSUUID * originalUniqueIdentifier;                                          //@synthesize originalUniqueIdentifier=_originalUniqueIdentifier - In the implementation block
@property (copy) NSSet * keywords;                                                                    //@synthesize keywords=_keywords - In the implementation block
@property (copy) NSSet * requiredUserInfoKeys;                                                        //@synthesize requiredUserInfoKeys=_requiredUserInfoKeys - In the implementation block
@property (assign) BOOL dirty; 
@property (assign) BOOL sendToServerPending;                                                          //@synthesize sendToServerPending=_sendToServerPending - In the implementation block
@property (assign) BOOL createsNewUUIDIfSaved;                                                        //@synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved - In the implementation block
@property (retain) NSError * decodeUserInfoError;                                                     //@synthesize decodeUserInfoError=_decodeUserInfoError - In the implementation block
@property (assign) BOOL encodedContainsUnsynchronizedCloudDocument;                                   //@synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument - In the implementation block
@property (assign) BOOL encodedFileProviderURL;                                                       //@synthesize encodedFileProviderURL=_encodedFileProviderURL - In the implementation block
@property (copy) NSData * cachedEncodedUserInfo;                                                      //@synthesize cachedEncodedUserInfo=_cachedEncodedUserInfo - In the implementation block
@property (readonly) unsigned long long userInfoChangeCount; 
@property (retain) NSMutableDictionary * payloadObjects;                                              //@synthesize payloadObjects=_payloadObjects - In the implementation block
@property (retain) NSMutableDictionary * payloadUpdateBlocks;                                         //@synthesize payloadUpdateBlocks=_payloadUpdateBlocks - In the implementation block
@property (retain) NSMutableDictionary * payloadDataCache;                                            //@synthesize payloadDataCache=_payloadDataCache - In the implementation block
@property (retain) NSMutableSet * dirtyPayloadIdentifiers;                                            //@synthesize dirtyPayloadIdentifiers=_dirtyPayloadIdentifiers - In the implementation block
@property (readonly) unsigned long long os_state_handler;                                             //@synthesize os_state_handler=_os_state_handler - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> willCallSaveSerializationQueue;              //@synthesize willCallSaveSerializationQueue=_willCallSaveSerializationQueue - In the implementation block
@property (assign) BOOL userInfoContainsFileURLs;                                                     //@synthesize userInfoContainsFileURLs=_userInfoContainsFileURLs - In the implementation block
@property (copy) NSString * typeIdentifier;                                                           //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                                                        //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo;                                                             //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSURL * webpageURL; 
@property (copy) NSURL * referrerURL; 
@property (copy) NSString * targetContentIdentifier;                                                  //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (assign) BOOL needsSave; 
@property (assign) BOOL supportsContinuationStreams; 
@property (assign) BOOL forceImmediateSendToServer;                                                   //@synthesize forceImmediateSendToServer=_forceImmediateSendToServer - In the implementation block
@property (__weak) id<UAUserActivityDelegate> delegate; 
@property (copy) NSDate * madeCurrentDate;                                                            //@synthesize madeCurrentDate=_madeCurrentDate - In the implementation block
@property (copy) NSDate * madeCurrentEndDate;                                                         //@synthesize madeCurrentEndDate=_madeCurrentEndDate - In the implementation block
@property (readonly) double madeCurrentInterval;                                                      //@synthesize madeCurrentInterval=_madeCurrentInterval - In the implementation block
@property (copy,readonly) NSDate * madeInitiallyCurrentDate;                                          //@synthesize madeInitiallyCurrentDate=_madeInitiallyCurrentDate - In the implementation block
@property (copy) NSDate * sentToIndexerDate;                                                          //@synthesize sentToIndexerDate=_sentToIndexerDate - In the implementation block
@property (__weak) NSUserActivity * parentUserActivity; 
@property (readonly) BOOL activityHasBeenSentToServer;                                                //@synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer - In the implementation block
@property (getter=isInvalidated,readonly) BOOL invalidated;                                           //@synthesize invalidated=_invalidated - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long suggestedActionType;                                          //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDictionary * options;                                                              //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData; 
@property (assign) BOOL canCreateStreams;                                                             //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (copy) NSString * teamIdentifier;                                                           //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (getter=isUniversalLink) BOOL universalLink;                                                //@synthesize universalLink=_universalLink - In the implementation block
+(void)setIndexPending:(BOOL)arg1 forUUID:(id)arg2 ;
+(id)observers;
+(BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3 ;
+(id)_decodeFromScanner:(id)arg1 ;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(id)_encodeToString:(id)arg1 ;
+(id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2 ;
+(void)deleteAllSavedUserActivitiesWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id*)arg3 ;
+(BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)mainBundleIdentifier;
+(id)currentUserActivityUUID;
+(id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)addUserActivityObserver:(id)arg1 ;
+(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_decodeFromString:(id)arg1 ;
+(id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_decodeFromEntireString:(id)arg1 ;
+(id)allowedWebpageURLSchemes;
+(void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)removeUserActivityObserver:(id)arg1 ;
+(BOOL)isIndexPendingForUUID:(id)arg1 ;
+(BOOL)supportsUserActivityAppLinks;
+(BOOL)userActivityContinuationSupported;
-(id)teamID;
-(BOOL)finishUserInfoUpdate;
-(double)madeCurrentInterval;
-(void)resignCurrent;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)targetContentIdentifier;
-(BOOL)dirty;
-(unsigned long long)suggestedActionType;
-(NSURL *)webpageURL;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(unsigned long long)os_state_handler;
-(void)setCachedEncodedUserInfo:(NSData *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)beginUserInfoUpdate:(id)arg1 ;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSDictionary *)userInfo;
-(BOOL)isInvalidated;
-(NSString *)contentUserAction;
-(void)setPayloadObjects:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableDictionary *)payloadObjects;
-(/*^block*/id)payloadUpdateBlockForIdentifier:(id)arg1 ;
-(id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4 ;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(NSSet *)keywords;
-(NSSet *)keywords;
-(NSMutableSet *)dirtyPayloadIdentifiers;
-(id<UAUserActivityDelegate>)delegate;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(id)initWithUserActivityData:(id)arg1 options:(id)arg2 ;
-(NSString *)typeIdentifier;
-(BOOL)_encodeIntoUserActivityDataWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)createUserActivityDataWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addContentAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)didSynchronizeUserActivity;
-(id)contentType;
-(BOOL)isEligibleForSearch;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(id)encodeUserInfo:(id)arg1 ;
-(NSString *)subtitle;
-(BOOL)isEligibleForPublicIndexing;
-(void)setUserInfoContainsFileURLs:(BOOL)arg1 ;
-(void)updateForwardToCoreSpotlightIndexer:(char)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3 ;
-(NSData *)streamsData;
-(void)setTitle:(NSString *)arg1 ;
-(void)indexActivity:(double)arg1 forceIndexing:(BOOL)arg2 ;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)debugDescription;
-(NSDictionary *)options;
-(BOOL)canCreateStreams;
-(NSString *)dynamicIdentifier;
-(void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2 ;
-(BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(NSString *)contentIdentifier;
-(void)setSendToServerPending:(BOOL)arg1 ;
-(id)userActivityInfoForSelfWithPayload:(BOOL)arg1 ;
-(NSDate *)sentToIndexerDate;
-(void)_setWebpageURL:(id)arg1 throwOnFailure:(BOOL)arg2 ;
-(void)setMadeCurrentDate:(NSDate *)arg1 ;
-(BOOL)sendToServerPending;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)payloadForIdentifier:(id)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setDirtyPayloadIdentifiers:(NSMutableSet *)arg1 ;
-(id)contentAttributes;
-(id)stateString;
-(void)setParentUserActivity:(NSUserActivity *)arg1 ;
-(void)setEligibleForReminders:(BOOL)arg1 ;
-(NSString *)persistentIdentifier;
-(CSSearchableItemAttributeSet *)contentAttributeSet;
-(void)setMadeCurrentEndDate:(NSDate *)arg1 ;
-(NSDate *)madeCurrentDate;
-(void)setDelegate:(id<UAUserActivityDelegate>)arg1 ;
-(BOOL)needsSave;
-(BOOL)activityHasBeenSentToServer;
-(void)setContentAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(NSString *)description;
-(NSData *)cachedEncodedUserInfo;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(NSMutableDictionary *)payloadUpdateBlocks;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(BOOL)forceImmediateSendToServer;
-(NSDate *)expirationDate;
-(void)setForceImmediateSendToServer:(BOOL)arg1 ;
-(void)becomeCurrent;
-(id)objectForIdentifier:(id)arg1 ;
-(BOOL)userInfoContainsFileURLs;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(BOOL)arg1 ;
-(BOOL)encodedFileProviderURL;
-(void)setPayloadUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)displayInDtrace;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setPayloadDataCache:(NSMutableDictionary *)arg1 ;
-(id)userActivityInfoForSelf;
-(void)_resignCurrent;
-(BOOL)isEligibleForPrediction;
-(void)setCanCreateStreams:(BOOL)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)payloadDataCache;
-(BOOL)encodeUserInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UAUserActivityManager *)manager;
-(unsigned long long)hash;
-(void)scheduleSendUserActivityInfoToLSUserActivityd;
-(void)pinUserActivityWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)forwardToCoreSpotlightIndexer;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3 ;
-(id)unarchiveURL:(id)arg1 error:(id*)arg2 ;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(void)removeContentAttribute:(id)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)createUserActivityStringsWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)referrerURL;
-(BOOL)createsNewUUIDIfSaved;
-(void)setEligibleForPrediction:(BOOL)arg1 ;
-(void)invalidate;
-(NSDate *)madeCurrentEndDate;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(void)setSentToIndexerDate:(NSDate *)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)payloadIdentifiers;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setContentAttributes:(id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(NSSet *)requiredUserInfoKeys;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSError *)decodeUserInfoError;
-(NSDate *)madeInitiallyCurrentDate;
-(BOOL)isEligibleForHandoff;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 ;
-(void)sendToCoreSpotlightIndexer;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(BOOL)archiveURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUniversalLink;
-(BOOL)isPayloadDirty:(id)arg1 ;
-(NSUserActivity *)parentUserActivity;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)willCallSaveSerializationQueue;
-(NSObject*<OS_dispatch_queue>)willCallSaveSerializationQueue;
-(id)decodeUserInfo:(id)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(unsigned long long)userInfoChangeCount;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(void)setCreatesNewUUIDIfSaved:(BOOL)arg1 ;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(BOOL)arg4 ;
-(void)addKeywordsFromArray:(id)arg1 ;
-(NSString *)teamIdentifier;
-(void)willSynchronizeUserActivityWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEligibleForReminders;
-(id)copyWithNewUUID:(BOOL)arg1 ;
-(long long)priority;
-(NSUUID *)originalUniqueIdentifier;
-(id)encodeUserInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsContinuationStreams;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(void)setContentUserAction:(NSString *)arg1 ;
-(void)setUniversalLink:(BOOL)arg1 ;
-(void)setUniversalLink:(BOOL)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 identifier:(id)arg2 ;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(BOOL)encodedContainsUnsynchronizedCloudDocument;
-(void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setEncodedFileProviderURL:(BOOL)arg1 ;
-(void)tellDaemonAboutNewLSUserActivity;
@end

