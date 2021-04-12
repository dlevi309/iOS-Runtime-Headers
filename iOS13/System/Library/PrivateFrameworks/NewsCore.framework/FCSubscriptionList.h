/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>

@protocol FCTagRanking;
@class NSOrderedSet, NSSet, NSMutableDictionary, FCMTWriterLock, NSDictionary;

@interface FCSubscriptionList : FCPrivateDataController {

	NSOrderedSet* _orderedSubscribedTagIDs;
	NSSet* _subscribedTagIDs;
	NSSet* _mutedTagIDs;
	NSSet* _autoFavoriteTagIDs;
	NSSet* _groupableTagIDs;
	NSSet* _ignoredTagIDs;
	id<FCTagRanking> _subscribedTagRanker;
	NSMutableDictionary* _mutableSubscriptionsBySubscriptionID;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,copy) NSOrderedSet * orderedSubscribedTagIDs;                                    //@synthesize orderedSubscribedTagIDs=_orderedSubscribedTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * subscribedTagIDs;                                                  //@synthesize subscribedTagIDs=_subscribedTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * mutedTagIDs;                                                       //@synthesize mutedTagIDs=_mutedTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * autoFavoriteTagIDs;                                                //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * groupableTagIDs;                                                   //@synthesize groupableTagIDs=_groupableTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * ignoredTagIDs;                                                     //@synthesize ignoredTagIDs=_ignoredTagIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableSubscriptionsBySubscriptionID;              //@synthesize mutableSubscriptionsBySubscriptionID=_mutableSubscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * itemsLock;                                              //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allSubscribedTagIDs; 
@property (nonatomic,retain) id<FCTagRanking> subscribedTagRanker;                                    //@synthesize subscribedTagRanker=_subscribedTagRanker - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subscriptionsBySubscriptionID; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
+(id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSDictionary *)subscriptionsBySubscriptionID;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(FCMTWriterLock *)itemsLock;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
-(NSSet *)mutedTagIDs;
-(BOOL)hasMutedSubscriptionForTagID:(id)arg1 ;
-(NSSet *)autoFavoriteTagIDs;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(NSSet *)allSubscribedTagIDs;
-(NSSet *)subscribedTagIDs;
-(void)handleSyncCompletion;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1 ;
-(NSOrderedSet *)orderedSubscribedTagIDs;
-(NSSet *)ignoredTagIDs;
-(NSSet *)groupableTagIDs;
-(id)subscriptionsForType:(unsigned long long)arg1 ;
-(id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)canAddSubscription;
-(id)subscriptionForTagID:(id)arg1 ;
-(id)subscriptionForTagIDOfAnyType:(id)arg1 ;
-(void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevel:(long long)arg6 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg1 forTagID:(id)arg2 ;
-(BOOL)hasNotificationsEnabledForTagID:(id)arg1 ;
-(BOOL)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg1 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5 ;
-(BOOL)hasIgnoredSubscriptionForTagID:(id)arg1 ;
-(void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 eventInitiationLevel:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 originProvider:(/*^block*/id)arg3 eventInitiationLevelProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)_modifyRemoteSubscriptions:(id)arg1 ;
-(void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)mutableSubscriptionsBySubscriptionID;
-(id)_reconcileSubscriptions:(id)arg1 ;
-(void)setMutableSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(void)_regenerateSortedSubscriptions;
-(id)_subscriptionFromRecord:(id)arg1 ;
-(void)assignOrderToTagSubscriptionsIfNeeded;
-(id)_newSubscriptionOrder;
-(unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1 ;
-(void)_addRemoteSubscriptions:(id)arg1 ;
-(void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 originProvider:(/*^block*/id)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevelProvider:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_removeRemoteSubscriptions:(id)arg1 ;
-(void)_removeRemoteSubscription:(id)arg1 ;
-(id<FCTagRanking>)subscribedTagRanker;
-(long long)_orderOfHighestRankedTagSubscription;
-(void)setSubscribedTagIDs:(NSSet *)arg1 ;
-(void)setOrderedSubscribedTagIDs:(NSOrderedSet *)arg1 ;
-(void)setGroupableTagIDs:(NSSet *)arg1 ;
-(void)setIgnoredTagIDs:(NSSet *)arg1 ;
-(BOOL)hasSubscriptionForTagID:(id)arg1 ;
-(id)t_reconcileSubscriptions:(id)arg1 ;
-(void)setSubscribedTagRanker:(id<FCTagRanking>)arg1 ;
@end

