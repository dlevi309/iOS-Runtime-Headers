/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOutDeleteWithoutInstance.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {

	BOOL _setupPersistentStore;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (assign,nonatomic) BOOL setupPersistentStore;                                              //@synthesize setupPersistentStore=_setupPersistentStore - In the implementation block
+(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
+(id)_persistentStoreDirectory;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 persistentStorePath:(id)arg2 ;
-(void)_setupPersistentStoreCoordinatorWithPath:(id)arg1 ;
-(BOOL)setupPersistentStore;
-(void)_setupManagedObjectContextWithCoordinator:(id)arg1 ;
-(id)_persistentStoreOptions;
-(void)_createPersistentStoreDirectory;
-(void)_logIfError:(id)arg1 operation:(id)arg2 ;
-(void)setSetupPersistentStore:(BOOL)arg1 ;
@end

