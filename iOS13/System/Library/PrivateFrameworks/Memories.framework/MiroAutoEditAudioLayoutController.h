/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class Project, MiroMemory, NSArray, MiroAutoEditLogger;

@interface MiroAutoEditAudioLayoutController : NSObject {

	Project* _project;
	MiroMemory* _activeMemory;
	NSArray* _layoutClips;
	MiroAutoEditLogger* _logger;
	SCD_Struct_PM5 _lastBeatTime;

}

@property (assign,nonatomic) SCD_Struct_PM5 lastBeatTime;              //@synthesize lastBeatTime=_lastBeatTime - In the implementation block
@property (nonatomic,retain) Project * project;                        //@synthesize project=_project - In the implementation block
@property (assign,nonatomic) MiroMemory * activeMemory;                //@synthesize activeMemory=_activeMemory - In the implementation block
@property (nonatomic,retain) NSArray * layoutClips;                    //@synthesize layoutClips=_layoutClips - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(MiroAutoEditLogger *)logger;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)setLayoutClips:(NSArray *)arg1 ;
-(void)setLastBeatTime:(SCD_Struct_PM5)arg1 ;
-(void)applyJAndLCuts;
-(void)applyAudioFadeHandles;
-(void)rollCutsToBeats;
-(void)applyClipVolumes;
-(void)applyBackgroundAudioVolume;
-(id)_applyFrozenVolumeAndReturnRemainingItems;
-(void)_applyComputedVolumesForClips:(id)arg1 ;
-(void)_enumerateClipsWithAudio:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)analyzeLoudness:(id)arg1 ;
-(BOOL)_hasVoiceAndFacesForClip:(id)arg1 gatherLoudness:(id*)arg2 peak:(id*)arg3 voiceRanges:(id*)arg4 ;
-(unsigned long long)_computeMuteStateForClip:(id)arg1 hasAnalysis:(BOOL)arg2 hasVoice:(BOOL)arg3 hasVoiceAndFaces:(BOOL)arg4 ;
-(void)_computeVolumesForClip:(id)arg1 loudnessValues:(id)arg2 peakValues:(id)arg3 returnNormalVolume:(float*)arg4 returnDimmedVolume:(float*)arg5 ;
-(NSArray *)layoutClips;
-(BOOL)_clipLimitsRoll:(id)arg1 ;
-(SCD_Struct_PM5)lastBeatTime;
-(id)_onsetDrivenInterestingBeatsForTime:(SCD_Struct_PM5)arg1 metadataDict:(id)arg2 ;
-(id)_segmentAndBeatsBasedInterestingBeatsForTime:(SCD_Struct_PM5)arg1 metadataDict:(id)arg2 ;
-(id)_rollCutsToBeatsWithGranularity:(id)arg1 excludingTimes:(id)arg2 ;
-(id)_interestingBeatTimedMetaItemsForFlexAudioClip:(id)arg1 forFrameTime:(int)arg2 withGranularity:(id)arg3 ;
-(BOOL)_attemptToRollEditFromTime:(int)arg1 toTime:(int)arg2 firstClip:(id)arg3 secondClip:(id)arg4 failureReasons:(id)arg5 allowSlack:(BOOL)arg6 ;
-(unsigned long long)indexOfClipInLayoutClips:(id)arg1 ;
-(void)applyAudioPolishToProject:(id)arg1 activeMemory:(id)arg2 layoutClips:(id)arg3 ;
-(id)_timedMetadataItemAtTime:(SCD_Struct_PM5)arg1 forFlexAudioClip:(id)arg2 withIdentifier:(id)arg3 ;
-(MiroMemory *)activeMemory;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
@end

