/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSArray, NSDictionary, NSSet, NSMutableArray, NSMutableDictionary, NSCloudKitMirroringDelegateOptions, NSURL;

@interface PFCloudKitImportZoneContext : NSObject {

	NSArray* _updatedRecords;
	NSDictionary* _deletedRecordTypeToRecordID;
	NSSet* _deletedObjectIDs;
	NSArray* _modifiedRecords;
	NSMutableArray* _updatedRelationships;
	NSArray* _deletedRelationships;
	NSArray* _deletedMirroredRelationshipRecordIDs;
	NSMutableDictionary* _recordTypeToRecordIDToObjectID;
	NSMutableDictionary* _recordTypeToUnresolvedRecordIDs;
	NSMutableArray* _metadatasToLink;
	NSArray* _importOperations;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSURL* _fileBackedFuturesDirectory;

}

@property (nonatomic,readonly) NSSet * deletedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSArray * modifiedRecords;                                          //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRelationships;                                     //@synthesize deletedRelationships=_deletedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * deletedMirroredRelationshipRecordIDs;                     //@synthesize deletedMirroredRelationshipRecordIDs=_deletedMirroredRelationshipRecordIDs - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRelationships;                                     //@synthesize updatedRelationships=_updatedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * importOperations;                                         //@synthesize importOperations=_importOperations - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) NSURL * fileBackedFuturesDirectory;                                 //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(void)dealloc;
-(NSURL *)fileBackedFuturesDirectory;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 andRecordID:(id)arg3 ;
-(void)addUnresolvedRecordID:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3 ;
-(id)objectIDForRecordWithID:(id)arg1 ofType:(id)arg2 ;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4 ;
-(id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4 ;
-(NSArray *)updatedRelationships;
-(BOOL)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id*)arg3 ;
-(void)registerObject:(id)arg1 forInsertedRecord:(id)arg2 withMetadata:(id)arg3 ;
-(void)addMirroredRelationshipToLink:(id)arg1 ;
-(BOOL)populateUnresolvedIDsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)linkInsertedObjectsAndMetadataInContext:(id)arg1 error:(id*)arg2 ;
-(NSSet *)deletedObjectIDs;
-(NSArray *)modifiedRecords;
-(NSArray *)deletedRelationships;
-(NSArray *)deletedMirroredRelationshipRecordIDs;
-(NSArray *)importOperations;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
@end

