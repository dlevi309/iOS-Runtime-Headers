/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTCompositionClipsDataSource;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSMapTable, AVMutableComposition, AVMutableVideoComposition, AVMutableAudioMix, JTCompositionDuckingTimes, AVPlayerItem, JTCompositionTrackGroup, NSMutableArray, JTClip, NSMutableDictionary;

@interface JTComposition : NSObject {

	NSMapTable* _clipCustomRendererMapTable;
	BOOL _needsUpdate;
	float _globalAudioVolume;
	AVMutableComposition* _avComposition;
	AVMutableVideoComposition* _videoComposition;
	AVMutableAudioMix* _audioMix;
	JTCompositionDuckingTimes* _compositionDuckingTimes;
	AVPlayerItem* _playerItem;
	AVPlayerItem* _avPlayerItem;
	JTCompositionTrackGroup* _trackGroupA;
	JTCompositionTrackGroup* _trackGroupB;
	NSMutableArray* _backgroundAudioTracks;
	NSMutableArray* _foregroundAudioTracks;
	NSMutableArray* _audioMixParameters;
	id<JTCompositionClipsDataSource> _clipsDataSource;
	NSMutableArray* _videoCompositionInstructions;
	long long _backgroundAudioTrackCount;
	long long _foregroundAudioTrackCount;
	JTClip* _liveTransformClip;
	NSMutableDictionary* _assetsUsed;
	CGSize _viewSize;
	CGSize _previousRenderSize;
	SCD_Struct_JT6 _duration;
	PVTransformAnimationInfo _liveCompositionTransform;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVMutableComposition * avComposition;                             //@synthesize avComposition=_avComposition - In the implementation block
@property (nonatomic,retain) AVMutableVideoComposition * videoComposition;                     //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,retain) AVMutableAudioMix * audioMix;                                     //@synthesize audioMix=_audioMix - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                                      //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) JTCompositionTrackGroup * trackGroupA;                            //@synthesize trackGroupA=_trackGroupA - In the implementation block
@property (nonatomic,retain) JTCompositionTrackGroup * trackGroupB;                            //@synthesize trackGroupB=_trackGroupB - In the implementation block
@property (nonatomic,retain) NSMutableArray * backgroundAudioTracks;                           //@synthesize backgroundAudioTracks=_backgroundAudioTracks - In the implementation block
@property (nonatomic,retain) NSMutableArray * foregroundAudioTracks;                           //@synthesize foregroundAudioTracks=_foregroundAudioTracks - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioMixParameters;                              //@synthesize audioMixParameters=_audioMixParameters - In the implementation block
@property (nonatomic,retain) id<JTCompositionClipsDataSource> clipsDataSource;                 //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoCompositionInstructions;                    //@synthesize videoCompositionInstructions=_videoCompositionInstructions - In the implementation block
@property (assign,nonatomic) CGSize previousRenderSize;                                        //@synthesize previousRenderSize=_previousRenderSize - In the implementation block
@property (assign,nonatomic) long long backgroundAudioTrackCount;                              //@synthesize backgroundAudioTrackCount=_backgroundAudioTrackCount - In the implementation block
@property (assign,nonatomic) long long foregroundAudioTrackCount;                              //@synthesize foregroundAudioTrackCount=_foregroundAudioTrackCount - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) JTClip * liveTransformClip;                                       //@synthesize liveTransformClip=_liveTransformClip - In the implementation block
@property (assign,nonatomic) PVTransformAnimationInfo liveCompositionTransform;                //@synthesize liveCompositionTransform=_liveCompositionTransform - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsUsed;                                 //@synthesize assetsUsed=_assetsUsed - In the implementation block
@property (assign,nonatomic) float globalAudioVolume;                                          //@synthesize globalAudioVolume=_globalAudioVolume - In the implementation block
@property (nonatomic,retain) JTCompositionDuckingTimes * compositionDuckingTimes;              //@synthesize compositionDuckingTimes=_compositionDuckingTimes - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                  //@synthesize viewSize=_viewSize - In the implementation block
-(void)dealloc;
-(SCD_Struct_JT6)duration;
-(BOOL)needsUpdate;
-(void)update;
-(void)setDuration:(SCD_Struct_JT6)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(BOOL)validate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setAudioMix:(AVMutableAudioMix *)arg1 ;
-(AVMutableVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVMutableVideoComposition *)arg1 ;
-(AVMutableAudioMix *)audioMix;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(id<JTCompositionClipsDataSource>)clipsDataSource;
-(id)initWithClipsDataSource:(id)arg1 ;
-(void)markDirty;
-(void)applyPlayerItemProperties;
-(void)noteEffectChangeForClip:(id)arg1 ;
-(void)useLiveTransformForClip:(id)arg1 ;
-(void)updateLiveTransformForClip:(id)arg1 ;
-(void)setClipsDataSource:(id<JTCompositionClipsDataSource>)arg1 ;
-(CGSize)previousRenderSize;
-(float)JT_preferredRenderScale;
-(void)setAvComposition:(AVMutableComposition *)arg1 ;
-(void)setVideoCompositionInstructions:(NSMutableArray *)arg1 ;
-(void)setAudioMixParameters:(NSMutableArray *)arg1 ;
-(void)setBackgroundAudioTracks:(NSMutableArray *)arg1 ;
-(AVMutableComposition *)avComposition;
-(NSMutableArray *)backgroundAudioTracks;
-(void)setForegroundAudioTracks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)foregroundAudioTracks;
-(void)setTrackGroupA:(JTCompositionTrackGroup *)arg1 ;
-(JTCompositionTrackGroup *)trackGroupA;
-(void)setTrackGroupB:(JTCompositionTrackGroup *)arg1 ;
-(JTCompositionTrackGroup *)trackGroupB;
-(void)setGlobalAudioVolume:(float)arg1 ;
-(void)setAssetsUsed:(NSMutableDictionary *)arg1 ;
-(void)setPreviousRenderSize:(CGSize)arg1 ;
-(void)setLiveTransformClip:(JTClip *)arg1 ;
-(void)setLiveCompositionTransform:(PVTransformAnimationInfo)arg1 ;
-(NSMutableArray *)audioMixParameters;
-(NSMutableArray *)videoCompositionInstructions;
-(NSMutableDictionary *)assetsUsed;
-(BOOL)clipIsForegroundAudio:(id)arg1 ;
-(float)globalAudioVolume;
-(id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(BOOL*)arg4 isContainedClip:(BOOL)arg5 ;
-(CGAffineTransform)clipTransform:(id)arg1 ;
-(id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(CGAffineTransform)arg3 timeRange:(SCD_Struct_JT16)arg4 requiresCARendering:(BOOL)arg5 ;
-(float)volumeForClip:(id)arg1 ;
-(id)instructionToShowImageWithClip:(id)arg1 withTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_JT16)arg3 requiresCARendering:(BOOL)arg4 ;
-(id)makeAudioPointsArrayForClip:(id)arg1 shouldUseDuckingArrays:(BOOL)arg2 ;
-(SCD_Struct_JT16)sourceTimeRangeForClip:(id)arg1 endOfComposition:(SCD_Struct_JT6)arg2 projectStartTime:(SCD_Struct_JT6*)arg3 ;
-(void)assetUsed:(id)arg1 ;
-(BOOL)addVolumeRampToTrackGroup:(id)arg1 forClip:(id)arg2 shouldUseDucking:(BOOL)arg3 ;
-(SCD_Struct_JT16)sourceTimeRangeForAudioClip:(id)arg1 endOfComposition:(SCD_Struct_JT6)arg2 ;
-(BOOL)assembleAudioCompositionTrackGroups:(id)arg1 audioItem:(id)arg2 clip:(id)arg3 shouldUseDucking:(BOOL)arg4 shouldLoopClipContents:(BOOL)arg5 ;
-(BOOL)writeVolumeRampToCompositionFromTrackGroup:(id)arg1 endOfComposition:(SCD_Struct_JT6)arg2 ;
-(BOOL)clipHasEnabledVoiceover:(id)arg1 ;
-(BOOL)emptySegments:(id)arg1 ;
-(void)removeTrackFromAudioMix:(int)arg1 ;
-(BOOL)removeTrackIfEmpty:(id)arg1 ;
-(void)logRemovedTrack:(id)arg1 trackID:(int)arg2 ;
-(void)setRenderScale;
-(void)logAddedTrack:(id)arg1 trackID:(int)arg2 ;
-(id)buildClipList;
-(id)foregroundAudioClips:(id)arg1 ;
-(void)addBackTracksIfRemoved;
-(void)updateCustomRendererMapForClip:(id)arg1 ;
-(BOOL)CARenderingRequiredForClip:(id)arg1 ;
-(SCD_Struct_JT16)compositionItemsForState:(id)arg1 compositionItem:(id*)arg2 backfillCompositionItem:(id*)arg3 ;
-(id)updateVideoAndAudioInstructionForState:(id)arg1 previousInstructions:(id)arg2 waitingForResource:(BOOL)arg3 ;
-(id)dissolveGraphNode:(SCD_Struct_JT16)arg1 from:(id)arg2 to:(id)arg3 ;
-(void)burnInPlaybackSettings:(id)arg1 ;
-(id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(SCD_Struct_JT16)arg3 requiresCARendering:(BOOL)arg4 ;
-(void)updateBackgroundAudioCompositionTracks:(SCD_Struct_JT6)arg1 ;
-(void)updateForegroundAudioCompositionTracks:(SCD_Struct_JT6)arg1 withClips:(id)arg2 ;
-(void)setCompositionDuckingTimes:(JTCompositionDuckingTimes *)arg1 ;
-(id)animojiCustomRendererPropsForClip:(id)arg1 currentCustomProperties:(id)arg2 ;
-(id)faceTrackingCustomRendererPropsForClip:(id)arg1 currentCustomProperties:(id)arg2 ;
-(void)rebuildCompositionInstructionsForVideoStillTitleCard:(id)arg1 ;
-(JTClip *)liveTransformClip;
-(void)removeEmptyTracks;
-(void)updateRenderSizeIfNeeded;
-(void)refreshAVComposition;
-(void)finalizeVideoComposition;
-(void)setupVideoCompositionContext:(id)arg1 ;
-(SCD_Struct_JT16)timeRangeForClip:(id)arg1 ;
-(void)refreshCompositionInstructionsWithinRange:(SCD_Struct_JT16)arg1 ;
-(int)outputFrameRate;
-(CGSize)naturalSizeForClipAfterTransform:(id)arg1 ;
-(void)addAudioPointsToArray:(id)arg1 atFrameTime:(int)arg2 volume:(double)arg3 ;
-(id)AVComposition;
-(void)applyExportProperties;
-(void)clearPlayerItemProperties;
-(void)refreshEffectParameters:(id)arg1 ;
-(JTCompositionDuckingTimes *)compositionDuckingTimes;
-(long long)backgroundAudioTrackCount;
-(void)setBackgroundAudioTrackCount:(long long)arg1 ;
-(long long)foregroundAudioTrackCount;
-(void)setForegroundAudioTrackCount:(long long)arg1 ;
-(PVTransformAnimationInfo)liveCompositionTransform;
@end

