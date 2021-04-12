/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSString, AVMutableCompositionTrack, NSMutableArray, AVMutableAudioMixInputParameters, NSDictionary, AVMutableComposition, NSArray;

@interface CompositionTrackGroup : NSObject {

	NSString* m_groupLabel;
	AVMutableCompositionTrack* m_videoTrack;
	NSMutableArray* m_videoSegments;
	AVMutableAudioMixInputParameters* m_audioInputParameters;
	AVMutableCompositionTrack* m_audioTrack;
	NSMutableArray* m_audioSegments;
	SCD_Struct_PM5 m_cursor;
	SCD_Struct_PM5 m_cursorForMovieAudio;
	BOOL m_videoTrackInUse;
	BOOL m_shouldAddVolumePointsAsWorkaround;
	SCD_Struct_PM5 m_cursorAtLastVideoInsertion;
	SCD_Struct_PM5 m_timeOfLastVolumeChange;
	float m_volumeAtLastVolumeChange;
	float m_volumeChangePending;
	SCD_Struct_PM5 m_timeOfLastRequest;
	BOOL _isExporting;
	BOOL _seenSpeedClip;
	BOOL _seenMoreThanOneASBD;
	BOOL _isFlexMusic;
	NSDictionary* m_flexTrackInfoDict;
	NSString* _preferredAudioTimePitchAlgorithm;
	AVMutableComposition* _composition;
	NSString* _timePitchAlgorithm;
	NSMutableArray* _extraAudioTrackGroups;
	opaqueCMFormatDescriptionRef _audioFormatDescription;
	SCD_Struct_PM5 m_fadeOutStart;
	SCD_Struct_PM5 m_fadeOutDuration;
	SCD_Struct_PM5 _lastRampToZeroEnd;

}

@property (assign,nonatomic) NSString * timePitchAlgorithm;                                    //@synthesize timePitchAlgorithm=_timePitchAlgorithm - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraAudioTrackGroups;                           //@synthesize extraAudioTrackGroups=_extraAudioTrackGroups - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef audioFormatDescription;              //@synthesize audioFormatDescription=_audioFormatDescription - In the implementation block
@property (assign,nonatomic) BOOL seenSpeedClip;                                               //@synthesize seenSpeedClip=_seenSpeedClip - In the implementation block
@property (assign,nonatomic) BOOL seenMoreThanOneASBD;                                         //@synthesize seenMoreThanOneASBD=_seenMoreThanOneASBD - In the implementation block
@property (nonatomic,retain) AVMutableAudioMixInputParameters * audioParameters; 
@property (nonatomic,retain) NSDictionary * fmTrackInfoDict; 
@property (assign,nonatomic) SCD_Struct_PM5 lastRampToZeroEnd;                                 //@synthesize lastRampToZeroEnd=_lastRampToZeroEnd - In the implementation block
@property (assign,nonatomic) BOOL isFlexMusic;                                                 //@synthesize isFlexMusic=_isFlexMusic - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) AVMutableCompositionTrack * videoTrack; 
@property (nonatomic,readonly) NSArray * videoSegments; 
@property (nonatomic,retain) AVMutableCompositionTrack * audioTrack; 
@property (nonatomic,readonly) NSArray * audioSegments; 
@property (nonatomic,retain) NSString * preferredAudioTimePitchAlgorithm;                      //@synthesize preferredAudioTimePitchAlgorithm=_preferredAudioTimePitchAlgorithm - In the implementation block
@property (nonatomic,readonly) int actualVideoTrackID; 
@property (nonatomic,readonly) int usableVideoTrackID; 
@property (nonatomic,readonly) SCD_Struct_PM5 cursor; 
@property (nonatomic,readonly) SCD_Struct_PM5 cursorAtLastVideoInsertion; 
@property (assign,nonatomic) SCD_Struct_PM5 timeOfLastVolumeChange; 
@property (assign,nonatomic) SCD_Struct_PM5 timeOfLastRequest; 
@property (assign,nonatomic) float volumeAtLastVolumeChange; 
@property (assign,nonatomic) float volumeChangePending; 
@property (assign,nonatomic) SCD_Struct_PM5 fadeOutStart; 
@property (assign,nonatomic) SCD_Struct_PM5 fadeOutDuration; 
@property (nonatomic,retain) AVMutableComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                 //@synthesize isExporting=_isExporting - In the implementation block
+(id)visualDescriptionForSegments:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(SCD_Struct_PM5)cursor;
-(void)setLabel:(NSString *)arg1 ;
-(void)apply:(id)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(AVMutableAudioMixInputParameters *)audioParameters;
-(void)setFadeOutDuration:(SCD_Struct_PM5)arg1 ;
-(SCD_Struct_PM5)fadeOutDuration;
-(BOOL)validate;
-(AVMutableComposition *)composition;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(NSArray *)videoSegments;
-(AVMutableCompositionTrack *)videoTrack;
-(void)setVideoTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)markDirty;
-(BOOL)isExporting;
-(void)setAudioTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)setFadeOutStart:(SCD_Struct_PM5)arg1 ;
-(int)actualVideoTrackID;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_PM6)arg3 ;
-(BOOL)requestVolume:(float)arg1 atTime:(SCD_Struct_PM5)arg2 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_PM6)arg3 fillEmptySegment:(BOOL)arg4 ;
-(AVMutableCompositionTrack *)audioTrack;
-(BOOL)commitPendingVolumeToTime:(SCD_Struct_PM5)arg1 ;
-(void)applyPaddingToTime:(SCD_Struct_PM5)arg1 ;
-(void)applyAudioMixParameters:(id)arg1 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(SCD_Struct_PM6)arg2 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_PM5)arg2 ;
-(void)setPreferredAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setIsExporting:(BOOL)arg1 ;
-(int)usableVideoTrackID;
-(void)setAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)removeExtraAudioTrackGroups;
-(BOOL)containsVideoSegments;
-(BOOL)containsAudioSegments;
-(void)setSeenSpeedClip:(BOOL)arg1 ;
-(void)setSeenMoreThanOneASBD:(BOOL)arg1 ;
-(void)resetVolumeState;
-(NSMutableArray *)extraAudioTrackGroups;
-(void)setExtraAudioTrackGroups:(NSMutableArray *)arg1 ;
-(void)_updateIsFlexMusic:(id)arg1 ;
-(SCD_Struct_PM5)lastRampToZeroEnd;
-(NSString *)preferredAudioTimePitchAlgorithm;
-(id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3 ;
-(void)apply_version2:(id)arg1 ;
-(void)setAudioParameters:(AVMutableAudioMixInputParameters *)arg1 ;
-(void)setTimeOfLastVolumeChange:(SCD_Struct_PM5)arg1 ;
-(void)setVolumeAtLastVolumeChange:(float)arg1 ;
-(void)setVolumeChangePending:(float)arg1 ;
-(void)setTimeOfLastRequest:(SCD_Struct_PM5)arg1 ;
-(void)setLastRampToZeroEnd:(SCD_Struct_PM5)arg1 ;
-(SCD_Struct_PM5)fadeOutStart;
-(float)linearFadeOutValueForTime:(SCD_Struct_PM5)arg1 ;
-(float)volumeAtLastVolumeChange;
-(SCD_Struct_PM5)timeOfLastVolumeChange;
-(BOOL)isFlexMusic;
-(float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_PM6)arg3 ;
-(float)volumeChangePending;
-(void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_PM6)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg1 ;
-(BOOL)containsSegments;
-(void)addExtraAudioTrackGroup:(id)arg1 ;
-(BOOL)asbd:(opaqueCMFormatDescriptionRef)arg1 isEqualTo:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)applyCompositionItem:(id)arg1 ;
-(void)apply_version1;
-(NSArray *)audioSegments;
-(SCD_Struct_PM5)cursorAtLastVideoInsertion;
-(SCD_Struct_PM5)timeOfLastRequest;
-(NSString *)timePitchAlgorithm;
-(void)setTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)seenSpeedClip;
-(BOOL)seenMoreThanOneASBD;
-(NSDictionary *)fmTrackInfoDict;
-(void)setFmTrackInfoDict:(NSDictionary *)arg1 ;
-(void)setIsFlexMusic:(BOOL)arg1 ;
-(BOOL)shouldAddVolumePointsAsWorkaround;
-(void)applyCompositionItem:(id)arg1 videoOnly:(BOOL)arg2 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_PM5)arg2 videoOnly:(BOOL)arg3 ;
-(void)applyFlexAudioMix:(id)arg1 ;
-(void)fixAVFoundationsMistake;
@end

