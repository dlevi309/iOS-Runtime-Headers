/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JTClip;

@interface JTCompositionItem : NSObject {

	BOOL _isFinalClip;
	BOOL _isMuted;
	BOOL _isFreezeFrame;
	BOOL _isWaitingForResource;
	float _speed;
	int _timeScale;
	JTClip* _clip;
	SCD_Struct_JT6 _destinationDuration;
	SCD_Struct_JT6 _audioStartOffset;
	SCD_Struct_JT6 _audioEndOffset;
	SCD_Struct_JT16 _sourceTimeRange;

}

@property (nonatomic,retain) JTClip * clip;                                   //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip;                                //@synthesize isFinalClip=_isFinalClip - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT16 sourceTimeRange;                 //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 destinationDuration;              //@synthesize destinationDuration=_destinationDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 audioStartOffset;                 //@synthesize audioStartOffset=_audioStartOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 audioEndOffset;                   //@synthesize audioEndOffset=_audioEndOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isMuted;                                  //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) BOOL isFreezeFrame;                            //@synthesize isFreezeFrame=_isFreezeFrame - In the implementation block
@property (assign,nonatomic) float speed;                                     //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) BOOL isWaitingForResource;                     //@synthesize isWaitingForResource=_isWaitingForResource - In the implementation block
@property (nonatomic,readonly) BOOL needSilenceAtEnd; 
@property (nonatomic,readonly) BOOL needAudioLoop; 
@property (assign,nonatomic) int timeScale;                                   //@synthesize timeScale=_timeScale - In the implementation block
+(id)compositionItemWithClip:(id)arg1 timeScale:(int)arg2 ;
+(id)silenceAsset;
+(void)mediaserverdCrashed;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(JTClip *)clip;
-(BOOL)isMuted;
-(void)setClip:(JTClip *)arg1 ;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(SCD_Struct_JT16)sourceTimeRange;
-(BOOL)isFreezeFrame;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 paddedFromTime:(SCD_Struct_JT6)arg2 ;
-(SCD_Struct_JT6)destinationDuration;
-(SCD_Struct_JT6)audioStartOffset;
-(SCD_Struct_JT6)audioEndOffset;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JT16)arg1 ;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(BOOL)hasVideoContent;
-(BOOL)needAudioLoop;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)videoTrackSegmentsLoopedWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(void)setAudioStartOffset:(SCD_Struct_JT6)arg1 ;
-(void)setAudioEndOffset:(SCD_Struct_JT6)arg1 ;
-(void)setIsFinalClip:(BOOL)arg1 ;
-(void)setSourceTimeRange:(SCD_Struct_JT16)arg1 ;
-(void)setDestinationDuration:(SCD_Struct_JT6)arg1 ;
-(BOOL)isWaitingForResource;
-(BOOL)isFinalClip;
-(BOOL)needSilenceAtEnd;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
@end

