/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@interface PLMigrationHistoryJournalEntryPayload : PLJournalEntryPayload
+(id)modelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
-(id)insertMigrationHistoryFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
@end

