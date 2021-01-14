/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfstorage.dylib
*/

#import <libobjc.A.dylib/NFStorageInternalMethods.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface NFStorageController : NSObject <NFStorageInternalMethods> {

	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)dbPath;
-(NSManagedObjectModel *)managedObjectModel;
-(id)homePath;
@end

