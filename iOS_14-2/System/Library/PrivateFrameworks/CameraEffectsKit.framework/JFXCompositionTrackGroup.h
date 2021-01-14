/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSString, AVMutableCompositionTrack, NSMutableArray, AVMutableAudioMixInputParameters, AVMutableComposition, NSDictionary;

@interface JFXCompositionTrackGroup : NSObject {

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
	SCD_Struct_JF3 _cursor;
	SCD_Struct_JF3 _cursorAtLastVideoInsertion;
	SCD_Struct_JF3 _timeOfLastVolumeChange;
	SCD_Struct_JF3 _timeOfLastRequest;
	SCD_Struct_JF3 _fadeOutStart;
	SCD_Struct_JF3 _fadeOutDuration;
	SCD_Struct_JF3 _lastRampToZeroEnd;
	SCD_Struct_JF3 _cursorForMovieAudio;

}

@property (assign,nonatomic) NSString * timePitchAlgorithm;                                    //@synthesize timePitchAlgorithm=_timePitchAlgorithm - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraAudioTrackGroups;                           //@synthesize extraAudioTrackGroups=_extraAudioTrackGroups - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef audioFormatDescription;              //@synthesize audioFormatDescription=_audioFormatDescription - In the implementation block
@property (assign,nonatomic) BOOL seenSpeedClip;                                               //@synthesize seenSpeedClip=_seenSpeedClip - In the implementation block
@property (assign,nonatomic) BOOL seenMoreThanOneASBD;                                         //@synthesize seenMoreThanOneASBD=_seenMoreThanOneASBD - In the implementation block
@property (nonatomic,retain) AVMutableAudioMixInputParameters * audioParameters;               //@synthesize audioParameters=_audioParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * fmTrackInfoDict;                                   //@synthesize fmTrackInfoDict=_fmTrackInfoDict - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 lastRampToZeroEnd;                                 //@synthesize lastRampToZeroEnd=_lastRampToZeroEnd - In the implementation block
@property (assign,nonatomic) BOOL isFlexMusic;                                                 //@synthesize isFlexMusic=_isFlexMusic - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 cursorForMovieAudio;                             //@synthesize cursorForMovieAudio=_cursorForMovieAudio - In the implementation block
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
@property (nonatomic,readonly) SCD_Struct_JF3 cursor;                                          //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 cursorAtLastVideoInsertion;                      //@synthesize cursorAtLastVideoInsertion=_cursorAtLastVideoInsertion - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 timeOfLastVolumeChange;                            //@synthesize timeOfLastVolumeChange=_timeOfLastVolumeChange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 timeOfLastRequest;                                 //@synthesize timeOfLastRequest=_timeOfLastRequest - In the implementation block
@property (assign,nonatomic) float volumeAtLastVolumeChange;                                   //@synthesize volumeAtLastVolumeChange=_volumeAtLastVolumeChange - In the implementation block
@property (assign,nonatomic) float volumeChangePending;                                        //@synthesize volumeChangePending=_volumeChangePending - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 fadeOutStart;                                      //@synthesize fadeOutStart=_fadeOutStart - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 fadeOutDuration;                                   //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL isExporting;                                                 //@synthesize isExporting=_isExporting - In the implementation block
+(id)visualDescriptionForSegments:(id)arg1 ;
-(BOOL)validate;
-(void)apply:(id)arg1 ;
-(SCD_Struct_JF3)fadeOutDuration;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(AVMutableComposition *)composition;
-(AVMutableAudioMixInputParameters *)audioParameters;
-(id)description;
-(AVMutableCompositionTrack *)audioTrack;
-(SCD_Struct_JF3)cursor;
-(void)setFadeOutDuration:(SCD_Struct_JF3)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSMutableArray *)videoSegments;
-(NSString *)label;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(void)dealloc;
-(void)setVideoTrack:(AVMutableCompositionTrack *)arg1 ;
-(AVMutableCompositionTrack *)videoTrack;
-(BOOL)isExporting;
-(void)markDirty;
-(id)initWithLabel:(id)arg1 timeScale:(int)arg2 ;
-(void)setAudioTrack:(AVMutableCompositionTrack *)arg1 ;
-(void)setFadeOutStart:(SCD_Struct_JF3)arg1 ;
-(int)actualVideoTrackID;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JF4)arg3 ;
-(BOOL)requestVolume:(float)arg1 atTime:(SCD_Struct_JF3)arg2 ;
-(void)setPreferredAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)applyCompositionItem:(id)arg1 skipAudio:(BOOL)arg2 ;
-(void)applyPaddingToTime:(SCD_Struct_JF3)arg1 ;
-(int)usableVideoTrackID;
-(BOOL)commitPendingVolumeToTime:(SCD_Struct_JF3)arg1 ;
-(void)applyAudioMixParameters:(id)arg1 ;
-(void)setAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)removeExtraAudioTrackGroups;
-(BOOL)containsVideoSegments;
-(BOOL)containsAudioSegments;
-(void)setSeenSpeedClip:(BOOL)arg1 ;
-(void)setSeenMoreThanOneASBD:(BOOL)arg1 ;
-(void)resetVolumeState;
-(NSMutableArray *)extraAudioTrackGroups;
-(void)setExtraAudioTrackGroups:(NSMutableArray *)arg1 ;
-(SCD_Struct_JF3)lastRampToZeroEnd;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JF3)arg2 skipAudio:(BOOL)arg3 ;
-(NSString *)preferredAudioTimePitchAlgorithm;
-(id)applyToTrack:(id)arg1 withSegments:(id)arg2 assets:(id)arg3 ;
-(void)setAudioParameters:(AVMutableAudioMixInputParameters *)arg1 ;
-(void)setTimeOfLastVolumeChange:(SCD_Struct_JF3)arg1 ;
-(void)setVolumeAtLastVolumeChange:(float)arg1 ;
-(void)setVolumeChangePending:(float)arg1 ;
-(void)setTimeOfLastRequest:(SCD_Struct_JF3)arg1 ;
-(void)setLastRampToZeroEnd:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF3)fadeOutStart;
-(float)linearFadeOutValueForTime:(SCD_Struct_JF3)arg1 ;
-(float)volumeAtLastVolumeChange;
-(SCD_Struct_JF3)timeOfLastVolumeChange;
-(BOOL)isFlexMusic;
-(float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JF4)arg3 ;
-(float)volumeChangePending;
-(void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JF4)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg1 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_JF4)arg3 fillEmptySegment:(BOOL)arg4 ;
-(BOOL)containsSegments;
-(void)addExtraAudioTrackGroup:(id)arg1 ;
-(BOOL)asbd:(opaqueCMFormatDescriptionRef)arg1 isEqualTo:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)applyCompositionItem:(id)arg1 ;
-(void)applyCompositionItem:(id)arg1 atTime:(SCD_Struct_JF3)arg2 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(SCD_Struct_JF4)arg2 ;
-(NSMutableArray *)audioSegments;
-(void)setAudioSegments:(NSMutableArray *)arg1 ;
-(SCD_Struct_JF3)cursorAtLastVideoInsertion;
-(SCD_Struct_JF3)timeOfLastRequest;
-(NSString *)timePitchAlgorithm;
-(void)setTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)seenSpeedClip;
-(BOOL)seenMoreThanOneASBD;
-(NSDictionary *)fmTrackInfoDict;
-(void)setFmTrackInfoDict:(NSDictionary *)arg1 ;
-(void)setIsFlexMusic:(BOOL)arg1 ;
-(SCD_Struct_JF3)cursorForMovieAudio;
-(BOOL)videoTrackInUse;
-(void)setVideoTrackInUse:(BOOL)arg1 ;
-(void)setVideoSegments:(NSMutableArray *)arg1 ;
@end
