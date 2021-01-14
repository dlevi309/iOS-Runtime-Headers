/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSBatchable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BCSPersistentStore : NSObject <BCSBatchable> {

	sqlite3Ref _openedDatabase;
	long long _batchCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) long long batchCount;                            //@synthesize batchCount=_batchCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) sqlite3Ref openedDatabase;                     //@synthesize openedDatabase=_openedDatabase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)debugQueueName;
-(long long)schemaVersion;
-(id)databasePath;
-(const char*)schema;
-(BOOL)_setDatabaseSchemaVersion:(long long)arg1 forDatabase:(sqlite3Ref)arg2 ;
-(id)init;
-(void)endBatch;
-(long long)batchCount;
-(void)setBatchCount:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)beginBatch;
-(sqlite3Ref)openedDatabase;
-(void)schemaVersionWillChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(sqlite3Ref)_createDatabaseFileAtPath:(id)arg1 ;
-(BOOL)_generateTableWithDatabase:(sqlite3Ref)arg1 ;
-(long long)_databaseSchemaVersionForDatabase:(sqlite3Ref)arg1 ;
-(void)schemaVersionDidChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(void)queue_openDatabaseIfNecessary;
-(void)queue_closeDatabase;
-(BOOL)deleteDatabaseFile;
@end

