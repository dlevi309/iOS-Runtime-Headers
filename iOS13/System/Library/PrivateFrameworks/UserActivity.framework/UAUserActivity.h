/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _canCreateStreams;
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
@property (__weak) NSUserActivity * parentUserActivity; 
@property (readonly) BOOL activityHasBeenSentToServer;                                                //@synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer - In the implementation block
@property (getter=isInvalidated,readonly) BOOL invalidated;                                           //@synthesize invalidated=_invalidated - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long suggestedActionType;                                          //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDictionary * options;                                                              //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData; 
@property (assign) BOOL canCreateStreams;                                                             //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (copy) NSString * teamIdentifier;                                                           //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
+(void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)deleteAllSavedUserActivitiesWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(id)currentUserActivityUUID;
+(BOOL)supportsUserActivityAppLinks;
+(id)allowedWebpageURLSchemes;
+(id)observers;
+(BOOL)userActivityContinuationSupported;
+(id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id*)arg3 ;
+(BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3 ;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(void)addUserActivityObserver:(id)arg1 ;
+(void)removeUserActivityObserver:(id)arg1 ;
+(BOOL)isIndexPendingForUUID:(id)arg1 ;
+(void)setIndexPending:(BOOL)arg1 forUUID:(id)arg2 ;
+(id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_decodeFromScanner:(id)arg1 ;
+(id)_encodeToString:(id)arg1 ;
+(id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2 ;
+(id)_decodeFromString:(id)arg1 ;
+(id)_decodeFromEntireString:(id)arg1 ;
+(BOOL)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)mainBundleIdentifier;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(NSDictionary *)options;
-(void)setDirty:(BOOL)arg1 ;
-(NSDictionary *)userInfo;
-(id<UAUserActivityDelegate>)delegate;
-(void)setDelegate:(id<UAUserActivityDelegate>)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)resignCurrent;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)typeIdentifier;
-(void)setParentUserActivity:(NSUserActivity *)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)contentUserAction;
-(void)setContentUserAction:(NSString *)arg1 ;
-(BOOL)isInvalidated;
-(BOOL)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(void)becomeCurrent;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSSet *)keywords;
-(NSSet *)keywords;
-(void)setKeywords:(NSSet *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(BOOL)isEligibleForHandoff;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(BOOL)isEligibleForSearch;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(BOOL)isEligibleForPublicIndexing;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(BOOL)isEligibleForPrediction;
-(void)setEligibleForPrediction:(BOOL)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)targetContentIdentifier;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(id)contentType;
-(void)setContentType:(id)arg1 ;
-(id)contentAttributes;
-(void)setContentAttributes:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)addKeywordsFromArray:(id)arg1 ;
-(id)initWithUserActivityData:(id)arg1 options:(id)arg2 ;
-(id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4 ;
-(BOOL)createUserActivityDataWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)createUserActivityStringsWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)teamID;
-(id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3 ;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)suggestedActionType;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)_resignCurrent;
-(CSSearchableItemAttributeSet *)contentAttributeSet;
-(void)setContentAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(long long)priority;
-(UAUserActivityManager *)manager;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(BOOL)dirty;
-(void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)objectForIdentifier:(id)arg1 ;
-(id)payloadForIdentifier:(id)arg1 ;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 ;
-(void)updateForwardToCoreSpotlightIndexer:(char)arg1 ;
-(NSString *)contentIdentifier;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4 ;
-(id)stateString;
-(NSString *)dynamicIdentifier;
-(NSUserActivity *)parentUserActivity;
-(void)indexActivity:(double)arg1 forceIndexing:(BOOL)arg2 ;
-(BOOL)userInfoContainsFileURLs;
-(void)setUserInfoContainsFileURLs:(BOOL)arg1 ;
-(void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2 ;
-(void)setForceImmediateSendToServer:(BOOL)arg1 ;
-(BOOL)forceImmediateSendToServer;
-(void)setCachedEncodedUserInfo:(NSData *)arg1 ;
-(BOOL)forwardToCoreSpotlightIndexer;
-(void)tellDaemonAboutNewLSUserActivity;
-(BOOL)encodedContainsUnsynchronizedCloudDocument;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(BOOL)arg4 ;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)displayInDtrace;
-(BOOL)activityHasBeenSentToServer;
-(void)scheduleSendUserActivityInfoToLSUserActivityd;
-(BOOL)archiveURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)unarchiveURL:(id)arg1 error:(id*)arg2 ;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(NSData *)cachedEncodedUserInfo;
-(BOOL)encodeUserInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)encodeUserInfo:(id)arg1 error:(id*)arg2 ;
-(NSError *)decodeUserInfoError;
-(id)payloadIdentifiers;
-(unsigned long long)userInfoChangeCount;
-(unsigned long long)beginUserInfoUpdate:(id)arg1 ;
-(BOOL)finishUserInfoUpdate;
-(void)_setWebpageURL:(id)arg1 throwOnFailure:(BOOL)arg2 ;
-(NSData *)streamsData;
-(id)encodeUserInfo:(id)arg1 ;
-(id)decodeUserInfo:(id)arg1 ;
-(void)pinUserActivityWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)sendToServerPending;
-(void)setSendToServerPending:(BOOL)arg1 ;
-(BOOL)createsNewUUIDIfSaved;
-(void)setCreatesNewUUIDIfSaved:(BOOL)arg1 ;
-(BOOL)encodedFileProviderURL;
-(void)setEncodedFileProviderURL:(BOOL)arg1 ;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(BOOL)arg1 ;
-(unsigned long long)os_state_handler;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(BOOL)canCreateStreams;
-(void)setCanCreateStreams:(BOOL)arg1 ;
-(NSUUID *)originalUniqueIdentifier;
-(NSMutableDictionary *)payloadObjects;
-(void)setPayloadObjects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)payloadUpdateBlocks;
-(void)setPayloadUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)payloadDataCache;
-(void)setPayloadDataCache:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)dirtyPayloadIdentifiers;
-(void)setDirtyPayloadIdentifiers:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)willCallSaveSerializationQueue;
-(NSObject*<OS_dispatch_queue>)willCallSaveSerializationQueue;
-(void)addContentAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeContentAttribute:(id)arg1 ;
-(BOOL)isEligibleForReminders;
-(id)userActivityInfoForSelfWithPayload:(BOOL)arg1 ;
-(void)setEligibleForReminders:(BOOL)arg1 ;
-(id)userActivityInfoForSelf;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2 ;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(id)copyWithNewUUID:(BOOL)arg1 ;
-(void)willSynchronizeUserActivityWithHandler:(/*^block*/id)arg1 ;
-(void)didSynchronizeUserActivity;
-(BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_encodeIntoUserActivityDataWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendToCoreSpotlightIndexer;
-(/*^block*/id)payloadUpdateBlockForIdentifier:(id)arg1 ;
-(void)setDirty:(BOOL)arg1 identifier:(id)arg2 ;
-(BOOL)isPayloadDirty:(id)arg1 ;
@end

