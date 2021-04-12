/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class AVCapturePhoto, NSString, NSDate, NSDictionary, NSError, NSArray, CAMCaptureCoordinationInfo;

@interface CAMStillImageCaptureResult : NSObject {

	BOOL _shouldPersistAdjustmentSidecar;
	BOOL _expectingPairedVideo;
	IOSurfaceRef _stillImageFullsizeSurface;
	unsigned long long _stillImageFullsizeSurfaceSize;
	IOSurfaceRef _stillImageUnfilteredPreviewSurface;
	IOSurfaceRef _stillImageFilteredPreviewSurface;
	AVCapturePhoto* _capturePhoto;
	NSString* _deferredPhotoIdentifier;
	NSDate* _captureDate;
	NSDictionary* _metadata;
	NSError* _error;
	NSArray* _adjustmentFilters;
	NSString* _persistenceUUID;
	CAMCaptureCoordinationInfo* _coordinationInfo;

}

@property (nonatomic,readonly) IOSurfaceRef stillImageFullsizeSurface;                               //@synthesize stillImageFullsizeSurface=_stillImageFullsizeSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long stillImageFullsizeSurfaceSize;                     //@synthesize stillImageFullsizeSurfaceSize=_stillImageFullsizeSurfaceSize - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef stillImageUnfilteredPreviewSurface;                      //@synthesize stillImageUnfilteredPreviewSurface=_stillImageUnfilteredPreviewSurface - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef stillImageFilteredPreviewSurface;                        //@synthesize stillImageFilteredPreviewSurface=_stillImageFilteredPreviewSurface - In the implementation block
@property (nonatomic,readonly) AVCapturePhoto * capturePhoto;                                        //@synthesize capturePhoto=_capturePhoto - In the implementation block
@property (nonatomic,copy,readonly) NSString * deferredPhotoIdentifier;                              //@synthesize deferredPhotoIdentifier=_deferredPhotoIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * compactMetadata; 
@property (nonatomic,readonly) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistAdjustmentSidecar;                                  //@synthesize shouldPersistAdjustmentSidecar=_shouldPersistAdjustmentSidecar - In the implementation block
@property (nonatomic,readonly) NSArray * adjustmentFilters;                                          //@synthesize adjustmentFilters=_adjustmentFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;                        //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageGroupIdentifier; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;              //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(NSDictionary *)metadata;
-(NSDate *)captureDate;
-(NSString *)deferredPhotoIdentifier;
-(NSString *)imageGroupIdentifier;
-(BOOL)isExpectingPairedVideo;
-(NSString *)persistenceUUID;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(AVCapturePhoto *)capturePhoto;
-(id)initWithFullsizeSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(IOSurfaceRef)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 expectingPairedVideo:(BOOL)arg6 shouldPersistAdjustmentSidecar:(BOOL)arg7 adjustmentFilters:(id)arg8 persistenceUUID:(id)arg9 coordinationInfo:(id)arg10 error:(id)arg11 ;
-(IOSurfaceRef)stillImageFilteredPreviewSurface;
-(IOSurfaceRef)stillImageUnfilteredPreviewSurface;
-(IOSurfaceRef)stillImageFullsizeSurface;
-(unsigned long long)stillImageFullsizeSurfaceSize;
-(BOOL)shouldPersistAdjustmentSidecar;
-(NSArray *)adjustmentFilters;
-(id)compactMetadataWithSecondaryMakerNote:(id)arg1 ;
-(id)_captureDateFromMetadata:(id)arg1 ;
-(id)initWithCapturePhoto:(id)arg1 expectingPairedVideo:(BOOL)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 shouldPersistAdjustmentSidecar:(BOOL)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 error:(id)arg8 ;
-(id)initWithCaptureDeferredPhotoProxy:(id)arg1 expectingPairedVideo:(BOOL)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 shouldPersistAdjustmentSidecar:(BOOL)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 error:(id)arg8 ;
-(NSDictionary *)compactMetadata;
@end

