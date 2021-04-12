/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSDictionary, NSMutableArray, NSMutableSet, NSObject, GEOResourceManifestManager, GEOCountryConfiguration;

@interface GEODBWriter : NSObject {

	NSString* _path;
	NSDictionary* _pragmaOverrides;
	sqlite3Ref _db;
	sqlite3_stmtRef _versionQuery;
	sqlite3_stmtRef _versionInsert;
	sqlite3_stmtRef _editionQuery;
	sqlite3_stmtRef _editionDelete;
	sqlite3_stmtRef _editionInvalidate;
	sqlite3_stmtRef _editionUpdate;
	sqlite3_stmtRef _editionInvalidateAll;
	sqlite3_stmtRef _tileInsert;
	sqlite3_stmtRef _tileDelete;
	sqlite3_stmtRef _tileSize;
	sqlite3_stmtRef _sizeQuery;
	long long _lastRowID;
	unsigned long long _databaseSize;
	unsigned long long _maxDatabaseSize;
	BOOL _closed;
	BOOL _defunct;
	NSMutableArray* _writeList;
	NSMutableSet* _uncommitedWriteSet;
	unsigned long long _pendingWriteBytes;
	os_unfair_lock_s _writeListLock;
	NSObject*<OS_dispatch_queue> _writeQueue;
	void* _editionMap;
	long long _evictionRowsThreshold;
	SCD_Struct_GE55* _expirationRecords;
	unsigned long long _expirationRecordCount;
	BOOL _preloading;
	double _lastCheckedGeneralExpiration;
	unsigned long long _tileCacheMinimumWriteCount;
	unsigned long long _tileCacheMinimumWriteBytes;
	unsigned long long _tileCacheMaximumWriteCount;
	unsigned long long _tileCacheMaximumWriteBytes;
	NSString* _devicePostureCountry;
	NSString* _devicePostureRegion;
	BOOL _canCreateDebugTable;
	GEOResourceManifestManager* _manifestManager;
	GEOCountryConfiguration* _countryConfiguration;

}

@property (nonatomic,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (assign) BOOL closed; 
@property (nonatomic,readonly) unsigned long long databaseSize;               //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDatabaseSize;              //@synthesize maxDatabaseSize=_maxDatabaseSize - In the implementation block
@property (nonatomic,readonly) NSString * devicePostureCountry;               //@synthesize devicePostureCountry=_devicePostureCountry - In the implementation block
@property (nonatomic,readonly) NSString * devicePostureRegion;                //@synthesize devicePostureRegion=_devicePostureRegion - In the implementation block
-(BOOL)closed;
-(void)_evict;
-(void)flushPendingWrites;
-(id)initWithPath:(id)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(void)_openIfNecessary;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(NSString *)path;
-(void)_localeChanged:(id)arg1 ;
-(void)setExpirationRecords:(SCD_Struct_GE55*)arg1 count:(unsigned long long)arg2 ;
-(void)_updateSize;
-(id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 ;
-(void)_countryChanged:(id)arg1 ;
-(void)_deviceLocked;
-(id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 manifestManager:(id)arg3 countryConfiguration:(id)arg4 ;
-(void)_performWrites:(BOOL)arg1 ;
-(void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2 ;
-(void)_openDBAndPurgeContents;
-(void)_finalizeStatements;
-(BOOL)prepareSingleStatement:(sqlite3_stmt*)arg1 forSql:(id)arg2 ;
-(void)_createTables;
-(void)_writeVersionForCountry:(id)arg1 region:(id)arg2 ;
-(void)_updateVersionTableWithCountryAndRegion;
-(BOOL)_readEditions;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_assertDatabaseSize;
-(unsigned long long)_dbFileSize;
-(void)_deleteKey:(GEOTileKey)arg1 ;
-(unsigned long long)_freeableDiskSpace;
-(void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2 ;
-(BOOL)_tileSetExpires:(unsigned)arg1 ;
-(void)_dropWritesOnFloor:(id)arg1 ;
-(void)_updateEdition:(unsigned)arg1 forTileset:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(void)_writeEntry:(id)arg1 ;
-(void)waitForPendingWrites;
-(void)_printDBStatus:(const char*)arg1 ;
-(id)pendingWriteForKey:(GEOTileKey*)arg1 ;
-(void)calculateFreeableSizeWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)deleteData:(const GEOTileKey*)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)addData:(id)arg1 forKey:(GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
-(unsigned long long)databaseSize;
-(void)pendingWritesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)maxDatabaseSize;
-(void)setMaxDatabaseSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(NSString *)devicePostureCountry;
-(void)_prepareStatements;
-(void)_closeDB;
-(void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1 ;
-(NSString *)devicePostureRegion;
-(void)dealloc;
@end

