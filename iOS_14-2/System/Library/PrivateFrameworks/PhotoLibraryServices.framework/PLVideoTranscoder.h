/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL14)arg3 endTime:(SCD_Struct_PL14)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
@end

