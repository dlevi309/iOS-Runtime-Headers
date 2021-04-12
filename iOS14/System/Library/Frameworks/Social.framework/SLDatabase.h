/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_persistentStoreCoordinator;
-(BOOL)save:(id*)arg1 ;
-(id)_managedObjectModel;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)initWithStoreName:(id)arg1 modelPath:(id)arg2 ;
-(void)_setUpManagedObjectContext;
-(void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
-(id)newObjectForEntityNamed:(id)arg1 ;
@end

