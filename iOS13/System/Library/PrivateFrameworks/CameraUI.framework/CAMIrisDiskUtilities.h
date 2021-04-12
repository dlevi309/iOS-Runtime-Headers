/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMIrisDiskUtilities : NSObject
+(BOOL)hasPendingWork;
+(id)irisVideoDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)_substituteForDotInBundleIdentifier;
+(id)_delimiterForFilenames;
+(id)irisVideoDirectoryPath;
+(id)videoPathExtension;
+(BOOL)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id*)arg2 videoPersistenceUUID:(id*)arg3 captureDevice:(long long*)arg4 captureOrientation:(long long*)arg5 captureTime:(double*)arg6 persistenceOptions:(long long*)arg7 temporaryPersistenceOptions:(long long*)arg8 bundleIdentifier:(id*)arg9 filterName:(id*)arg10 ;
+(id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(BOOL)arg3 bundleIdentifier:(id)arg4 ;
+(BOOL)isValidVideoDestinationPath:(id)arg1 ;
@end

