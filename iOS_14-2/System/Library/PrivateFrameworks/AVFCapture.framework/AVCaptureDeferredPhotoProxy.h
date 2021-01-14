/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCapturePhoto.h>

@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {

	NSString* _captureRequestIdentifier;
	NSString* _photoIdentifier;

}

@property (copy,readonly) NSString * persistentStorageUUID;              //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (readonly) NSString * deferredPhotoIdentifier; 
-(NSString *)persistentStorageUUID;
-(id)debugDescription;
-(id)captureRequestIdentifier;
-(NSString *)deferredPhotoIdentifier;
-(id)initWithDeferredPhotoIdentifier:(id)arg1 ;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 proxySurface:(IOSurfaceRef)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned)arg12 sourceDeviceType:(id)arg13 ;
-(id)description;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

