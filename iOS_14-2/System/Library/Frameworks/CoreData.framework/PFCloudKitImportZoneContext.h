/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSArray, NSDictionary, NSSet, NSMutableArray, NSMutableDictionary, NSCloudKitMirroringDelegateOptions, NSURL, CKRecordZone;

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
	CKRecordZone* _recordZone;

}

@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) NSSet * deletedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSArray * modifiedRecords;                                          //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRelationships;                                     //@synthesize deletedRelationships=_deletedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * deletedMirroredRelationshipRecordIDs;                     //@synthesize deletedMirroredRelationshipRecordIDs=_deletedMirroredRelationshipRecordIDs - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRelationships;                                     //@synthesize updatedRelationships=_updatedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * importOperations;                                         //@synthesize importOperations=_importOperations - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) NSURL * fileBackedFuturesDirectory;                                 //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(NSURL *)fileBackedFuturesDirectory;
-(id)initWithRecordZone:(id)arg1 updatedRecords:(id)arg2 deletedRecordTypeToRecordIDs:(id)arg3 options:(id)arg4 fileBackedFuturesDirectory:(id)arg5 ;
-(CKRecordZone *)recordZone;
-(NSSet *)deletedObjectIDs;
-(void)addMirroredRelationshipToLink:(id)arg1 ;
-(id)objectIDForRecordWithID:(id)arg1 ofType:(id)arg2 ;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 andRecordID:(id)arg3 ;
-(NSArray *)updatedRelationships;
-(NSArray *)deletedMirroredRelationshipRecordIDs;
-(NSArray *)deletedRelationships;
-(NSArray *)importOperations;
-(void)addUnresolvedRecordID:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3 ;
-(void)registerObject:(id)arg1 forInsertedRecord:(id)arg2 withMetadata:(id)arg3 ;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4 ;
-(BOOL)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)populateUnresolvedIDsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)linkInsertedObjectsAndMetadataInContext:(id)arg1 error:(id*)arg2 ;
-(NSArray *)modifiedRecords;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(void)dealloc;
@end

