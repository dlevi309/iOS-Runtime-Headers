/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSDatabaseCache, NSMutableSet, NSString, NSObject;

@interface SSCacheObjectStore : NSObject {

	SSDatabaseCache* _databaseCache;
	NSMutableSet* _factories;
	NSString* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)_factoryForTypeIdentifier:(id)arg1 ;
-(BOOL)addObject:(id)arg1 withItemIdentifier:(id)arg2 ;
-(BOOL)removeObjectWithItemIdentifier:(id)arg1 ;
-(id)cacheObjectWithItemIdentifier:(id)arg1 ;
-(void)addCacheObjectFactory:(id)arg1 ;
-(void)removeCacheObjectFactory:(id)arg1 ;
-(id)description;
-(void)clearSession;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(void)dealloc;
@end

