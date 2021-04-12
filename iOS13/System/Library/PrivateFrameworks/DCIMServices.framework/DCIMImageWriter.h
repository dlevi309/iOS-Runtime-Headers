/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
*/


#import <DCIMServices/DCIMServices-Structs.h>
@interface DCIMImageWriter : NSObject
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3 ;
+(id)defaultFileExtensionForAssetType:(short)arg1 ;
+(id)incomingDirectoryPathForPhotoStream;
+(id)incomingDirectoryPath;
+(id)sharedDCIMWriter;
+(id)preferredFileExtensionForType:(id)arg1 ;
+(void)writeableDataForImageData:(id)arg1 imageUTIType:(CFStringRef)arg2 thumbnailDataOut:(id*)arg3 imageUTITypeOut:(id*)arg4 exifPropertiesOut:(id*)arg5 isJPEGOut:(BOOL*)arg6 imageDataOut:(id*)arg7 ;
+(void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(CFStringRef)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id*)arg7 imageUTITypeOut:(id*)arg8 exifPropertiesOut:(id*)arg9 isJPEGOut:(BOOL*)arg10 imageDataOut:(id*)arg11 ;
+(id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg1 ;
+(id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg1 ;
+(BOOL)isLivePhotoFilteredVideoPath:(id)arg1 ;
-(BOOL)saveImageJobToDisk:(id)arg1 ;
-(int)copyPrimaryFormatImageData:(id)arg1 toURL:(id)arg2 properties:(id)arg3 ;
-(BOOL)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 ;
-(id)_cameraAssetExtensionForType:(short)arg1 ;
-(BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 ;
-(void)_writeJPEGFromIOSurface:(IOSurfaceRef)arg1 toPath:(id)arg2 orientation:(long long)arg3 ;
@end

