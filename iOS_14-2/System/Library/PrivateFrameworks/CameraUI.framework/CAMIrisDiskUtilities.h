/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMIrisDiskUtilities : NSObject
+(BOOL)hasPendingWork;
+(id)videoPathExtension;
+(id)irisVideoDirectoryPath;
+(id)irisVideoDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)_substituteForDotInBundleIdentifier;
+(id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(BOOL)arg3 bundleIdentifier:(id)arg4 ;
+(id)_delimiterForFilenames;
+(BOOL)isValidVideoDestinationPath:(id)arg1 ;
+(BOOL)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id*)arg2 videoPersistenceUUID:(id*)arg3 captureDevice:(long long*)arg4 captureOrientation:(long long*)arg5 captureTime:(double*)arg6 persistenceOptions:(long long*)arg7 temporaryPersistenceOptions:(long long*)arg8 bundleIdentifier:(id*)arg9 filterName:(id*)arg10 ;
@end

