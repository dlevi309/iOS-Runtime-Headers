/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface JTFileManagementUtils : NSObject
+(id)temporaryPhotoURL:(id*)arg1 fileName:(id)arg2 ;
+(id)videoRecordingURL:(id*)arg1 ;
+(id)capturedPhotoURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)photoExportURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)videoExportURL:(id*)arg1 ;
+(id)_videoRecordingURL:(id*)arg1 ;
+(BOOL)_createDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_videoExportURL:(id*)arg1 ;
+(id)_capturedPhotoURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)_photoExportURL:(id*)arg1 isHEIF:(BOOL)arg2 ;
+(id)_temporaryPhotoURL:(id*)arg1 fileName:(id)arg2 ;
+(id)_audioRecordingURL:(id*)arg1 ;
+(id)cachedExportFilePath:(id*)arg1 ;
+(void)_cleanupDirectory:(id)arg1 ;
+(id)_tempFileURLWithDirectory:(id)arg1 file:(id)arg2 error:(id*)arg3 ;
+(id)audioRecordingURL:(id*)arg1 ;
+(void)cleanupOldProjects;
+(void)cleanupTemporaryDirectories;
+(BOOL)ODRAssetsAreEmbedded;
@end

