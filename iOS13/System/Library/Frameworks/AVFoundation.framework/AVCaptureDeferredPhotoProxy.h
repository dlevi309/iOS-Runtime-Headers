/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCapturePhoto.h>

@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {

	NSString* _captureRequestIdentifier;
	NSString* _photoIdentifier;

}

@property (copy,readonly) NSString * persistentStorageUUID;              //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (readonly) NSString * deferredPhotoIdentifier; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)initWithTimestamp:(SCD_Struct_AV7)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned)arg4 ;
-(id)captureRequestIdentifier;
-(NSString *)persistentStorageUUID;
-(NSString *)deferredPhotoIdentifier;
-(id)initWithTimestamp:(SCD_Struct_AV7)arg1 proxySurface:(IOSurfaceRef)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned)arg12 sourceDeviceType:(id)arg13 ;
-(id)initWithDeferredPhotoIdentifier:(id)arg1 ;
@end

