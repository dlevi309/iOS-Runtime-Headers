/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSCacheClearing.h>
#import <libobjc.A.dylib/BCSConfigCaching.h>
#import <libobjc.A.dylib/BCSConfigCacheSkipping.h>
#import <libobjc.A.dylib/BCSShardCacheQueryable.h>
#import <libobjc.A.dylib/BCSShardCacheSkipping.h>
#import <libobjc.A.dylib/BCSItemCaching.h>
#import <libobjc.A.dylib/BCSItemCacheSkipping.h>
#import <libobjc.A.dylib/BCSBatchable.h>

@protocol BCSShardCacheQueryable, BCSItemCachingBCSLinkItemCacheClearing;
@class NSString;

@interface BCSCacheManager : NSObject <BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable> {

	id<BCSShardCacheQueryable> _shardCache;
	id<BCSItemCaching><BCSLinkItemCacheClearing> _itemCache;

}

@property (nonatomic,retain) id<BCSShardCacheQueryable> shardCache;                               //@synthesize shardCache=_shardCache - In the implementation block
@property (nonatomic,retain) id<BCSItemCaching><BCSLinkItemCacheClearing> itemCache;              //@synthesize itemCache=_itemCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endBatch;
-(void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateConfigItem:(id)arg1 withType:(long long)arg2 ;
-(BOOL)shouldSkipCacheForConfigItemOfType:(long long)arg1 ;
-(id)configItemForType:(long long)arg1 ;
-(void)setShardCache:(id<BCSShardCacheQueryable>)arg1 ;
-(id<BCSShardCacheQueryable>)shardCache;
-(void)deleteShardItemsOfType:(long long)arg1 ;
-(void)beginBatch;
-(void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2 ;
-(BOOL)shouldSkipCacheForShardItemOfType:(long long)arg1 ;
-(long long)countOfShardsOfType:(long long)arg1 ;
-(long long)countOfExpiredShardsOfType:(long long)arg1 ;
-(BOOL)shouldSkipCacheForItemOfType:(long long)arg1 ;
-(id<BCSItemCaching><BCSLinkItemCacheClearing>)itemCache;
-(id)itemMatching:(id)arg1 ;
-(void)deleteItemMatching:(id)arg1 ;
-(void)updateItem:(id)arg1 withItemIdentifier:(id)arg2 ;
-(void)deleteItemsOfType:(long long)arg1 ;
-(void)deleteExpiredItemsOfType:(long long)arg1 ;
-(void)clearCachesForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearExpiredCachesForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteShardItemMatching:(id)arg1 ;
-(id)shardItemMatching:(id)arg1 ;
-(void)deleteExpiredShardItemsOfType:(long long)arg1 ;
-(void)setItemCache:(id<BCSItemCaching><BCSLinkItemCacheClearing>)arg1 ;
-(void)_clearExpiredCacheItemsForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteConfigItemForType:(long long)arg1 ;
-(void)deleteExpiredConfigItemForType:(long long)arg1 ;
-(id)initWithShardCache:(id)arg1 itemCache:(id)arg2 ;
@end

