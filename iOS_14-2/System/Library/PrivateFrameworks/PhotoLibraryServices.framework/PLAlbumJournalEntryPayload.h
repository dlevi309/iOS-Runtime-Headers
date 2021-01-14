/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic,readonly) NSOrderedSet * assetUUIDs; 
+(id)modelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSOrderedSet *)assetUUIDs;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
@end

