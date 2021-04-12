/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLAssetSharingUtilities : NSObject
+(CGImageRef)thumbnailForAssetURL:(id)arg1 library:(id)arg2 ;
+(CGImageRef)aspectRatioThumbnailForAssetURL:(id)arg1 library:(id)arg2 ;
+(CGImageRef)_thumbnailForAssetURL:(id)arg1 library:(id)arg2 useAspect:(BOOL)arg3 ;
+(id)filePathForVideoURL:(id)arg1 library:(id)arg2 outMetadata:(id*)arg3 ;
+(long long)estimatedOutputFileLengthForVideoURL:(id)arg1 library:(id)arg2 fallbackFilePath:(id)arg3 exportPreset:(id)arg4 exportProperties:(id)arg5 ;
+(long long)estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(double)_durationForVideoAssetURL:(id)arg1 library:(id)arg2 ;
+(double)_durationForVideoFilePath:(id)arg1 ;
+(long long)_estimatedOutputFileLengthForDuration:(double)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 ;
+(id)_objectBuilderFromVideoFilePath:(id)arg1 metadata:(id)arg2 ;
+(id)exportSessionForVideoURL:(id)arg1 library:(id)arg2 fallbackFilePath:(id)arg3 exportPreset:(id)arg4 ;
+(id)exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 ;
+(id)playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 library:(id)arg3 ;
+(id)_playerItemForVideoAssetURL:(id)arg1 library:(id)arg2 ;
+(id)playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2 ;
+(id)assetForVideoURL:(id)arg1 metadata:(id)arg2 library:(id)arg3 outAudioMix:(id*)arg4 outVideoComposition:(id*)arg5 ;
@end

