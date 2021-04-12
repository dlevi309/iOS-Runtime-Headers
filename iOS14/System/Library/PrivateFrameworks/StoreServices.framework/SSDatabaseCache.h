/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 ;
-(void)clearCacheForLookupKey:(id)arg1 ;
-(id)statistics;
-(void)setMaximumInlineBlobSize:(unsigned long long)arg1 ;
-(id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5 ;
-(id)description;
-(int)clearRetiredData;
-(id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4 ;
-(id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2 ;
-(BOOL)_setupDatabase;
-(unsigned long long)maximumInlineBlobSize;
-(id)cacheEntryForLookupKey:(id)arg1 ;
-(void)dealloc;
@end

