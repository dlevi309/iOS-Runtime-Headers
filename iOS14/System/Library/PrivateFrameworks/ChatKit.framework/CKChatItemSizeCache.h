/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, IMDoubleLinkedList, NSObject, IMScheduledUpdater, NSString, NSData;

@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener> {

	BOOL _test_throwExceptionDuringInflate;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _chatItemGUIDToCacheKeyMap;
	IMDoubleLinkedList* _orderedKeys;
	NSObject*<OS_dispatch_queue> _cacheDiskQueue;
	IMScheduledUpdater* _evictionUpdater;
	NSString* _preferredLocalization;
	NSData* _test_cacheData;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * chatItemGUIDToCacheKeyMap;              //@synthesize chatItemGUIDToCacheKeyMap=_chatItemGUIDToCacheKeyMap - In the implementation block
@property (nonatomic,retain) IMDoubleLinkedList * orderedKeys;                             //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheDiskQueue;                  //@synthesize cacheDiskQueue=_cacheDiskQueue - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * evictionUpdater;                         //@synthesize evictionUpdater=_evictionUpdater - In the implementation block
@property (nonatomic,retain) NSString * preferredLocalization;                             //@synthesize preferredLocalization=_preferredLocalization - In the implementation block
@property (assign,nonatomic) BOOL test_throwExceptionDuringInflate;                        //@synthesize test_throwExceptionDuringInflate=_test_throwExceptionDuringInflate - In the implementation block
@property (nonatomic,retain) NSData * test_cacheData;                                      //@synthesize test_cacheData=_test_cacheData - In the implementation block
+(id)sharedInstance;
+(id)test_cachePath;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setEvictionUpdater:(IMScheduledUpdater *)arg1 ;
-(id)_fontSizeCategory;
-(void)_updateKeyMap:(id)arg1 forKey:(id)arg2 sizeCacheKey:(id)arg3 ;
-(void)setTest_throwExceptionDuringInflate:(BOOL)arg1 ;
-(void)invalidateCachedSizeForChatItem:(id)arg1 ;
-(void)setTest_cacheData:(NSData *)arg1 ;
-(void)setOrderedKeys:(IMDoubleLinkedList *)arg1 ;
-(id)initForTestAndThrowException:(BOOL)arg1 cacheFileData:(id)arg2 ;
-(BOOL)test_throwExceptionDuringInflate;
-(void)_persistCache;
-(id)_generateChatItemGuidToCacheKeyMapWithCache:(id)arg1 ;
-(void)_invalidateCachedSizeForChatItemGUID:(id)arg1 ;
-(NSString *)preferredLocalization;
-(NSData *)test_cacheData;
-(void)setChatItemGUIDToCacheKeyMap:(NSMutableDictionary *)arg1 ;
-(id)cacheKeyForChatItem:(id)arg1 fittingSize:(CGSize)arg2 ;
-(NSMutableDictionary *)chatItemGUIDToCacheKeyMap;
-(IMScheduledUpdater *)evictionUpdater;
-(void)_inflateCache;
-(void)_evictIfNeeded;
-(void)setPreferredLocalization:(NSString *)arg1 ;
-(IMDoubleLinkedList *)orderedKeys;
-(void)_invalidateSizeCacheMetricsForKey:(id)arg1 ;
-(BOOL)cachedSizeForChatItem:(id)arg1 size:(out CGSize*)arg2 textAlignmentInsets:(out UIEdgeInsets*)arg3 fittingSize:(CGSize)arg4 ;
-(NSObject*<OS_dispatch_queue>)cacheDiskQueue;
-(void)setCacheDiskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCachedSizeForChatItem:(id)arg1 size:(CGSize)arg2 textAlignmentInsets:(UIEdgeInsets)arg3 fittingSize:(CGSize)arg4 ;
-(void)invalidateCachedSizeForGUIDPrefix:(id)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)_systemVersion;
-(void)applicationWillResignActive;
-(void)systemApplicationDidSuspend;
-(BOOL)_boldTextEnabled;
-(void)_commonInit;
-(void)dealloc;
@end

