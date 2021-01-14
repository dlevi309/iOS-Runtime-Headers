/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface MiroSmartMusicUtilities : NSObject
+(double)normalizeGainForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_PM8)arg1 fromMetadataItems:(id)arg2 findNearest:(BOOL)arg3 ;
+(id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4 ;
+(double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1 ;
+(id)_peakAndLoudnessForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_PM8)arg1 fromMetadataItems:(id)arg2 ;
+(SCD_Struct_PM8)averageBarDurationForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_PM8)durationOfOutroForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_PM8)durationOfIntroForFlexAudioClip:(id)arg1 ;
@end

