/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface SLDatabase : NSObject {

	NSString* _modelPath;
	NSString* _storePath;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;

}
-(BOOL)save:(id*)arg1 ;
-(id)_managedObjectModel;
-(id)_persistentStoreCoordinator;
-(id)initWithStoreName:(id)arg1 modelPath:(id)arg2 ;
-(void)_setUpManagedObjectContext;
-(void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)newObjectForEntityNamed:(id)arg1 ;
@end

