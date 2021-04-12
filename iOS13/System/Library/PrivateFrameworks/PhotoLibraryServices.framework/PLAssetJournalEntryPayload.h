/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSDictionary, NSArray, NSString;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload {

	NSDictionary* _keywordUUIDRemapping;

}

@property (nonatomic,readonly) NSArray * resources; 
@property (nonatomic,readonly) short savedAssetType; 
@property (nonatomic,readonly) NSString * mediaGroupUUID; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)snapshotSortDescriptors;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
+(id)additionalEntityNames;
+(BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2 ;
-(short)kind;
-(id)latitude;
-(id)longitude;
-(void)setLocation:(id)arg1 ;
-(BOOL)isVideo;
-(NSArray *)resources;
-(id)dateCreated;
-(BOOL)isImage;
-(short)savedAssetType;
-(BOOL)hasAdjustments;
-(id)locationData;
-(id)uniformTypeIdentifier;
-(short)kindSubtype;
-(NSString *)mediaGroupUUID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)migrateMergedPayload;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 ;
-(id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithInternalResource:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithFileSystemBookmark:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 ;
-(id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4 ;
-(id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2 ;
-(id)cloudMasterGUID;
-(id)originalResourceRelativePaths;
-(BOOL)isSlowmo;
-(id)extendedAttributesLatitude;
-(id)extendedAttributesLongitude;
-(unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
-(void)_fixResourceTypeUnknownValues;
-(void)_fixXMPSidecarUTI;
-(void)_fixLocationData;
-(void)_fixAdjustedAssetUTI;
@end

