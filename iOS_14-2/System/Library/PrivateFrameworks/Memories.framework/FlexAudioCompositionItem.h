/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (nonatomic,retain) FlexAudioClip * clip; 
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)trackInfoDict;
-(id)segmentsForFMTrack:(id)arg1 andTimeRange:(SCD_Struct_PM9)arg2 ;
-(id)audioTrackSegmentsForDestinationTime:(SCD_Struct_PM8)arg1 ;
@end

