/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTMovieCompositionItem.h>

@interface JTStillCompositionItem : JTMovieCompositionItem
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 paddedFromTime:(SCD_Struct_JT6)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JT16)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(BOOL)needSilenceAtEnd;
@end

