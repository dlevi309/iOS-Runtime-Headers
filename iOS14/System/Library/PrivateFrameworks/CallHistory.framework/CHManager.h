/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol SyncManagerProtocol;
@class NSDate, NSArray, NSPredicate, NSString, CHPhoneBookIOSManager;

@interface CHManager : CHSynchronizedLoggable {

	BOOL _showsTelephonyCalls;
	BOOL _showsFaceTimeVideoCalls;
	BOOL _showsFaceTimeAudioCalls;
	BOOL _generateSyncTransactions;
	BOOL _contactsDisabled;
	BOOL _cacheIsDirty;
	BOOL _reCoalesce;
	unsigned _limitingCallTypes;
	NSDate* _limitingStartDate;
	NSDate* _limitingEndDate;
	NSArray* _limitingCallKinds;
	NSPredicate* _postFetchingPredicate;
	NSString* _coalescingStrategy;
	NSArray* _recentCalls;
	long long _numberOfUnseenMissedCalls;
	id<SyncManagerProtocol> _syncManager;
	NSArray* _uncoalescedRecentCalls;
	NSArray* _uncoalescedUnFilteredRecentCalls;

}

@property (assign,getter=isContactsDisabled,nonatomic) BOOL contactsDisabled;                                 //@synthesize contactsDisabled=_contactsDisabled - In the implementation block
@property (nonatomic,readonly) CHPhoneBookIOSManager * phoneBookManager; 
@property (nonatomic,retain) NSArray * recentCalls;                                                           //@synthesize recentCalls=_recentCalls - In the implementation block
@property (assign) long long numberOfUnseenMissedCalls;                                                       //@synthesize numberOfUnseenMissedCalls=_numberOfUnseenMissedCalls - In the implementation block
@property (retain) id<SyncManagerProtocol> syncManager;                                                       //@synthesize syncManager=_syncManager - In the implementation block
@property (assign) BOOL cacheIsDirty;                                                                         //@synthesize cacheIsDirty=_cacheIsDirty - In the implementation block
@property (assign) BOOL reCoalesce;                                                                           //@synthesize reCoalesce=_reCoalesce - In the implementation block
@property (getter=uncoalescedRecentCallsSync,nonatomic,retain) NSArray * uncoalescedRecentCalls;              //@synthesize uncoalescedRecentCalls=_uncoalescedRecentCalls - In the implementation block
@property (retain) NSArray * uncoalescedUnFilteredRecentCalls;                                                //@synthesize uncoalescedUnFilteredRecentCalls=_uncoalescedUnFilteredRecentCalls - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeVideoCalls;                                                    //@synthesize showsFaceTimeVideoCalls=_showsFaceTimeVideoCalls - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeAudioCalls;                                                    //@synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) BOOL showsTelephonyCalls;                                                        //@synthesize showsTelephonyCalls=_showsTelephonyCalls - In the implementation block
@property (assign,nonatomic) BOOL generateSyncTransactions;                                                   //@synthesize generateSyncTransactions=_generateSyncTransactions - In the implementation block
@property (assign,nonatomic) unsigned limitingCallTypes;                                                      //@synthesize limitingCallTypes=_limitingCallTypes - In the implementation block
@property (nonatomic,copy) NSDate * limitingStartDate;                                                        //@synthesize limitingStartDate=_limitingStartDate - In the implementation block
@property (nonatomic,copy) NSDate * limitingEndDate;                                                          //@synthesize limitingEndDate=_limitingEndDate - In the implementation block
@property (nonatomic,copy) NSArray * limitingCallKinds;                                                       //@synthesize limitingCallKinds=_limitingCallKinds - In the implementation block
@property (nonatomic,retain) NSPredicate * postFetchingPredicate;                                             //@synthesize postFetchingPredicate=_postFetchingPredicate - In the implementation block
@property (nonatomic,copy) NSString * coalescingStrategy;                                                     //@synthesize coalescingStrategy=_coalescingStrategy - In the implementation block
+(id)limitingCallKindsForCallType:(unsigned)arg1 ;
+(unsigned)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(BOOL)arg2 isAnswered:(BOOL)arg3 ;
-(void)flush;
-(id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4 ;
-(void)setShowsFaceTimeVideoCalls:(BOOL)arg1 ;
-(double)callTimersGetOutgoing;
-(id)init;
-(void)markAllCallsAsReadWithPredicate:(id)arg1 ;
-(void)setLimitingCallTypes:(unsigned)arg1 ;
-(void)setReCoalesce:(BOOL)arg1 ;
-(void)addToCallHistory:(id)arg1 ;
-(void)setSyncManager:(id<SyncManagerProtocol>)arg1 ;
-(void)setRecentCalls:(NSArray *)arg1 ;
-(id)applyPredicate:(id)arg1 toCalls:(id)arg2 ;
-(void)deleteAllCallsSync;
-(NSDate *)limitingStartDate;
-(void)setLimitingEndDate:(NSDate *)arg1 ;
-(CHPhoneBookIOSManager *)phoneBookManager;
-(NSArray *)limitingCallKinds;
-(void)setUncoalescedRecentCalls:(NSArray *)arg1 ;
-(BOOL)isContactsDisabled;
-(BOOL)cacheIsDirty;
-(BOOL)generateSyncTransactions;
-(void)setUncoalescedUnFilteredRecentCalls:(NSArray *)arg1 ;
-(void)clearDatabase;
-(id)coalescedCallsWithCalls:(id)arg1 usingStrategy:(id)arg2 ;
-(id)callIdentifiersWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 ;
-(void)setLimitingCallKinds:(NSArray *)arg1 ;
-(BOOL)showsFaceTimeVideoCalls;
-(void)handleCallHistoryContactStoreChangedInternalNotification:(id)arg1 ;
-(void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2 ;
-(BOOL)showsFaceTimeAudioCalls;
-(void)setLimitingStartDate:(NSDate *)arg1 ;
-(void)deleteTheseCalls:(id)arg1 ;
-(long long)deleteCallsWithPredicate:(id)arg1 ;
-(void)deleteCallAtIndex:(unsigned long long)arg1 ;
-(id)unCoalesceCall:(id)arg1 ;
-(BOOL)showsTelephonyCalls;
-(id)fetchRecentCallsSyncWithCoalescing:(BOOL)arg1 ;
-(void)deleteAllCalls;
-(void)setDefaultInitValues;
-(void)setLimitingCallTypesSync:(unsigned)arg1 ;
-(id)recentCallsWithPredicate:(id)arg1 ;
-(unsigned long long)callCountWithPredicate:(id)arg1 ;
-(void)addMultipleCallsToCallHistory:(id)arg1 ;
-(double)callTimersGetLifetime;
-(NSArray *)uncoalescedUnFilteredRecentCalls;
-(id)uncoalescedRecentCallsSync;
-(unsigned)limitingCallTypes;
-(void)registerForNotifications;
-(void)setShowsTelephonyCalls:(BOOL)arg1 ;
-(void)setPostFetchingPredicate:(NSPredicate *)arg1 ;
-(NSDate *)limitingEndDate;
-(void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2 ;
-(long long)numberOfUnseenMissedCalls;
-(id<SyncManagerProtocol>)syncManager;
-(unsigned long long)coalescedCallCountWithPredicate:(id)arg1 ;
-(double)callTimersGetIncoming;
-(void)setShowsFaceTimeAudioCalls:(BOOL)arg1 ;
-(void)currentLocaleChanged:(id)arg1 ;
-(unsigned long long)countCallsWithPredicateSync:(id)arg1 ;
-(id)latestRecentCallMatchingPredicate:(id)arg1 ;
-(void)deleteTheseCallsSync:(id)arg1 ;
-(long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 ;
-(void)setInitialLimitingCallKinds:(id)arg1 ;
-(id)callsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 ;
-(id)coalescedCallsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 ;
-(void)setGenerateSyncTransactions:(BOOL)arg1 ;
-(void)callTimersReset;
-(unsigned long long)countCallsWithPredicate:(id)arg1 ;
-(void)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setContactsDisabled:(BOOL)arg1 ;
-(NSArray *)recentCalls;
-(void)handleCallHistoryDatabaseChangedInternalNotification:(id)arg1 ;
-(id)getLimitsDictionary;
-(void)setLimitingCallKindsSync:(id)arg1 ;
-(BOOL)reCoalesce;
-(NSPredicate *)postFetchingPredicate;
-(void)setCoalescingStrategy:(NSString *)arg1 ;
-(void)setCacheIsDirty:(BOOL)arg1 ;
-(void)setNumberOfUnseenMissedCalls:(long long)arg1 ;
-(NSString *)coalescingStrategy;
-(id)latestCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1 ;
-(void)dealloc;
-(void)deleteCall:(id)arg1 ;
-(void)deleteCallsWithPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

