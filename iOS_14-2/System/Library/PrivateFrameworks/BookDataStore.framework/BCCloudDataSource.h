/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithManagedObjectModel:(id)arg1 persistentStorePath:(id)arg2 ;
-(void)_setupPersistentStoreCoordinatorWithPath:(id)arg1 ;
-(BOOL)setupPersistentStore;
-(void)_setupManagedObjectContextWithCoordinator:(id)arg1 ;
-(id)_persistentStoreOptions;
-(void)_createPersistentStoreDirectory;
-(void)_logIfError:(id)arg1 operation:(id)arg2 ;
-(void)setSetupPersistentStore:(BOOL)arg1 ;
@end

