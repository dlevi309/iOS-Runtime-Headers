/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

@interface MovieCompositionItem : CompositionItem {

	AVAsset* m_asset;
	AVURLAsset* m_audioProxyAsset;

}

@property (nonatomic,retain) AVAsset * asset; 
@property (nonatomic,retain) AVURLAsset * audioProxyAsset; 
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(id)audioAsset;
-(id)speedRangesForSourceRange:(SCD_Struct_PM6)arg1 destinationRange:(SCD_Struct_PM6)arg2 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_PM6)arg2 destinationRange:(SCD_Struct_PM6)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 paddedFromTime:(SCD_Struct_PM5)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM6)arg1 ;
-(SCD_Struct_PM6)applySpeed:(SCD_Struct_PM6)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
@end

