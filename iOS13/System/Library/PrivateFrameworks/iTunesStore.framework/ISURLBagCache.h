/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol OS_dispatch_queue;
@class SSLRUCache, NSObject;

@interface ISURLBagCache : NSObject {

	SSLRUCache* _cachedBags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedCache;
+(id)URLWithBagContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)URLBagForContext:(id)arg1 ;
-(void)invalidateAllURLBags;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)addURLBag:(id)arg1 ;
-(id)_newRequestWithURLBagContext:(id)arg1 ;
-(void)invalidateURLBagForContext:(id)arg1 ;
-(id)URLBagForContext:(id)arg1 withOptions:(long long)arg2 ;
@end

