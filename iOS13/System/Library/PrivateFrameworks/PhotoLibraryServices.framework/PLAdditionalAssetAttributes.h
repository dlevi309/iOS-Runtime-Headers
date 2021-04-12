/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLPTPTransferableAdditionalAssetAttributes.h>

@class NSString, NSNumber, PLSpatialOverCaptureInformation, CLLocation, NSData, PLSceneprint, NSDate, PLManagedAsset, NSSet, PLUnmanagedAdjustment, PLAssetDescription, NSManagedObject, PLEditedIPTCAttributes;

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes> {

	CLLocation* __cachedShiftedLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,retain,readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@property (nonatomic,retain) NSString * longDescription; 
@property (nonatomic,retain) NSData * mediaMetadataData; 
@property (nonatomic,retain) PLSceneprint * sceneprint; 
@property (assign,nonatomic) short destinationAssetCopyState; 
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
@property (nonatomic,retain) NSDate * lastUploadAttemptDate; 
@property (nonatomic,retain) NSNumber * uploadAttempts; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) NSSet * keywords; 
@property (nonatomic,retain) PLUnmanagedAdjustment * unmanagedAdjustment; 
@property (nonatomic,retain) NSNumber * locationHash; 
@property (nonatomic,retain) PLAssetDescription * assetDescription; 
@property (nonatomic,retain) NSData * faceRegions; 
@property (nonatomic,retain) NSSet * personReferences; 
@property (assign,nonatomic) short cameraCaptureDevice; 
@property (nonatomic,copy) NSString * originatingAssetIdentifier; 
@property (nonatomic,copy) NSString * snowplowGroupUUID; 
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
@property (nonatomic,copy) NSString * snowdayIdentifier; 
@property (nonatomic,copy) NSString * snowdaySnowplowIdentifier; 
@property (nonatomic,retain) NSManagedObject * mediaMetadata; 
@property (nonatomic,retain) NSString * mediaMetadataType; 
@property (nonatomic,retain) NSString * photoStreamTagId; 
@property (nonatomic,retain) NSSet * sceneClassifications; 
@property (assign,nonatomic) short sceneAnalysisVersion; 
@property (nonatomic,retain) NSDate * sceneAnalysisTimestamp; 
@property (nonatomic,retain) NSData * distanceIdentity; 
@property (assign,nonatomic) int cloudAvalanchePickType; 
@property (assign,nonatomic) short cloudKindSubtype; 
@property (assign,nonatomic) long long cloudGroupingState; 
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
+(id)entityName;
+(id)listOfSyncedProperties;
+(void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(SCD_Struct_PL14*)arg2 videoDuration:(SCD_Struct_PL14*)arg3 ;
+(id)newExtraDurationDataFromStillDisplayTime:(SCD_Struct_PL14)arg1 videoDuration:(SCD_Struct_PL14)arg2 ;
+(id)descriptionForDestinationAssetCopyState:(short)arg1 ;
-(void)willSave;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(NSString *)longDescription;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isSyncableChange;
-(void)setSceneprintWithData:(id)arg1 ;
-(void)setMediaMetadataData:(NSData *)arg1 ;
-(CLLocation *)shiftedLocation;
-(void)setShiftedLocation:(CLLocation *)arg1 ;
-(void)setShiftedLocationIsValid:(BOOL)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;
-(NSData *)mediaMetadataData;
-(void)setCloudRecoveryStateFlag:(unsigned long long)arg1 ;
-(void)removeCloudRecoveryStateFlag:(unsigned long long)arg1 ;
-(BOOL)hasCloudRecoveryStateFlagSet:(unsigned long long)arg1 ;
-(BOOL)hasConsistentCloudState;
-(BOOL)isUserInterfaceChange;
-(void)truncatedOriginalCheckChangedValues:(id)arg1 ;
-(CLLocation *)_cachedShiftedLocation;
-(void)_setCachedShiftedLocation:(id)arg1 ;
-(void)resetCloudRecoveryState;
@end

