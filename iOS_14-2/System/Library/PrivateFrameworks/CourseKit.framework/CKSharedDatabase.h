/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
*/


@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CKSharedDatabase : NSObject {

	NSManagedObjectContext* _mainManagedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSManagedObjectContext * mainManagedObjectContext;                      //@synthesize mainManagedObjectContext=_mainManagedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)databaseURL;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(id)newManagedObjectContext;
-(NSManagedObjectModel *)managedObjectModel;
-(id)urlForDataModel;
-(NSManagedObjectContext *)mainManagedObjectContext;
-(void)setMainManagedObjectContext:(NSManagedObjectContext *)arg1 ;
@end

