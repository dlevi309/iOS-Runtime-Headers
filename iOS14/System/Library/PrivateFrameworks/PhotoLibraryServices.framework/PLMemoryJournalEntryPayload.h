/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSSet;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,retain) NSString * keyAssetUUID; 
@property (nonatomic,retain) NSSet * curatedAssetUUIDs; 
@property (nonatomic,retain) NSSet * extendedCuratedAssetUUIDs; 
@property (nonatomic,retain) NSSet * movieCuratedAssetUUIDs; 
@property (nonatomic,retain) NSSet * representativeAssetUUIDs; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(NSSet *)representativeAssetUUIDs;
-(NSSet *)curatedAssetUUIDs;
-(void)setRepresentativeAssetUUIDs:(NSSet *)arg1 ;
-(void)setCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)extendedCuratedAssetUUIDs;
-(void)setExtendedCuratedAssetUUIDs:(NSSet *)arg1 ;
-(NSSet *)movieCuratedAssetUUIDs;
-(void)setMovieCuratedAssetUUIDs:(NSSet *)arg1 ;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(BOOL)arg2 ;
@end

