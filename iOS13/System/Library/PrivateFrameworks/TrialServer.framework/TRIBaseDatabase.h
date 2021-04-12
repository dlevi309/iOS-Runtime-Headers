/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@protocol OS_os_log;
@class _PASSqliteDatabase, NSObject, NSString;

@interface TRIBaseDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	_PASSqliteDatabase* _db;
	NSObject*<OS_os_log> _dbLog;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPath:(id)arg1 ;
-(BOOL)performMigration;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(id)databaseHandle;
-(BOOL)prepAndRunTransactionQuery:(id)arg1 onPrep:(/*^block*/id)arg2 onRow:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
@end

