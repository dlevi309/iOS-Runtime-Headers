/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class GEONavdCacheDBWriter, GEONavdCacheDBReader, NSObject;

@interface GEONavdCachePersistenceManager : NSObject {

	GEONavdCacheDBWriter* _writer;
	GEONavdCacheDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)tearDown;
-(void)_removeOldFormatCacheFromPath:(id)arg1 ;
-(long long)_threadUnsafeRowIdOfKey:(id)arg1 ;
-(void)_deleteFromDiskWithKey:(id)arg1 ;
-(long long)_numberOfEntries;
-(double)_nextTimeStampForRefreshTimer;
-(id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(long long)_rowIdOfKey:(id)arg1 ;
-(id)_entryWithRowId:(long long)arg1 ;
-(long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2 ;
-(id)_readValueWithKey:(id)arg1 ;
-(void)_deleteRowWithRowId:(long long)arg1 ;
-(void)_enumerateAllEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_removeAllEntries;
@end

