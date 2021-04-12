/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSURL;

@interface ENSQLiteConnection : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statementCache;
	BOOL _isInTransaction;
	int _additionalOpenFlags;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (assign,nonatomic) int additionalOpenFlags;                    //@synthesize additionalOpenFlags=_additionalOpenFlags - In the implementation block
-(id)init;
-(long long)lastInsertedRowID;
-(BOOL)isOpen;
-(void)close;
-(int)openWithError:(id*)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(NSURL *)fileURL;
-(BOOL)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)_initWithDatabaseURL:(id)arg1 ;
-(id)_lastErrorWithResultCode:(int)arg1 ;
-(BOOL)_executeSQL:(id)arg1 cacheStatement:(BOOL)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 enumerationHandler:(/*^block*/id)arg5 ;
-(BOOL)_prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 statementHandler:(/*^block*/id)arg4 ;
-(BOOL)setIntegerValue:(long long)arg1 forPragma:(id)arg2 error:(id*)arg3 ;
-(BOOL)getIntegerValue:(long long*)arg1 forPragma:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeUncachedSQLStatements:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 error:(id*)arg2 ;
-(BOOL)getUserVersion:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)truncateWithError:(id*)arg1 ;
-(int)additionalOpenFlags;
-(void)setAdditionalOpenFlags:(int)arg1 ;
@end

