/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFVideoMetadata : NSObject
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)videoAssetIsHighDynamicRange:(id)arg1 ;
+(unsigned)videoCodecFourCharCodeNumberForAVAsset:(id)arg1 ;
+(void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)firstVideoTrackFormatDebugDescriptionForAsset:(id)arg1 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromAVAsset:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(BOOL)videoAssetIsPlayable:(id)arg1 ;
+(BOOL)hasValidMetadataForLoopingVideoAsset:(id)arg1 ;
+(id)metadataItemsWithMetadataType:(unsigned char)arg1 value:(id)arg2 error:(id*)arg3 ;
+(id)metadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)quickTimeMetadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 ;
+(id)quickTimeMetadataItemsWithKey:(id)arg1 value:(id)arg2 ;
+(id)arrayByRemovingMetadataItemOfType:(unsigned char)arg1 fromArray:(id)arg2 error:(id*)arg3 ;
+(BOOL)videoAssetIsDecodable:(id)arg1 ;
+(BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(opaqueCMFormatDescriptionRef)arg1 ;
+(BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(opaqueCMFormatDescriptionRef)arg1 ;
@end

