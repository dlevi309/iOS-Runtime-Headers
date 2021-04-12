/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFSlowMotionUtilities : NSObject
+(id)sharedConfiguration;
+(int)preferredTimeScale;
+(id)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF4)arg3 forExport:(BOOL)arg4 ;
+(SCD_Struct_PF4)adjustTimeRange:(SCD_Struct_PF4)arg1 forNewStartTime:(SCD_Struct_PF3)arg2 endTime:(SCD_Struct_PF3)arg3 ;
+(id)slowMotionSourceAssetPropertyKeys;
+(id)assetFromVideoAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF4)arg3 forExport:(BOOL)arg4 outAudioMix:(id*)arg5 outTimeRangeMapper:(id*)arg6 ;
+(BOOL)_isValidSlowMotionRate:(float)arg1 ;
+(BOOL)_isValidSlowMotionTimeRange:(SCD_Struct_PF4)arg1 ;
+(id)_scaledCompositionForAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(SCD_Struct_PF4)arg3 forExport:(BOOL)arg4 outTimeRangeMapper:(id*)arg5 ;
+(id)_slowMotionRegionsFromSlowMotionTimeRange:(SCD_Struct_PF4)arg1 ;
+(BOOL)_scaleComposition:(id)arg1 baseDuration:(double)arg2 slowMotionRate:(float)arg3 slowMotionRegions:(id)arg4 forExport:(BOOL)arg5 outTimeRangeMapper:(id*)arg6 ;
+(double)_scaleWithinComposition:(id)arg1 fromCursor:(double)arg2 timeStep:(double)arg3 rate:(float)arg4 timeRangeMapper:(id)arg5 ;
+(void)configureExportSession:(id)arg1 forcePreciseConversion:(BOOL)arg2 ;
+(id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2 ;
+(id)_setVolume:(float)arg1 forSlowMotionRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3 ;
+(SCD_Struct_PF4)_timeRangeFromTime:(float)arg1 toTime:(float)arg2 ;
+(id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2 ;
@end

