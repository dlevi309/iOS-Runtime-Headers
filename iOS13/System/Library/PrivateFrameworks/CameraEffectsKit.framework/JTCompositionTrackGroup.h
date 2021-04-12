/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSString, AVMutableCompositionTrack, NSMutableArray, AVMutableAudioMixInputParameters, AVMutableComposition, NSDictionary;

@interface JTCompositionTrackGroup : NSObject {

	BOOL _isExporting;
	BOOL _seenSpeedClip;
	BOOL _seenMoreThanOneASBD;
	BOOL _isFlexMusic;
	BOOL _videoTrackInUse;
	float _volumeAtLastVolumeChange;
	float _volumeChangePending;
	int _timeScale;
	NSString* _label;
	AVMutableCompositionTrack* _videoTrack;
	AVMutableCompositionTrack* _audioTrack;
	NSMutableArray* _audioSegments;
	AVMutableAudioMixInputParameters* _audioParameters;
	NSString* _preferredAudioTimePitchAlgorithm;
	AVMutableComposition* _composition;
	NSString* _timePitchAlgorithm;
	NSMutableArray* _extraAudioTrackGroups;
	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _fmTrackInfoDict;
	NSMutableArray* _videoSegments;
	SCD_Struct_JT6 _cursor;
	SCD_Struct_JT6 _cursorAtLastVideoInsertion;
	SCD_Struct_JT6 _timeOfLastVolumeChange;
	SCD_Struct_JT6 _timeOfLastRequest;
	SCD_Struct_JT6 _fadeOutStart;
	SCD_Struct_JT6 _fadeOutDuration;
	SCD_Struct_JT6 _lastRampToZeroEnd;
	SCD_Struct_JT6 _cursorForMovieAudio;

}

@property (assign,nonatomic) NSString * timePitchAlgorithm;                                    //@synthesize timePitchAlgorithm=_timePitchAlgorithm - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraAudioTrackGroups;                           //@synthesize extraAudioTrackGroups=_extraAudioTrackGroups - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef audioFormatDescription;              //@synthesize audioFormatDescription=_audioFormatDescription - In the implementation block
@property (assign,nonatomic) BOOL seenSpeedClip;                                               //@synthesize seenSpeedClip=_seenSpeedClip - In the implementation block
@property (assign,nonatomic) BOOL seenMoreThanOneASBD;                                         //@synthesize seenMoreThanOneASBD=_seenMoreThanOneASBD - In the implementation block
@property (nonatomic,retain) AVMutableAudioMixInputParameters * audioParameters;               //@synthesize audioParameters=_audioParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * fmTrackInfoDict;                                   //@synthesize fmTrackInfoDict=_fmTrackInfoDict - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 lastRampToZeroEnd;                                 //@synthesize lastRampToZeroEnd=_lastRampToZeroEnd - In the implementation block
@property (assign,nonatomic) BOOL isFlexMusic;                                                 //@synthesize isFlexMusic=_isFlexMusic - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JT6 cursorForMovieAudio;                             //@synthesize cursorForMovieAudio=_cursorForMovieAudio - In the implementation block
@property (assign,nonatomic) int timeScale;                                                    //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) BOOL videoTrackInUse;                                             //@synthesize videoTrackInUse=_videoTrackInUse - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoSegments;                                   //@synthesize videoSegments=_videoSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioSegments;                                   //@synthesize audioSegments=_audioSegments - In the implementation block
@property (nonatomic,copy) NSString * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) AVMutableCompositionTrack * videoTrack;                           //@synthesize videoTrack=_videoTrack - In the implementation block
@property (nonatomic,retain) AVMutableCompositionTrack * audioTrack;                           //@synthesize audioTrack=_audioTrack - In the implementation block
@property (nonatomic,retain) NSString * preferredAudioTimePitchAlgorithm;                      //@synthesize preferredAudioTimePitchAlgorithm=_preferredAudioTimePitchAlgorithm - In the implementation block
@property (nonatomic,readonly) int actualVideoTrackID; 
@property (nonatomic,readonly) int usableVideoTrackID; 
@property (nonatomic,readonly) SCD_Struct_JT6 cursor;                                          //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JT6 cursorAtLastVideoInsertion;                      //@synthesize cursorAtLastVideoInsertion=_cursorAtLastVideoInsertion - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 timeOfLastVolumeChange;                            //@synthesize timeOfLastVolumeChange=_timeOfLastVolumeChange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 timeOfLastRequest;                                 //@synthesize timeOfLastRequest=_timeOfLastRequest - In the implementation block
@property (assign,nonatomic) float volumeAtLastVolumeChange;                                   //@synthesize volumeAtLastVolumeChange=_volumeAtLastVolumeChange - In the implementation block
@property (assign,nonatomic) float volumeChangePending;                                        //@synthesize volumeChangePending=_volumeChangePending - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 fadeOutStart;                                      //@synthesize fadeOutStart=_fadeOutStart - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 fadeOutDuration;                                   //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                 //@synthesize isExporting=_isExporting - In the implementation block
+(id)visualDescriptionForSegments:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(SCD_Struct_JT6)cursor;
-(void)setLabel:(NSString *)arg1 ;
-(void)apply:(id)arg1 ;
-(NSString *)label;
-(AVMutableAudioMixInputParameters *)audioParameters;
-(void)setFadeOutDuration:(SCD_Struct_JT6)arg1 ;
-(SCD_Struct_JT6)fadeOutDuration;
-(BOOL)validate;
-(AVMutableComposition *)composition;
-(int)timeScale;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(NSMutableArray *)videoSegments;
-(AVMutableCompositionTrack *)videoTrack;
-(void)setVideoTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)setTimeScale:(int)arg1 ;
-(void)markDirty;
-(BOOL)isExporting;
-(id)initWithLabel:(id)arg1 timeScale:(int)arg2 ;
-(void)setAudioTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)setFadeOutStart:(SCD_Struct_JT6)arg1 ;
-(int)actualVideoTrackID;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(BOOL)requestVolume:(float)arg1 atTime:(SCD_Struct_JT6)arg2 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 fillEmptySegment:(BOOL)arg4 ;
-(AVMutableCompositionTrack *)audioTrack;
-(BOOL)commitPendingVolumeToTime:(SCD_Struct_JT6)arg1 ;
-(void)applyPaddingToTime:(SCD_Struct_JT6)arg1 ;
-(void)applyAudioMixParameters:(id)arg1 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(SCD_Struct_JT16)arg2 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JT6)arg2 ;
-(void)setPreferredAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)applyCompositionItem:(id)arg1 skipAudio:(BOOL)arg2 ;
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
-(SCD_Struct_JT6)lastRampToZeroEnd;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JT6)arg2 skipAudio:(BOOL)arg3 ;
-(NSString *)preferredAudioTimePitchAlgorithm;
-(id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3 ;
-(void)apply_version2:(id)arg1 ;
-(void)setAudioParameters:(AVMutableAudioMixInputParameters *)arg1 ;
-(void)setTimeOfLastVolumeChange:(SCD_Struct_JT6)arg1 ;
-(void)setVolumeAtLastVolumeChange:(float)arg1 ;
-(void)setVolumeChangePending:(float)arg1 ;
-(void)setTimeOfLastRequest:(SCD_Struct_JT6)arg1 ;
-(void)setLastRampToZeroEnd:(SCD_Struct_JT6)arg1 ;
-(SCD_Struct_JT6)fadeOutStart;
-(float)linearFadeOutValueForTime:(SCD_Struct_JT6)arg1 ;
-(float)volumeAtLastVolumeChange;
-(SCD_Struct_JT6)timeOfLastVolumeChange;
-(BOOL)isFlexMusic;
-(float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(float)volumeChangePending;
-(void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JT16)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg1 ;
-(BOOL)containsSegments;
-(void)addExtraAudioTrackGroup:(id)arg1 ;
-(BOOL)asbd:(opaqueCMFormatDescriptionRef)arg1 isEqualTo:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)applyCompositionItem:(id)arg1 ;
-(void)apply_version1;
-(NSMutableArray *)audioSegments;
-(void)setAudioSegments:(NSMutableArray *)arg1 ;
-(SCD_Struct_JT6)cursorAtLastVideoInsertion;
-(SCD_Struct_JT6)timeOfLastRequest;
-(NSString *)timePitchAlgorithm;
-(void)setTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)seenSpeedClip;
-(BOOL)seenMoreThanOneASBD;
-(NSDictionary *)fmTrackInfoDict;
-(void)setFmTrackInfoDict:(NSDictionary *)arg1 ;
-(void)setIsFlexMusic:(BOOL)arg1 ;
-(SCD_Struct_JT6)cursorForMovieAudio;
-(BOOL)videoTrackInUse;
-(void)setVideoTrackInUse:(BOOL)arg1 ;
-(void)setVideoSegments:(NSMutableArray *)arg1 ;
@end

