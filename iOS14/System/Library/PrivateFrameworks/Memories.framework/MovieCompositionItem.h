/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
-(id)audioAsset;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_PM9)arg2 destinationRange:(SCD_Struct_PM9)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM9)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM8)arg1 paddedFromTime:(SCD_Struct_PM8)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)speedRangesForSourceRange:(SCD_Struct_PM9)arg1 destinationRange:(SCD_Struct_PM9)arg2 ;
-(SCD_Struct_PM9)applySpeed:(SCD_Struct_PM9)arg1 ;
-(id)metaDataVideoAssetURL;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
@end

