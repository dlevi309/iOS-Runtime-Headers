/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface KenBurnsCompositionItem : MovieCompositionItem
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM9)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 paddedFromTime:(SCD_Struct_PM8)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM9)arg1 ;
-(id)initWithClip:(id)arg1 ;
@end

