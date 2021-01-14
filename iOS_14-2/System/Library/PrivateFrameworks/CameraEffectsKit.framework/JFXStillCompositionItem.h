/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXMovieCompositionItem.h>

@interface JFXStillCompositionItem : JFXMovieCompositionItem
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)hasVideoContent;
-(BOOL)needSilenceAtEnd;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JF4)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 paddedFromTime:(SCD_Struct_JF3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JF4)arg1 ;
@end

