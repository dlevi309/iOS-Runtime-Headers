/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>
#import <libobjc.A.dylib/PLFaceRebuildDescription.h>

@class NSString;

@interface PLDetectedFaceJournalEntryPayload : PLJournalEntryPayload <PLFaceRebuildDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(NSString *)description;
-(double)size;
-(BOOL)isHidden;
-(double)centerX;
-(double)centerY;
-(BOOL)isManual;
-(id)personUUID;
-(id)assetID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(int)nameSource;
-(BOOL)isRepresentative;
-(int)cloudNameSource;
-(BOOL)isClusterRejected;
-(id)_insertDeferredRebuildFaceForPersonUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_insertDetectedFaceFromDataInManagedObjectContext:(id)arg1 ;
-(id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)insertFaceFromDataInManagedObjectContext:(id)arg1 allowDeferred:(BOOL*)arg2 ;
-(long long)assetIdentifierType;
-(BOOL)isKeyFace;
@end

