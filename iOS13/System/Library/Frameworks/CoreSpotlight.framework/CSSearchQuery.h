/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/MDSearchQueryResultProcessor.h>

@protocol OS_dispatch_queue;
@class NSKnownKeysMappingStrategy, NSObject, NSString, CSSearchQueryContext, NSMapTable, NSArray;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor> {

	unsigned long long _foundItemCount;
	short _requestedAttributeCount;
	short _attrInfo[12];
	BOOL _started;
	BOOL _finished;
	BOOL _cancelled;
	BOOL _gatherEnded;
	os_unfair_lock_s _liveItemLock;
	NSKnownKeysMappingStrategy* _mappingStrategy;
	unsigned long long* _attrKeys;
	BOOL _privateIndex;
	BOOL _userFSIndex;
	BOOL _suspended;
	/*^block*/id _foundItemsHandler;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _queryString;
	CSSearchQueryContext* _queryContext;
	NSMapTable* _liveIndexBundleIDToIndexItemIDMap;
	NSMapTable* _liveIndexBundleIDToBundleString;
	NSMapTable* _liveIndexUserFSOIDTOIdentifierMap;
	/*^block*/id _gatherEndedHandler;
	/*^block*/id _changedItemsHandler;
	/*^block*/id _removedItemsHandler;
	/*^block*/id _foundAttributesHandler;
	/*^block*/id _changedAttributesHandler;
	/*^block*/id _countChangedHandler;
	/*^block*/id _resolvedAttributeNamesHandler;
	/*^block*/id _completionsHandler;
	/*^block*/id _foundItemHandler;
	/*^block*/id _interruptedHandler;
	/*^block*/id _restartedHandler;
	/*^block*/id _restartGatherEndedHandler;
	NSString* _privateBundleID;

}

@property (nonatomic,readonly) NSArray * fetchAttributes; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * queryString;                                        //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) CSSearchQueryContext * queryContext;                         //@synthesize queryContext=_queryContext - In the implementation block
@property (nonatomic,retain) NSMapTable * liveIndexBundleIDToIndexItemIDMap;              //@synthesize liveIndexBundleIDToIndexItemIDMap=_liveIndexBundleIDToIndexItemIDMap - In the implementation block
@property (nonatomic,retain) NSMapTable * liveIndexBundleIDToBundleString;                //@synthesize liveIndexBundleIDToBundleString=_liveIndexBundleIDToBundleString - In the implementation block
@property (nonatomic,retain) NSMapTable * liveIndexUserFSOIDTOIdentifierMap;              //@synthesize liveIndexUserFSOIDTOIdentifierMap=_liveIndexUserFSOIDTOIdentifierMap - In the implementation block
@property (copy) id gatherEndedHandler;                                                   //@synthesize gatherEndedHandler=_gatherEndedHandler - In the implementation block
@property (copy) id changedItemsHandler;                                                  //@synthesize changedItemsHandler=_changedItemsHandler - In the implementation block
@property (copy) id removedItemsHandler;                                                  //@synthesize removedItemsHandler=_removedItemsHandler - In the implementation block
@property (copy) id foundAttributesHandler;                                               //@synthesize foundAttributesHandler=_foundAttributesHandler - In the implementation block
@property (copy) id changedAttributesHandler;                                             //@synthesize changedAttributesHandler=_changedAttributesHandler - In the implementation block
@property (copy) id countChangedHandler;                                                  //@synthesize countChangedHandler=_countChangedHandler - In the implementation block
@property (copy) id resolvedAttributeNamesHandler;                                        //@synthesize resolvedAttributeNamesHandler=_resolvedAttributeNamesHandler - In the implementation block
@property (copy) id completionsHandler;                                                   //@synthesize completionsHandler=_completionsHandler - In the implementation block
@property (copy) id foundItemHandler;                                                     //@synthesize foundItemHandler=_foundItemHandler - In the implementation block
@property (copy) id interruptedHandler;                                                   //@synthesize interruptedHandler=_interruptedHandler - In the implementation block
@property (copy) id restartedHandler;                                                     //@synthesize restartedHandler=_restartedHandler - In the implementation block
@property (copy) id restartGatherEndedHandler;                                            //@synthesize restartGatherEndedHandler=_restartGatherEndedHandler - In the implementation block
@property (assign,nonatomic) BOOL privateIndex;                                           //@synthesize privateIndex=_privateIndex - In the implementation block
@property (assign,nonatomic) BOOL userFSIndex;                                            //@synthesize userFSIndex=_userFSIndex - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                              //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSString * privateBundleID;                                  //@synthesize privateBundleID=_privateBundleID - In the implementation block
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
@property (copy) id foundItemsHandler;                                                    //@synthesize foundItemsHandler=_foundItemsHandler - In the implementation block
@property (copy) id completionHandler;                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) NSArray * protectionClasses; 
+(id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
+(void)userEngagedWithUniqueIdentifier:(id)arg1 bundleId:(id)arg2 forUserQuery:(id)arg3 interactionType:(int)arg4 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)options;
-(void)handleError:(id)arg1 ;
-(void)cancel;
-(BOOL)attribute;
-(void)start;
-(BOOL)isCancelled;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)connection;
-(id)bundleIDs;
-(BOOL)internal;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(double)currentTime;
-(void)setBundleIDs:(id)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(void)setFoundItemsHandler:(id)arg1 ;
-(id)initWithQueryString:(id)arg1 attributes:(id)arg2 ;
-(unsigned long long)foundItemCount;
-(void)_finishWithError:(id)arg1 ;
-(id)scopes;
-(void)setScopes:(id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(CSSearchQueryContext *)queryContext;
-(id)foundItemsHandler;
-(void)handleCompletion:(id)arg1 ;
-(void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2 ;
-(void)handleFoundItems:(id)arg1 ;
-(BOOL)isTopHitQuery;
-(id)copyCSSearchableItemWithValues:(id*)arg1 valueCount:(unsigned long long)arg2 attrKeys:(unsigned long long*)arg3 protectionClass:(id)arg4 mappingStrategy:(id)arg5 attrInfo:(short*)arg6 requestedAttributeCount:(unsigned long long)arg7 unpackInfo:(CSUnpackInfo)arg8 userFSDomain:(id)arg9 ;
-(NSArray *)fetchAttributes;
-(NSArray *)protectionClasses;
-(BOOL)grouped;
-(BOOL)live;
-(BOOL)counting;
-(BOOL)privateIndex;
-(NSString *)privateBundleID;
-(BOOL)userFSIndex;
-(void)didResolveFriendlyAttributeNames:(id)arg1 fromFetchAttributes:(id)arg2 ;
-(void)setupFetchAttributesForSearch;
-(id)changedAttributesHandler;
-(id)foundAttributesHandler;
-(BOOL)removeLiveOID:(long long)arg1 outBundleID:(id*)arg2 outIdentifier:(id*)arg3 ;
-(BOOL)removeUserFSLiveOID:(long long)arg1 outBundleID:(id*)arg2 outIdentifier:(id*)arg3 ;
-(void)_removeIdentifiers:(id)arg1 withBundleID:(id)arg2 andQueryID:(long long)arg3 ;
-(BOOL)addOrUpdateLiveOID:(long long)arg1 bundleID:(id)arg2 identifier:(id)arg3 ;
-(id)addOrUpdateUserFSLiveOID:(long long)arg1 userFSDomain:(id)arg2 identifier:(id)arg3 ;
-(id)foundItemHandler;
-(id)copyResultFromPlist:(id)arg1 protectionClass:(id)arg2 ;
-(id)completionsHandler;
-(void)processResultFromPlist:(id)arg1 atIndex:(unsigned long long)arg2 protectionClass:(id)arg3 oids:(long long*)arg4 oidCount:(unsigned)arg5 addItems:(id*)arg6 updateItems:(id*)arg7 moveItems:(id*)arg8 ;
-(id)removedItemsHandler;
-(id)changedItemsHandler;
-(void)processAttributesData:(id)arg1 update:(BOOL)arg2 protectionClass:(id)arg3 ;
-(void)processLiveResultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3 ;
-(void)processResultsData:(id)arg1 protectionClass:(id)arg2 ;
-(void)processCompletionsResultsData:(id)arg1 protectionClass:(id)arg2 ;
-(void)processRemoveResultsData:(id)arg1 protectionClass:(id)arg2 ;
-(id)countChangedHandler;
-(id)gatherEndedHandler;
-(void)didReturnResults:(long long)arg1 resultsData:(id)arg2 oidData:(id)arg3 protectionClass:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setQueryContext:(CSSearchQueryContext *)arg1 ;
-(NSMapTable *)liveIndexBundleIDToIndexItemIDMap;
-(void)setLiveIndexBundleIDToIndexItemIDMap:(NSMapTable *)arg1 ;
-(NSMapTable *)liveIndexBundleIDToBundleString;
-(void)setLiveIndexBundleIDToBundleString:(NSMapTable *)arg1 ;
-(NSMapTable *)liveIndexUserFSOIDTOIdentifierMap;
-(void)setLiveIndexUserFSOIDTOIdentifierMap:(NSMapTable *)arg1 ;
-(void)setGatherEndedHandler:(id)arg1 ;
-(void)setChangedItemsHandler:(id)arg1 ;
-(void)setRemovedItemsHandler:(id)arg1 ;
-(void)setFoundAttributesHandler:(id)arg1 ;
-(void)setChangedAttributesHandler:(id)arg1 ;
-(void)setCountChangedHandler:(id)arg1 ;
-(id)resolvedAttributeNamesHandler;
-(void)setResolvedAttributeNamesHandler:(id)arg1 ;
-(void)setCompletionsHandler:(id)arg1 ;
-(void)setFoundItemHandler:(id)arg1 ;
-(id)interruptedHandler;
-(void)setInterruptedHandler:(id)arg1 ;
-(id)restartedHandler;
-(void)setRestartedHandler:(id)arg1 ;
-(id)restartGatherEndedHandler;
-(void)setRestartGatherEndedHandler:(id)arg1 ;
-(void)setPrivateIndex:(BOOL)arg1 ;
-(void)setUserFSIndex:(BOOL)arg1 ;
-(void)setPrivateBundleID:(NSString *)arg1 ;
@end

