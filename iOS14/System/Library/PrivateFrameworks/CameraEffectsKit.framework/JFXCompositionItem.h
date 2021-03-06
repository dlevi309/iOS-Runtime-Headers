/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXPlayableElement;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXCompositionItem : NSObject {

	BOOL _isFinalClip;
	BOOL _isFreezeFrame;
	BOOL _isWaitingForResource;
	float _speed;
	int _timeScale;
	id<JFXPlayableElement> _clip;
	SCD_Struct_JF3 _destinationDuration;
	SCD_Struct_JF3 _audioStartOffset;
	SCD_Struct_JF3 _audioEndOffset;
	SCD_Struct_JF4 _sourceTimeRange;

}

@property (nonatomic,retain) id<JFXPlayableElement> clip;                     //@synthesize clip=_clip - In the implementation block
@property (assign,nonatomic) BOOL isFinalClip;                                //@synthesize isFinalClip=_isFinalClip - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF4 sourceTimeRange;                  //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 destinationDuration;              //@synthesize destinationDuration=_destinationDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 audioStartOffset;                 //@synthesize audioStartOffset=_audioStartOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 audioEndOffset;                   //@synthesize audioEndOffset=_audioEndOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoContent; 
@property (nonatomic,readonly) BOOL isFreezeFrame;                            //@synthesize isFreezeFrame=_isFreezeFrame - In the implementation block
@property (assign,nonatomic) float speed;                                     //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) BOOL isWaitingForResource;                     //@synthesize isWaitingForResource=_isWaitingForResource - In the implementation block
@property (nonatomic,readonly) BOOL needSilenceAtEnd; 
@property (nonatomic,readonly) BOOL needAudioLoop; 
@property (assign,nonatomic) int timeScale;                                   //@synthesize timeScale=_timeScale - In the implementation block
+(id)silenceAsset;
+(id)compositionItemWithClip:(id)arg1 timeScale:(int)arg2 ;
+(void)mediaserverdCrashed;
-(id<JFXPlayableElement>)clip;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(int)timeScale;
-(id)debugDescription;
-(void)setTimeScale:(int)arg1 ;
-(id)description;
-(void)setClip:(id<JFXPlayableElement>)arg1 ;
-(void)setSourceTimeRange:(SCD_Struct_JF4)arg1 ;
-(SCD_Struct_JF4)sourceTimeRange;
-(void)dealloc;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)emptyTrackSegmentWithDestinationRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)isFinalClip;
-(id)emptyTrackSegmentWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)hasVideoContent;
-(BOOL)needSilenceAtEnd;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JF4)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JF3)arg1 paddedFromTime:(SCD_Struct_JF3)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JF4)arg1 ;
-(SCD_Struct_JF3)audioStartOffset;
-(void)setAudioStartOffset:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF3)audioEndOffset;
-(void)setAudioEndOffset:(SCD_Struct_JF3)arg1 ;
-(void)setIsFinalClip:(BOOL)arg1 ;
-(void)setDestinationDuration:(SCD_Struct_JF3)arg1 ;
-(BOOL)isWaitingForResource;
-(BOOL)needAudioLoop;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF3)destinationDuration;
-(BOOL)isFreezeFrame;
@end

