/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDClientContext, NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject {

	BOOL _forced;
	BOOL _evictNow;
	BOOL _clearRegisteredItems;
	CKDClientContext* _clientContext;
	NSMutableOrderedSet* _itemIDsToUnregister;
	NSMutableOrderedSet* _assetHandleItemIDsToDelete;

}

@property (assign) BOOL forced;                                                             //@synthesize forced=_forced - In the implementation block
@property (assign) BOOL evictNow;                                                           //@synthesize evictNow=_evictNow - In the implementation block
@property (assign) BOOL clearRegisteredItems;                                               //@synthesize clearRegisteredItems=_clearRegisteredItems - In the implementation block
@property (nonatomic,retain) CKDClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * itemIDsToUnregister;                     //@synthesize itemIDsToUnregister=_itemIDsToUnregister - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetHandleItemIDsToDelete;              //@synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete - In the implementation block
-(CKDClientContext *)clientContext;
-(void)setClientContext:(CKDClientContext *)arg1 ;
-(void)setForced:(BOOL)arg1 ;
-(void)setEvictNow:(BOOL)arg1 ;
-(void)setItemIDsToUnregister:(NSMutableOrderedSet *)arg1 ;
-(void)setAssetHandleItemIDsToDelete:(NSMutableOrderedSet *)arg1 ;
-(id)initWithClientContext:(id)arg1 forced:(BOOL)arg2 evictNow:(BOOL)arg3 ;
-(BOOL)forced;
-(BOOL)evictNow;
-(BOOL)clearRegisteredItems;
-(void)setClearRegisteredItems:(BOOL)arg1 ;
-(NSMutableOrderedSet *)itemIDsToUnregister;
-(NSMutableOrderedSet *)assetHandleItemIDsToDelete;
@end

