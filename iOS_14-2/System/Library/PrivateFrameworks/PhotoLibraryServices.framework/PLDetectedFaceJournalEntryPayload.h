/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>
#import <libobjc.A.dylib/PLFaceRebuildDescription.h>

@class NSString;

@interface PLDetectedFaceJournalEntryPayload : PLJournalEntryPayload <PLFaceRebuildDescription>

@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(BOOL)isHidden;
-(double)centerY;
-(double)size;
-(double)centerX;
-(BOOL)isManual;
-(id)assetID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSString *)description;
-(int)nameSource;
-(id)personUUID;
-(BOOL)isRepresentative;
-(int)cloudNameSource;
-(BOOL)isClusterRejected;
-(id)_insertDeferredRebuildFaceForPersonUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_insertDetectedFaceFromDataInManagedObjectContext:(id)arg1 ;
-(id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg1 ;
-(long long)assetIdentifierType;
-(BOOL)insertFaceFromDataInManagedObjectContext:(id)arg1 allowDeferred:(BOOL*)arg2 ;
-(BOOL)isKeyFace;
@end

