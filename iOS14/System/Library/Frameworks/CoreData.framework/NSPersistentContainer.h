/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSArray, NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface NSPersistentContainer : NSObject {

	NSArray* _storeDescriptions;
	NSString* _name;
	NSManagedObjectContext* _viewContext;
	NSPersistentStoreCoordinator* _storeCoordinator;

}

@property (copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSManagedObjectContext * viewContext;                                   //@synthesize viewContext=_viewContext - In the implementation block
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (copy) NSArray * persistentStoreDescriptions; 
+(id)persistentContainerWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2 ;
+(Class)persistentStoreDescriptionClass;
+(id)persistentContainerUsingCachedModelWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)defaultDirectoryURL;
+(id)persistentContainerWithName:(id)arg1 ;
+(id)_newModelForName:(id)arg1 ;
-(BOOL)load:(id*)arg1 ;
-(void)setPersistentStoreDescriptions:(NSArray *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)init;
-(void)loadPersistentStoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(id)newBackgroundContext;
-(id)_createDefaultStoreDescriptions;
-(void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(NSArray *)persistentStoreDescriptions;
-(NSManagedObjectContext *)viewContext;
-(void)dealloc;
@end

