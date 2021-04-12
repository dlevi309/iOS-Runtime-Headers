/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTCompositionItem.h>

@class AVAsset;

@interface JTMovieCompositionItem : JTCompositionItem {

	int _audioAssetOverwriteStartOffset;
	AVAsset* _asset;
	AVAsset* _audioAssetOverwrite;

}

@property (nonatomic,retain) AVAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAsset * audioAssetOverwrite;                   //@synthesize audioAssetOverwrite=_audioAssetOverwrite - In the implementation block
@property (assign,nonatomic) int audioAssetOverwriteStartOffset;              //@synthesize audioAssetOverwriteStartOffset=_audioAssetOverwriteStartOffset - In the implementation block
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(AVAsset *)audioAssetOverwrite;
-(id)speedRangesForSourceRange:(SCD_Struct_JT16)arg1 destinationRange:(SCD_Struct_JT16)arg2 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_JT16)arg2 destinationRange:(SCD_Struct_JT16)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 paddedFromTime:(SCD_Struct_JT6)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JT16)arg1 ;
-(int)audioAssetOverwriteStartOffset;
-(SCD_Struct_JT16)applySpeed:(SCD_Struct_JT16)arg1 ;
-(BOOL)hasVideoContent;
-(BOOL)needAudioLoop;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)videoTrackSegmentsLoopedWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(void)setAudioAssetOverwrite:(AVAsset *)arg1 ;
-(void)setAudioAssetOverwriteStartOffset:(int)arg1 ;
@end

