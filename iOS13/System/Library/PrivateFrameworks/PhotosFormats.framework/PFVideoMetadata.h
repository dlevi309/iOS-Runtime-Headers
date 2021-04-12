/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@interface PFVideoMetadata : NSObject
+(BOOL)videoAssetIsPlayable:(id)arg1 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromAVAsset:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(id)metadataItemsWithMetadataType:(unsigned char)arg1 value:(id)arg2 error:(id*)arg3 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)hasValidMetadataForLoopingVideoAsset:(id)arg1 ;
+(id)metadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)quickTimeMetadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 ;
+(id)quickTimeMetadataItemsWithKey:(id)arg1 value:(id)arg2 ;
+(id)arrayByRemovingMetadataItemOfType:(unsigned char)arg1 fromArray:(id)arg2 error:(id*)arg3 ;
+(BOOL)videoAssetIsDecodable:(id)arg1 ;
+(BOOL)videoAssetIsHighDynamicRange:(id)arg1 ;
+(void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

