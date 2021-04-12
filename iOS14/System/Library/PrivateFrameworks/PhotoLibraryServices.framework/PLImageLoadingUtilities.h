/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLImageLoadingUtilities : NSObject
+(void)imageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 sync:(BOOL)arg10 ;
+(id)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
+(id)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const _CFDictionary*)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10 ;
+(BOOL)canAccessImageForAsset:(id)arg1 ;
+(void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 sync:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
@end

