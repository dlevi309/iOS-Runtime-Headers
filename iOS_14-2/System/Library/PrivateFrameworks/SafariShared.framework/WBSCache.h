/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)_recacheObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

