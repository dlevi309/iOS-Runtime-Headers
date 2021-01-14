/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEONavdCacheDBReader : GEODBReader {

	sqlite3_stmtRef _sqlReadAllEntries;
	sqlite3_stmtRef _sqlReadEntriesForHash;
	sqlite3_stmtRef _sqlReadKeysForHash;
	sqlite3_stmtRef _sqlReadNextTimerTimeStamp;
	sqlite3_stmtRef _sqlReadEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadRowIdsOfEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadEntryWithRowId;
	sqlite3_stmtRef _sqlCountEntries;

}
-(long long)_numberOfEntries;
-(void)_cacheEntryWithRowId:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheEntryForNextRefreshWithHandler:(/*^block*/id)arg1 ;
-(void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_openDBIfNotAlreadyOpen;
-(void)_allCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)_openDB;
-(void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

