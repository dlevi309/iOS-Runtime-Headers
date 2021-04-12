/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMutableSet;

@interface PFCloudKitMetadataCache : NSObject {

	NSMutableDictionary* _recordZoneIDToZoneMetadata;
	NSMutableDictionary* _objectIDToRecordMetadata;
	NSMutableDictionary* _recordIDToMirroredRelationshipOrRecordMetadata;
	NSMutableDictionary* _mtmKeyToMirroredRelationship;
	NSMutableDictionary* _objectIDToRelationshipNameToExistingMTMKeys;
	NSMutableSet* _invalidatedMTMKeys;

}
-(id)init;
-(void)dealloc;
-(BOOL)cacheMetadataForObjectsWithIDs:(id)arg1 andRecordsWithIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)zoneMetadataForZoneID:(id)arg1 ;
-(void)cacheZoneMetadata:(id)arg1 ;
-(id)mirroredRelationshipForKey:(id)arg1 ;
-(id)mtmKeysRelatedToObjectWithID:(id)arg1 byRelationshipWithName:(id)arg2 ;
-(id)recordMetadataForObject:(id)arg1 ;
-(void)registerRecordMetadata:(id)arg1 forObject:(id)arg2 ;
-(id)recordMetadataForRecordID:(id)arg1 ;
-(void)_addMirroredRelationshipMTMKey:(id)arg1 forObjectWithID:(id)arg2 andRelationshipName:(id)arg3 ;
-(id)_metadataForRecordID:(id)arg1 ;
-(id)recordMetadataForObjectID:(id)arg1 ;
-(id)mirroredRelationshipForRecordID:(id)arg1 ;
-(void)registerMirroredRelationship:(id)arg1 forKey:(id)arg2 ;
@end

