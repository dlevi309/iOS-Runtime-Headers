/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSCache, NSMapTable, NSObject;

@interface WBSCache : NSObject {

	NSCache* _cache;
	NSMapTable* _weakObjectsTable;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_recacheObjectForKey:(id)arg1 ;
@end

