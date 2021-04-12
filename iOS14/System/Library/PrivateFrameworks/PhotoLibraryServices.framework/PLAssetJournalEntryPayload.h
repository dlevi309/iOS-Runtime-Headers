/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)latitude;
-(id)directory;
-(id)dateCreated;
-(id)hdrGain;
-(NSArray *)resources;
-(id)filename;
-(id)longitude;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(short)kindSubtype;
-(short)savedAssetType;
-(id)extendedAttributesLatitude;
-(id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithInternalResource:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithFileSystemBookmark:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 ;
-(id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4 ;
-(id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2 ;
-(id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;
-(id)cloudMasterGUID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)originalResourceRelativePaths;
-(id)extendedAttributesLongitude;
-(unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
-(id)_loadOriginalVideoMetadataWithPathManager:(id)arg1 timezoneLookup:(id)arg2 ;
-(void)_convertDepthStatesToDepthType;
-(short)kind;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
-(void)_fixHDRGainZeroValueToNULL;
-(void)_fixOriginalAlternateImageOrientation;
-(void)_fixResourceTypeUnknownValues;
-(void)_fixXMPSidecarUTI;
-(void)_fixLocationData;
-(void)_fixAdjustedAssetUTI;
-(void)setLocation:(id)arg1 ;
-(BOOL)isDefaultAdjustedSlomo;
-(id)locationData;
-(BOOL)isImage;
-(BOOL)isVideo;
-(id)adjustmentFormatVersion;
-(id)adjustmentFormatIdentifier;
-(BOOL)hasAdjustments;
-(id)originalOrientation;
-(NSString *)mediaGroupUUID;
-(id)highFrameRateState;
@end

