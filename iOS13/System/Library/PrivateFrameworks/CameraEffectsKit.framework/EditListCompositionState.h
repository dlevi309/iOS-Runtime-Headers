/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JTCompositionTrackGroup, JTClip;

@interface EditListCompositionState : NSObject {

	BOOL _isLastClip;
	BOOL _clipRequiresCA;
	int _overlapLeft;
	int _overlapRight;
	int _audioStartOffset;
	int _audioEndOffset;
	JTCompositionTrackGroup* _currentTrackGroup;
	JTCompositionTrackGroup* _alternateTrackGroup;
	JTClip* _clip;
	SCD_Struct_JT16 _videoCompTimeRange;
	SCD_Struct_JT16 _audioCompTimeRange;

}

@property (nonatomic,retain) JTCompositionTrackGroup * currentTrackGroup;                //@synthesize currentTrackGroup=_currentTrackGroup - In the implementation block
@property (nonatomic,retain) JTCompositionTrackGroup * alternateTrackGroup;              //@synthesize alternateTrackGroup=_alternateTrackGroup - In the implementation block
@property (assign,nonatomic,__weak) JTClip * clip;                                       //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) int overlapLeft;                                            //@synthesize overlapLeft=_overlapLeft - In the implementation block
@property (assign,nonatomic) int overlapRight;                                           //@synthesize overlapRight=_overlapRight - In the implementation block
@property (assign,nonatomic) BOOL isLastClip;                                            //@synthesize isLastClip=_isLastClip - In the implementation block
@property (assign,nonatomic) BOOL clipRequiresCA;                                        //@synthesize clipRequiresCA=_clipRequiresCA - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT16 videoCompTimeRange;                         //@synthesize videoCompTimeRange=_videoCompTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT16 audioCompTimeRange;                         //@synthesize audioCompTimeRange=_audioCompTimeRange - In the implementation block
@property (assign,nonatomic) int audioStartOffset;                                       //@synthesize audioStartOffset=_audioStartOffset - In the implementation block
@property (assign,nonatomic) int audioEndOffset;                                         //@synthesize audioEndOffset=_audioEndOffset - In the implementation block
-(id)description;
-(JTClip *)clip;
-(void)setClip:(JTClip *)arg1 ;
-(int)audioStartOffset;
-(int)audioEndOffset;
-(JTCompositionTrackGroup *)currentTrackGroup;
-(JTCompositionTrackGroup *)alternateTrackGroup;
-(void)setCurrentTrackGroup:(JTCompositionTrackGroup *)arg1 ;
-(void)setAlternateTrackGroup:(JTCompositionTrackGroup *)arg1 ;
-(void)swapTrackGroup;
-(int)overlapLeft;
-(void)setOverlapLeft:(int)arg1 ;
-(int)overlapRight;
-(void)setOverlapRight:(int)arg1 ;
-(BOOL)isLastClip;
-(void)setIsLastClip:(BOOL)arg1 ;
-(BOOL)clipRequiresCA;
-(void)setClipRequiresCA:(BOOL)arg1 ;
-(SCD_Struct_JT16)videoCompTimeRange;
-(void)setVideoCompTimeRange:(SCD_Struct_JT16)arg1 ;
-(SCD_Struct_JT16)audioCompTimeRange;
-(void)setAudioCompTimeRange:(SCD_Struct_JT16)arg1 ;
-(void)setAudioStartOffset:(int)arg1 ;
-(void)setAudioEndOffset:(int)arg1 ;
@end

