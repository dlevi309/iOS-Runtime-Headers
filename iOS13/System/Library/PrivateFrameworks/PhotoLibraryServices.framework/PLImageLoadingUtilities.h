/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLImageLoadingUtilities : NSObject
+(id)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
+(BOOL)canAccessImageForAsset:(id)arg1 ;
+(id)newImageDataForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9 ;
+(void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 sync:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
+(void)imageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 sync:(BOOL)arg10 ;
+(id)synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const _CFDictionary*)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10 ;
@end

