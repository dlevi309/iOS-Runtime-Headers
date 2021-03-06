/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL14)arg3 endTime:(SCD_Struct_PL14)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
@end

