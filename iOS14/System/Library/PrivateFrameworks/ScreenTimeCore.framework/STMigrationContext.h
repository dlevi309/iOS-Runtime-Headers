/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSMutableDictionary, NSMutableSet;

@interface STMigrationContext : NSObject {

	NSMutableDictionary* _uniqueIdentifierToCloudObjectID;
	NSMutableDictionary* _uniqueIdentifierToLocalObjectID;
	NSMutableSet* _deletedObjectIDs;
	NSMutableSet* _filledObjectIDs;

}
-(id)init;
-(BOOL)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
@end

