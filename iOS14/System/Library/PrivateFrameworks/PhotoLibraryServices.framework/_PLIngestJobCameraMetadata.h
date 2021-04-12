/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSData, NSArray, VNImageAestheticsObservation, PFCameraMetadata;

@interface _PLIngestJobCameraMetadata : NSObject {

	BOOL _hasDeserializedMetadata;
	NSString* _cameraMetadataPath;
	NSString* _overCaptureMetadataPath;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;
	NSData* _sceneprintData;
	NSArray* _junkImageClassificationObservations;
	VNImageAestheticsObservation* _imageAestheticsObservation;
	PFCameraMetadata* _cameraMetadata;
	PFCameraMetadata* _overCaptureCameraMetadata;

}

@property (nonatomic,readonly) PFCameraMetadata * cameraMetadata;                         //@synthesize cameraMetadata=_cameraMetadata - In the implementation block
@property (nonatomic,readonly) PFCameraMetadata * overCaptureCameraMetadata;              //@synthesize overCaptureCameraMetadata=_overCaptureCameraMetadata - In the implementation block
-(id)initWithCameraMetadataPath:(id)arg1 overCaptureMetadataPath:(id)arg2 ;
-(void)_deserializeCameraMetadata;
-(void)applyCameraMetadataToAsset:(id)arg1 ;
-(void)applyCameraMetadataToSpatialOverCaptureAsset:(id)arg1 ;
-(PFCameraMetadata *)cameraMetadata;
-(PFCameraMetadata *)overCaptureCameraMetadata;
@end

