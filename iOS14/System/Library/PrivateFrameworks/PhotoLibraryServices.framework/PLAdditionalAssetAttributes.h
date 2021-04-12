/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLPTPTransferableAdditionalAssetAttributes.h>

@class NSString, NSNumber, PLSpatialOverCaptureInformation, CLLocation, NSData, PLSceneprint, NSDate, PLManagedAsset, NSSet, PLUnmanagedAdjustment, PLAssetDescription, PLCloudMasterMediaMetadata, PLEditedIPTCAttributes;

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes> {

	CLLocation* __cachedShiftedLocation;

}

@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,retain,readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * longDescription; 
@property (nonatomic,retain) NSData * mediaMetadataData; 
@property (assign,nonatomic) short destinationAssetCopyState; 
@property (nonatomic,retain) PLSceneprint * sceneprint; 
@property (readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@property (setter=_setCachedShiftedLocation:,nonatomic,retain) CLLocation * _cachedShiftedLocation;                 //@synthesize _cachedShiftedLocation=__cachedShiftedLocation - In the implementation block
@property (nonatomic,retain) NSString * creatorBundleID; 
@property (nonatomic,retain) NSString * editorBundleID; 
@property (nonatomic,retain) NSString * exifTimestampString; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain) NSString * montage; 
@property (nonatomic,retain) id originalAssetsUUID; 
@property (nonatomic,retain) NSString * originalFilename; 
@property (nonatomic,retain) NSNumber * originalFilesize; 
@property (nonatomic,retain) NSData * originalHash; 
@property (nonatomic,retain) NSNumber * originalHeight; 
@property (nonatomic,retain) NSNumber * originalOrientation; 
@property (nonatomic,retain) NSNumber * originalResourceChoice; 
@property (nonatomic,retain) NSNumber * originalWidth; 
@property (nonatomic,retain) NSString * publicGlobalUUID; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (nonatomic,retain) NSNumber * reverseLocationDataIsValid; 
@property (nonatomic,retain) NSString * timeZoneName; 
@property (nonatomic,retain) NSNumber * timeZoneOffset; 
@property (nonatomic,retain) NSNumber * inferredTimeZoneOffset; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * accessibilityDescription; 
@property (nonatomic,retain) NSDate * lastUploadAttemptDate; 
@property (nonatomic,retain) NSNumber * uploadAttempts; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) NSSet * keywords; 
@property (nonatomic,retain) PLUnmanagedAdjustment * unmanagedAdjustment; 
@property (nonatomic,retain) NSNumber * locationHash; 
@property (nonatomic,retain) PLAssetDescription * assetDescription; 
@property (nonatomic,retain) NSData * faceRegions; 
@property (nonatomic,retain) NSData * objectSaliencyRectsData; 
@property (nonatomic,retain) NSSet * personReferences; 
@property (assign,nonatomic) short cameraCaptureDevice; 
@property (nonatomic,copy) NSString * originatingAssetIdentifier; 
@property (nonatomic,copy) NSString * spatialOverCaptureGroupIdentifier; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) long long shareCount; 
@property (assign,nonatomic) long long viewCount; 
@property (assign,nonatomic) long long pendingPlayCount; 
@property (assign,nonatomic) long long pendingShareCount; 
@property (assign,nonatomic) long long pendingViewCount; 
@property (assign,nonatomic) BOOL allowedForAnalysis; 
@property (assign,nonatomic) unsigned long long cloudRecoveryState; 
@property (assign,nonatomic) short cloudStateRecoveryAttemptsCount; 
@property (assign,nonatomic) short importedBy; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (assign,nonatomic) short shareType; 
@property (nonatomic,copy) NSString * shareOriginator; 
@property (nonatomic,copy) NSString * deferredPhotoIdentifier; 
@property (nonatomic,copy) NSString * snowdaySnowplowIdentifier; 
@property (assign,nonatomic) unsigned short deferredProcessingCandidateOptions; 
@property (nonatomic,retain) PLCloudMasterMediaMetadata * mediaMetadata; 
@property (nonatomic,retain) NSString * mediaMetadataType; 
@property (nonatomic,retain) NSString * photoStreamTagId; 
@property (nonatomic,retain) NSSet * sceneClassifications; 
@property (assign,nonatomic) short sceneAnalysisVersion; 
@property (nonatomic,retain) NSDate * sceneAnalysisTimestamp; 
@property (nonatomic,retain) NSData * distanceIdentity; 
@property (assign,nonatomic) int cloudAvalanchePickType; 
@property (assign,nonatomic) short cloudKindSubtype; 
@property (assign,nonatomic) BOOL shiftedLocationIsValid; 
@property (nonatomic,retain) NSData * shiftedLocationData; 
@property (assign,nonatomic) int videoCpDurationTimescale; 
@property (assign,nonatomic) long long videoCpDisplayValue; 
@property (assign,nonatomic) int videoCpDisplayTimescale; 
@property (nonatomic,copy) NSString * masterFingerPrint; 
@property (nonatomic,copy) NSString * adjustedFingerPrint; 
@property (nonatomic,retain) NSData * placeAnnotationData; 
@property (nonatomic,retain) CLLocation * shiftedLocation; 
@property (assign,nonatomic) unsigned long long variationSuggestionStates; 
@property (nonatomic,retain) NSDate * alternateImportImageDate; 
@property (nonatomic,retain) PLEditedIPTCAttributes * editedIPTCAttributes; 
@property (assign,nonatomic) double gpsHorizontalAccuracy; 
+(id)entityName;
+(id)descriptionForDestinationAssetCopyState:(short)arg1 ;
+(id)newExtraDurationDataFromStillDisplayTime:(SCD_Struct_PL14)arg1 videoDuration:(SCD_Struct_PL14)arg2 ;
+(id)listOfSyncedProperties;
+(void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(SCD_Struct_PL14*)arg2 videoDuration:(SCD_Struct_PL14*)arg3 ;
-(id)payloadID;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)willSave;
-(CLLocation *)shiftedLocation;
-(void)setShiftedLocationIsValid:(BOOL)arg1 ;
-(void)removeCloudRecoveryStateFlag:(unsigned long long)arg1 ;
-(void)setShiftedLocation:(CLLocation *)arg1 ;
-(void)setSceneprintWithData:(id)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(BOOL)isSyncableChange;
-(void)truncatedOriginalCheckChangedValues:(id)arg1 ;
-(void)resetCloudRecoveryState;
-(NSString *)longDescription;
-(BOOL)hasCloudRecoveryStateFlagSet:(unsigned long long)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(void)setMediaMetadataData:(NSData *)arg1 ;
-(NSData *)mediaMetadataData;
-(CLLocation *)_cachedShiftedLocation;
-(BOOL)hasConsistentCloudState;
-(void)_setCachedShiftedLocation:(id)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)isUserInterfaceChange;
-(void)setCloudRecoveryStateFlag:(unsigned long long)arg1 ;
-(PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;
@end

