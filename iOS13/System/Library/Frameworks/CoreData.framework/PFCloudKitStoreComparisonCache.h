/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFStoreComparisonCache.h>

@class NSMutableDictionary;

@interface PFCloudKitStoreComparisonCache : PFStoreComparisonCache {

	NSMutableDictionary* _mtmKeyToStoreUUIDToMirroredRelationship;
	NSMutableDictionary* _storeUUIDToMtmKeys;
	NSMutableDictionary* _storeUUIDToRecordIDToRelationshipNameToRelatedRecordIDs;
	NSMutableDictionary* _recordIDToStoreUUIDToMetadata;
	NSMutableDictionary* _objectIDToRecordMetadata;
	NSMutableDictionary* _storeIdentifierToRecordIDs;
	NSMutableDictionary* _recordIDToStoreUUIDToObjectID;
	NSMutableDictionary* _objectIDToRecordID;

}
-(id)init;
-(void)dealloc;
-(id)recordIDForObjectID:(id)arg1 ;
-(void)cacheMirroredRelationship:(id)arg1 withManagedObjectModel:(id)arg2 ;
-(id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3 ;
-(id)mtmKeysForStore:(id)arg1 ;
-(id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3 ;
-(void)cacheRecordMetadata:(id)arg1 ;
-(id)metadataForObjectWithID:(id)arg1 ;
-(id)recordIdsForStore:(id)arg1 ;
-(id)objectIDForRecordID:(id)arg1 inStore:(id)arg2 ;
@end

