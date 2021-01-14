/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXCompositionItem.h>

@class AVAsset;

@interface JFXMovieCompositionItem : JFXCompositionItem {

	int _audioAssetOverwriteStartOffset;
	AVAsset* _asset;
	AVAsset* _audioAssetOverwrite;

}

@property (nonatomic,retain) AVAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAsset * audioAssetOverwrite;                   //@synthesize audioAssetOverwrite=_audioAssetOverwrite - In the implementation block
@property (assign,nonatomic) int audioAssetOverwriteStartOffset;              //@synthesize audioAssetOverwriteStartOffset=_audioAssetOverwriteStartOffset - In the implementation block
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_JF4)arg2 destinationRange:(SCD_Struct_JF4)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JF4)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 paddedFromTime:(SCD_Struct_JF3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JF4)arg1 ;
-(AVAsset *)audioAssetOverwrite;
-(BOOL)needAudioLoop;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(id)speedRangesForSourceRange:(SCD_Struct_JF4)arg1 destinationRange:(SCD_Struct_JF4)arg2 ;
-(int)audioAssetOverwriteStartOffset;
-(SCD_Struct_JF4)applySpeed:(SCD_Struct_JF4)arg1 ;
-(void)setAudioAssetOverwrite:(AVAsset *)arg1 ;
-(void)setAudioAssetOverwriteStartOffset:(int)arg1 ;
@end

