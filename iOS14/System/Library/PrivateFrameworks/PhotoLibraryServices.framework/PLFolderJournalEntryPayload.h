/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic,readonly) BOOL isRootFolder; 
@property (nonatomic,readonly) BOOL isProjectAlbumRootFolder; 
@property (nonatomic,readonly) NSOrderedSet * childCollectionUUIDs; 
+(id)modelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(BOOL)arg3 ;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(BOOL)isRootFolder;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSOrderedSet *)childCollectionUUIDs;
-(BOOL)isProjectAlbumRootFolder;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
@end

