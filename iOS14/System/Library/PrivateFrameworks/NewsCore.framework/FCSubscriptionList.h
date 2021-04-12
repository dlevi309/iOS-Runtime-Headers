/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordIDs;
+(BOOL)requiresHighPriorityFirstSync;
+(id)desiredKeys;
+(id)backingRecordZoneIDs;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
+(unsigned long long)localStoreVersion;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(id)commandStoreFileName;
+(BOOL)requiresBatchedSync;
+(id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)addObserver:(id)arg1 ;
-(NSMutableDictionary *)mutableSubscriptionsBySubscriptionID;
-(NSSet *)allSubscribedTagIDs;
-(NSSet *)mutedTagIDs;
-(void)setItemsLock:(FCMTWriterLock *)arg1 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 originProvider:(/*^block*/id)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevelProvider:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(NSSet *)subscribedTagIDs;
-(void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 originProvider:(/*^block*/id)arg3 eventInitiationLevelProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setSubscribedTagIDs:(NSSet *)arg1 ;
-(void)setSubscribedTagRanker:(id<FCTagRanking>)arg1 ;
-(id)_subscriptionFromRecord:(id)arg1 ;
-(void)setIgnoredTagIDs:(NSSet *)arg1 ;
-(BOOL)hasIgnoredSubscriptionForTagID:(id)arg1 ;
-(void)setOrderedSubscribedTagIDs:(NSOrderedSet *)arg1 ;
-(void)setMutableSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(id)subscriptionForTagIDOfAnyType:(id)arg1 ;
-(void)_addRemoteSubscriptions:(id)arg1 ;
-(NSSet *)ignoredTagIDs;
-(BOOL)hasMutedSubscriptionForTagID:(id)arg1 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg1 forTagID:(id)arg2 ;
-(void)handleSyncCompletion;
-(id)t_reconcileSubscriptions:(id)arg1 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(/*^block*/id)arg2 eventInitiationLevel:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removeRemoteSubscription:(id)arg1 ;
-(void)assignOrderToTagSubscriptionsIfNeeded;
-(NSSet *)autoFavoriteTagIDs;
-(void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_newSubscriptionOrder;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(NSOrderedSet *)orderedSubscribedTagIDs;
-(void)removeObserver:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)_reconcileSubscriptions:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevel:(long long)arg6 ;
-(void)_removeRemoteSubscriptions:(id)arg1 ;
-(id)subscriptionsForType:(unsigned long long)arg1 ;
-(BOOL)canAddSubscription;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4 ;
-(NSDictionary *)subscriptionsBySubscriptionID;
-(void)_regenerateSortedSubscriptions;
-(void)_modifyRemoteSubscriptions:(id)arg1 ;
-(NSSet *)groupableTagIDs;
-(void)setGroupableTagIDs:(NSSet *)arg1 ;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1 ;
-(BOOL)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg1 ;
-(id<FCTagRanking>)subscribedTagRanker;
-(long long)_orderOfHighestRankedTagSubscription;
-(id)subscriptionForTagID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(BOOL)hasNotificationsEnabledForTagID:(id)arg1 ;
-(BOOL)hasSubscriptionForTagID:(id)arg1 ;
-(FCMTWriterLock *)itemsLock;
-(unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1 ;
-(id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5 ;
@end

