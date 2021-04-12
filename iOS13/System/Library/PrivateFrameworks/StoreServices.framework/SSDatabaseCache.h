/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, SSPersistentCache, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject {

	unsigned long long _maximumInlineBlobSize;
	NSString* _identifier;
	NSString* _cacheName;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSPersistentCache* _persistentCache;
	SSSQLiteDatabase* _database;
	Class _cacheEntryClass;

}

@property (assign,nonatomic) unsigned long long maximumInlineBlobSize;              //@synthesize maximumInlineBlobSize=_maximumInlineBlobSize - In the implementation block
-(void)dealloc;
-(id)description;
-(void)clear;
-(id)statistics;
-(BOOL)_setupDatabase;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4 ;
-(id)cacheEntryForLookupKey:(id)arg1 ;
-(unsigned long long)maximumInlineBlobSize;
-(void)clearCacheForLookupKey:(id)arg1 ;
-(int)clearRetiredData;
-(id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5 ;
-(id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2 ;
-(void)setMaximumInlineBlobSize:(unsigned long long)arg1 ;
@end

