/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class AVCapturePhoto, NSString, NSDate, NSDictionary, NSError, NSArray, CAMCaptureCoordinationInfo;

@interface CAMStillImageCaptureResult : NSObject {

	BOOL _shouldPersistAdjustmentSidecar;
	BOOL _representsDeferredFilteredProxy;
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
	long long _semanticEnhancement;

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
@property (nonatomic,readonly) BOOL representsDeferredFilteredProxy;                                 //@synthesize representsDeferredFilteredProxy=_representsDeferredFilteredProxy - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;                        //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageGroupIdentifier; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;              //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
@property (nonatomic,readonly) long long semanticEnhancement;                                        //@synthesize semanticEnhancement=_semanticEnhancement - In the implementation block
-(AVCapturePhoto *)capturePhoto;
-(NSArray *)adjustmentFilters;
-(id)initWithCapturePhoto:(id)arg1 expectingPairedVideo:(BOOL)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 shouldPersistAdjustmentSidecar:(BOOL)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 semanticEnhancement:(long long)arg8 error:(id)arg9 ;
-(NSError *)error;
-(NSDate *)captureDate;
-(id)initWithCaptureDeferredPhotoProxy:(id)arg1 expectingPairedVideo:(BOOL)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 shouldPersistAdjustmentSidecar:(BOOL)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 semanticEnhancement:(long long)arg8 error:(id)arg9 ;
-(NSString *)deferredPhotoIdentifier;
-(unsigned long long)stillImageFullsizeSurfaceSize;
-(id)description;
-(IOSurfaceRef)stillImageFullsizeSurface;
-(id)initWithFullsizeSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(IOSurfaceRef)arg3 filteredPreviewSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 expectingPairedVideo:(BOOL)arg6 shouldPersistAdjustmentSidecar:(BOOL)arg7 adjustmentFilters:(id)arg8 persistenceUUID:(id)arg9 coordinationInfo:(id)arg10 error:(id)arg11 ;
-(IOSurfaceRef)stillImageUnfilteredPreviewSurface;
-(IOSurfaceRef)stillImageFilteredPreviewSurface;
-(id)_captureDateFromMetadata:(id)arg1 ;
-(BOOL)shouldPersistAdjustmentSidecar;
-(NSDictionary *)compactMetadata;
-(NSString *)persistenceUUID;
-(id)compactMetadataWithSecondaryMakerNote:(id)arg1 ;
-(long long)semanticEnhancement;
-(NSString *)imageGroupIdentifier;
-(BOOL)representsDeferredFilteredProxy;
-(NSDictionary *)metadata;
-(BOOL)isExpectingPairedVideo;
-(void)dealloc;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
@end

