/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol JFXPlayableElement;
#import <Memories/Memories-Structs.h>
@class JFXCompositionTrackGroup;

@interface EditListCompositionState : NSObject {

	BOOL _isLastClip;
	BOOL _clipRequiresCA;
	int _overlapLeft;
	int _overlapRight;
	int _audioStartOffset;
	int _audioEndOffset;
	JFXCompositionTrackGroup* _currentTrackGroup;
	JFXCompositionTrackGroup* _alternateTrackGroup;
	id<JFXPlayableElement> _clip;
	SCD_Struct_PM9 _videoCompTimeRange;
	SCD_Struct_PM9 _audioCompTimeRange;

}

@property (nonatomic,retain) JFXCompositionTrackGroup * currentTrackGroup;                //@synthesize currentTrackGroup=_currentTrackGroup - In the implementation block
@property (nonatomic,retain) JFXCompositionTrackGroup * alternateTrackGroup;              //@synthesize alternateTrackGroup=_alternateTrackGroup - In the implementation block
@property (assign,nonatomic,__weak) id<JFXPlayableElement> clip;                          //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) int overlapLeft;                                             //@synthesize overlapLeft=_overlapLeft - In the implementation block
@property (assign,nonatomic) int overlapRight;                                            //@synthesize overlapRight=_overlapRight - In the implementation block
@property (assign,nonatomic) BOOL isLastClip;                                             //@synthesize isLastClip=_isLastClip - In the implementation block
@property (assign,nonatomic) BOOL clipRequiresCA;                                         //@synthesize clipRequiresCA=_clipRequiresCA - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM9 videoCompTimeRange;                           //@synthesize videoCompTimeRange=_videoCompTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM9 audioCompTimeRange;                           //@synthesize audioCompTimeRange=_audioCompTimeRange - In the implementation block
@property (assign,nonatomic) int audioStartOffset;                                        //@synthesize audioStartOffset=_audioStartOffset - In the implementation block
@property (assign,nonatomic) int audioEndOffset;                                          //@synthesize audioEndOffset=_audioEndOffset - In the implementation block
-(id<JFXPlayableElement>)clip;
-(id)description;
-(void)setClip:(id<JFXPlayableElement>)arg1 ;
-(JFXCompositionTrackGroup *)currentTrackGroup;
-(JFXCompositionTrackGroup *)alternateTrackGroup;
-(void)setCurrentTrackGroup:(JFXCompositionTrackGroup *)arg1 ;
-(void)setAlternateTrackGroup:(JFXCompositionTrackGroup *)arg1 ;
-(void)swapTrackGroup;
-(int)overlapLeft;
-(void)setOverlapLeft:(int)arg1 ;
-(int)overlapRight;
-(void)setOverlapRight:(int)arg1 ;
-(BOOL)isLastClip;
-(void)setIsLastClip:(BOOL)arg1 ;
-(BOOL)clipRequiresCA;
-(void)setClipRequiresCA:(BOOL)arg1 ;
-(SCD_Struct_PM9)videoCompTimeRange;
-(void)setVideoCompTimeRange:(SCD_Struct_PM9)arg1 ;
-(SCD_Struct_PM9)audioCompTimeRange;
-(void)setAudioCompTimeRange:(SCD_Struct_PM9)arg1 ;
-(int)audioStartOffset;
-(void)setAudioStartOffset:(int)arg1 ;
-(int)audioEndOffset;
-(void)setAudioEndOffset:(int)arg1 ;
@end

