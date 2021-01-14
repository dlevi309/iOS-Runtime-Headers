/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol OS_dispatch_queue;
@class SSLRUCache, NSObject;

@interface ISURLBagCache : NSObject {

	SSLRUCache* _cachedBags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)URLWithBagContext:(id)arg1 ;
+(id)sharedCache;
-(void)addURLBag:(id)arg1 ;
-(id)init;
-(void)invalidateURLBagForContext:(id)arg1 ;
-(id)_newRequestWithURLBagContext:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(id)URLBagForContext:(id)arg1 ;
-(id)URLBagForContext:(id)arg1 withOptions:(long long)arg2 ;
-(void)invalidateAllURLBags;
-(void)dealloc;
@end

