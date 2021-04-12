/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol WBSSQLiteStoreDelegate, OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject;

@interface WBSSQLiteStore : NSObject {

	long long _databaseLockingPolicy;
	long long _protectionType;
	int _databaseCoordinationLockFileDescriptor;
	BOOL _fallBackToMemoryStoreIfError;
	NSURL* _databaseURL;
	id<WBSSQLiteStoreDelegate> _delegate;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (nonatomic,readonly) WBSSQLiteDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL;                                     //@synthesize databaseURL=_databaseURL - In the implementation block
@property (assign,nonatomic,__weak) id<WBSSQLiteStoreDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id<WBSSQLiteStoreDelegate>)delegate;
-(BOOL)isOpen;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_currentSchemaVersion;
-(void)setDelegate:(id<WBSSQLiteStoreDelegate>)arg1 ;
-(void)_closeDatabase;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(id)initWithURL:(id)arg1 protectionType:(long long)arg2 ;
-(BOOL)_isDatabaseLocked;
-(void)_releaseDatabaseCoordinationLock;
-(void)_openDatabase:(id)arg1 createIfNeeded:(BOOL)arg2 checkIntegrity:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_confirmDatabaseIntegrityIsOK;
-(void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1 ;
-(void)_databaseWillClose;
-(id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1 ;
-(void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 lockingPolicy:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSURL *)databaseURL;
-(WBSSQLiteDatabase *)database;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)dealloc;
@end

