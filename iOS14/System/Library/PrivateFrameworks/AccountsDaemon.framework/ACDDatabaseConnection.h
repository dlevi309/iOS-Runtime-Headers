/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol NSObject, ACDDatabaseConnectionDelegate;
@class NSCache, NSPersistentStoreCoordinator, NSManagedObjectContext, NSNumber;

@interface ACDDatabaseConnection : NSObject {

	id<NSObject> _managedObjectContextDidSaveObserver;
	NSCache* _cache;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	id<ACDDatabaseConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic,__weak) id<ACDDatabaseConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSNumber * keychainVersion; 
+(id)new;
-(NSManagedObjectContext *)managedObjectContext;
-(void)deleteObject:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)init;
-(id)objectForObjectURI:(id)arg1 ;
-(id<ACDDatabaseConnectionDelegate>)delegate;
-(void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1 ;
-(void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1 ;
-(void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3 ;
-(void)setKeychainVersion:(NSNumber *)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 ;
-(BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2 ;
-(id)_persistentStore;
-(id)_managedObjectContextModificationDescription;
-(void)_traceDatabaseEvents;
-(void)setDelegate:(id<ACDDatabaseConnectionDelegate>)arg1 ;
-(id)_managedObjectModel;
-(id)_managedObjectModificationDescription:(id)arg1 ;
-(id)existingObjectWithURI:(id)arg1 ;
-(unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)managedObjectIDForURI:(id)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(void)_beginObservingManagedObjectContextDidSaveNotifications;
-(void)_endObservingManagedObjectContextDidSaveNotifications;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(NSNumber *)keychainVersion;
-(void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(NSNumber *)version;
-(id)insertNewObjectForEntityForName:(id)arg1 ;
-(void)rollback;
-(void)_handleManagedObjectContextError:(id)arg1 ;
-(void)dealloc;
@end

