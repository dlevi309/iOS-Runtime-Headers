/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (nonatomic,retain) FlexAudioClip * clip; 
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM6)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)trackInfoDict;
-(id)segmentsForFMTrack:(id)arg1 andTimeRange:(SCD_Struct_PM6)arg2 ;
-(id)audioTrackSegmentsForDestinationTime:(SCD_Struct_PM5)arg1 ;
@end

