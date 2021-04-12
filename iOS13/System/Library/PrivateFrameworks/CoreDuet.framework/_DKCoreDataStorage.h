/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKCoreDataStorageDelegate;
#import <CoreDuet/CoreDuet-Structs.h>
@class NSManagedObjectModel, NSMutableDictionary, NSMapTable, _DKDataProtectionStateMonitor, NSFileManager, NSCloudKitMirroringDelegate, NSString, NSURL;

@interface _DKCoreDataStorage : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSMutableDictionary* _paths;
	NSMapTable* _managedObjectContexts;
	NSMutableDictionary* _persistentStoreCoordinators;
	_DKDataProtectionStateMonitor* _dataProtectionMonitor;
	NSFileManager* _fm;
	NSCloudKitMirroringDelegate* _mirroringDelegate;
	BOOL _isManagedDatabase;
	BOOL _isDatabaseManager;
	BOOL _maintenanceRunning;
	BOOL _readOnly;
	BOOL _localOnly;
	BOOL _sync;
	BOOL _requiresManualMigration;
	NSString* _directory;
	NSURL* _modelURL;
	NSString* _databaseName;
	id<_DKCoreDataStorageDelegate> _delegate;
	NSString* _containerIdentifier;

}

@property (readonly) NSString * directory;                                         //@synthesize directory=_directory - In the implementation block
@property (readonly) BOOL readOnly;                                                //@synthesize readOnly=_readOnly - In the implementation block
@property (readonly) BOOL localOnly;                                               //@synthesize localOnly=_localOnly - In the implementation block
@property (readonly) BOOL sync;                                                    //@synthesize sync=_sync - In the implementation block
@property (readonly) NSURL * modelURL;                                             //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) NSString * databaseName;                                      //@synthesize databaseName=_databaseName - In the implementation block
@property (__weak) id<_DKCoreDataStorageDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSCloudKitMirroringDelegate * mirroringDelegate;              //@synthesize mirroringDelegate=_mirroringDelegate - In the implementation block
@property (readonly) NSString * containerIdentifier;                               //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresManualMigration;                         //@synthesize requiresManualMigration=_requiresManualMigration - In the implementation block
+(unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(BOOL)arg4 includePendingChanges:(BOOL)arg5 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(BOOL)arg6 includePendingChanges:(BOOL)arg7 ;
+(unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 includePendingChanges:(BOOL)arg8 ;
+(unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 salt:(id)arg8 ;
+(id)anonymizeString:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)deleteOrphanedEntitiesInContext:(id)arg1 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 includePendingChanges:(BOOL)arg8 ;
+(BOOL)forceCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(BOOL)arg7 updateBlock:(/*^block*/id)arg8 ;
-(id)init;
-(void)dealloc;
-(id<_DKCoreDataStorageDelegate>)delegate;
-(void)setDelegate:(id<_DKCoreDataStorageDelegate>)arg1 ;
-(NSString *)directory;
-(BOOL)sync;
-(NSString *)databaseName;
-(void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2 ;
-(NSString *)containerIdentifier;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 localOnly:(BOOL)arg5 ;
-(id)managedObjectContextFor:(id)arg1 ;
-(id)privateManagedObjectContextFor:(id)arg1 ;
-(void)closeStorageForProtectionClass:(id)arg1 ;
-(BOOL)deleteStorageFor:(id)arg1 ;
-(id)copyStorageFor:(id)arg1 toDirectory:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 sync:(BOOL)arg4 ;
-(void)setRequiresManualMigration:(BOOL)arg1 ;
-(BOOL)isManagedObjectContextFor:(id)arg1 equalToManagedObjectContext:(id)arg2 ;
-(BOOL)localOnly;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 localOnly:(BOOL)arg5 sync:(BOOL)arg6 ;
-(id)databaseManagerName;
-(void)_registerForClientHelpNotifications;
-(void)_unregisterForClientHelpNotifications;
-(CFStringRef)clientNeedsHelpNotification;
-(void)handleDatabaseErrors:(id)arg1 forProtectionClass:(id)arg2 ;
-(void)invalidateManagedObjectContextAndPersistentStoreCoordinatorFor:(id)arg1 ;
-(id)managedObjectContextForKey:(id)arg1 ;
-(void)removePersistentStoreCoordinatorFor:(id)arg1 ;
-(void)removeManagedObjectContextForKey:(id)arg1 ;
-(void)removePersistentStoresInCoordinator:(id)arg1 ;
-(id)managedObjectModelForVersion:(unsigned long long)arg1 ;
-(BOOL)isManagedObjectModel:(id)arg1 compatibleWithPersistentStoreAtURL:(id)arg2 error:(id*)arg3 ;
-(id)managedObjectModelURLForVersion:(unsigned long long)arg1 ;
-(unsigned long long)managedObjectModelVersionCompatibleWithPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
-(long long)modelVersionForStoreAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 startVersion:(unsigned long long)arg4 endVersion:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)autoMigratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id*)arg4 ;
-(BOOL)willAutoMigrateStoreAtURL:(id)arg1 fromManagedObjectModel:(id)arg2 havingVersion:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)didAutoMigratePersistentStore:(id)arg1 toManagedObjectModel:(id)arg2 havingVersion:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_defaultOptionsForStoreWithProtectionClass:(id)arg1 ;
-(id)_descriptionForStoreWithURL:(id)arg1 protectionClass:(id)arg2 sync:(BOOL)arg3 ;
-(BOOL)isDataVaulted;
-(id)managedObjectModel;
-(BOOL)requiresManualMigration;
-(BOOL)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id*)arg4 ;
-(BOOL)_addStoresToCoordinator:(id)arg1 protectionClass:(id)arg2 error:(id*)arg3 ;
-(id)persistentStoreCoordinatorFor:(id)arg1 ;
-(void)setManagedObjectContext:(id)arg1 forKey:(id)arg2 ;
-(id)databasePathFor:(id)arg1 ;
-(BOOL)_deleteDatabaseFiles:(id)arg1 ;
-(void)handleClientCallForHelp;
-(void)setManagedObjectModel:(id)arg1 ;
-(BOOL)confirmDatabaseConnectionFor:(id)arg1 ;
-(BOOL)readOnly;
-(NSURL *)modelURL;
-(NSCloudKitMirroringDelegate *)mirroringDelegate;
@end

