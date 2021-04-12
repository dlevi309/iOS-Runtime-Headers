/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface ExtraCompositionItem : MovieCompositionItem
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 paddedFromTime:(SCD_Struct_PM5)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM6)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(id)initWithClip:(id)arg1 ;
@end

