/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentContainer.h>

@interface NSPersistentCloudKitContainer : NSPersistentContainer
+(id)discoverDefaultContainerIdentifier;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(void)setPersistentStoreDescriptions:(id)arg1 ;
-(void)_loadStoreDescriptons:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)recordForManagedObjectID:(id)arg1 ;
-(id)recordsForManagedObjectIDs:(id)arg1 ;
-(BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)recordIDForManagedObjectID:(id)arg1 ;
-(id)recordIDsForManagedObjectIDs:(id)arg1 ;
@end

