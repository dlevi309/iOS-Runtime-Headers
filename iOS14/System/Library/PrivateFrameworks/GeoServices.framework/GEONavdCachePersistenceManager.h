/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class GEONavdCacheDBWriter, GEONavdCacheDBReader, NSObject;

@interface GEONavdCachePersistenceManager : NSObject {

	GEONavdCacheDBWriter* _writer;
	GEONavdCacheDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)tearDown;
-(void)_deleteRowWithRowId:(long long)arg1 ;
-(id)init;
-(long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2 ;
-(long long)_numberOfEntries;
-(long long)_rowIdOfKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)_enumerateAllForCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_removeAllEntries;
-(void)_deleteFromDiskWithKey:(id)arg1 ;
-(id)_readValueWithKey:(id)arg1 ;
-(id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(long long)_threadUnsafeRowIdOfKey:(id)arg1 ;
-(void)_enumerateAllEntriesWithHandler:(/*^block*/id)arg1 ;
-(double)_nextTimeStampForRefreshTimer;
-(id)_entryWithRowId:(long long)arg1 ;
-(void)_removeOldFormatCacheFromPath:(id)arg1 ;
@end

