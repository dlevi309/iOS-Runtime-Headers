/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMutableSet;

@interface PFCloudKitMetadataCache : NSObject {

	NSMutableDictionary* _recordZoneIDToZoneMetadata;
	NSMutableDictionary* _objectIDToRecordMetadata;
	NSMutableDictionary* _recordIDToMirroredRelationshipOrRecordMetadata;
	NSMutableDictionary* _mtmKeyToMirroredRelationship;
	NSMutableDictionary* _objectIDToRelationshipNameToExistingMTMKeys;
	NSMutableDictionary* _objectIDToChangedPropertyKeys;
	NSMutableSet* _invalidatedMTMKeys;

}
-(BOOL)efficientlyBatchObjectsInHistoryRequest:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 returningError:(id*)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)init;
-(id)zoneMetadataForZoneID:(id)arg1 ;
-(void)cacheZoneMetadata:(id)arg1 ;
-(id)mirroredRelationshipForKey:(id)arg1 ;
-(id)mtmKeysRelatedToObjectWithID:(id)arg1 byRelationshipWithName:(id)arg2 ;
-(id)recordMetadataForObject:(id)arg1 ;
-(BOOL)hasLocalEditsForPropertyNamed:(id)arg1 onObjectWithID:(id)arg2 ;
-(void)registerRecordMetadata:(id)arg1 forObject:(id)arg2 ;
-(id)recordMetadataForObjectID:(id)arg1 ;
-(id)recordMetadataForRecordID:(id)arg1 ;
-(void)_addMirroredRelationshipMTMKey:(id)arg1 forObjectWithID:(id)arg2 andRelationshipName:(id)arg3 ;
-(id)_metadataForRecordID:(id)arg1 ;
-(BOOL)cacheMetadataForObjectsWithIDs:(id)arg1 andRecordsWithIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)mirroredRelationshipForRecordID:(id)arg1 ;
-(void)registerMirroredRelationship:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end

