/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableSet, NSString;

@interface NSURLCacheDBReader : NSObject {

	sqlite3_stmtRef _sqlSelectStmt;
	sqlite3_stmtRef _sqlSelectTimeStmt;
	sqlite3Ref _dbReadConnection;
	os_unfair_lock_s _dbReadConnectionLock;
	long long _schemaVersion;
	os_unfair_lock_s _timeRelativeLookupLock;
	NSMutableSet* recentTimeStampLookups;
	unsigned char _performTimeRelativeLookups;
	NSString* _dbPathDirectory;
	NSString* _dbPathFile;
	NSMutableSet* _recentTimeStampLookups;
	BOOL _isDBOpen;

}

@property (assign) BOOL isDBOpen;                                         //@synthesize isDBOpen=_isDBOpen - In the implementation block
@property (retain) NSString * dbPathDirectory;                            //@synthesize dbPathDirectory=_dbPathDirectory - In the implementation block
@property (retain) NSString * dbPathFile;                                 //@synthesize dbPathFile=_dbPathFile - In the implementation block
@property (retain) NSMutableSet * recentTimeStampLookups;                 //@synthesize recentTimeStampLookups=_recentTimeStampLookups - In the implementation block
@property (assign) unsigned char performTimeRelativeLookups;              //@synthesize performTimeRelativeLookups=_performTimeRelativeLookups - In the implementation block
-(id)init;
-(void)dealloc;
-(CFCachedURLResponse*)createCachedResponseForKey:(id)arg1 cacheDataPath:(id*)arg2 cacheDataFile:(id*)arg3 caller:(CFURLCache*)arg4 ;
-(id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 ;
-(BOOL)openAndPrepareReadCacheDB;
-(NSMutableSet *)recentTimeStampLookups;
-(void)cleanupAndShutdown_Lock;
-(BOOL)_openDBReadConnections;
-(void)_closeDB;
-(void)_closeDBReadConnections;
-(BOOL)_prepareDBStatements;
-(BOOL)_prepareDBSelectStatements;
-(BOOL)_finalizeAllDBStatements;
-(BOOL)_finalizeDBSelectStatements;
-(void)performTimeRelativeLookupWithInitialTime:(id)arg1 caller:(CFURLCache*)arg2 ;
-(int)stepSQLStatement:(sqlite3_stmtRef)arg1 toCompletionWithRetry:(long long)arg2 ;
-(int)execSQLStatement:(const char*)arg1 onConnection:(sqlite3Ref)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(BOOL)arg4 ;
-(id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char*)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char*)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char*)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char*)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char*)arg12 useInfoLength:(int)arg13 isDataOnFS:(BOOL)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16 ;
-(BOOL)isDBOpen;
-(void)setIsDBOpen:(BOOL)arg1 ;
-(void)setRecentTimeStampLookups:(NSMutableSet *)arg1 ;
-(unsigned char)performTimeRelativeLookups;
-(void)setPerformTimeRelativeLookups:(unsigned char)arg1 ;
-(NSString *)dbPathDirectory;
-(void)setDbPathDirectory:(NSString *)arg1 ;
-(NSString *)dbPathFile;
-(void)setDbPathFile:(NSString *)arg1 ;
@end

