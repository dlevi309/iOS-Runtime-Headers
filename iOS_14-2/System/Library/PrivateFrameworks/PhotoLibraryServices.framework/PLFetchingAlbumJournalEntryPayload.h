/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(void)_fixHasLocationSmartAlbum;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
@end

