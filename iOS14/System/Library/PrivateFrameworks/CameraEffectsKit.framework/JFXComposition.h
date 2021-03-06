/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXCompositionPlayableElementsDataSource, JFXPlayableElement;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class AVMutableComposition, AVMutableVideoComposition, AVMutableAudioMix, NSMapTable, AVPlayerItem, JFXCompositionTrackGroup, NSMutableArray, NSMutableDictionary;

@interface JFXComposition : NSObject {

	BOOL _needsUpdate;
	float _globalAudioVolume;
	unsigned _parentCode;
	AVMutableComposition* _avComposition;
	AVMutableVideoComposition* _videoComposition;
	AVMutableAudioMix* _audioMix;
	NSMapTable* _clipCustomRendererMap;
	NSMapTable* _clipFaceTrackingPlaybackDelegates;
	AVPlayerItem* _playerItem;
	AVPlayerItem* _avPlayerItem;
	JFXCompositionTrackGroup* _trackGroupA;
	JFXCompositionTrackGroup* _trackGroupB;
	NSMutableArray* _audioMixParameters;
	id<JFXCompositionPlayableElementsDataSource> _clipsDataSource;
	NSMutableArray* _videoCompositionInstructions;
	long long _backgroundAudioTrackCount;
	long long _foregroundAudioTrackCount;
	id<JFXPlayableElement> _liveTransformClip;
	NSMutableDictionary* _assetsUsed;
	CGSize _viewSize;
	CGSize _previousRenderSize;
	SCD_Struct_JF3 _duration;
	PVTransformAnimationInfo _liveCompositionTransform;

}

@property (nonatomic,retain) NSMapTable * clipCustomRendererMap;                                        //@synthesize clipCustomRendererMap=_clipCustomRendererMap - In the implementation block
@property (nonatomic,retain) NSMapTable * clipFaceTrackingPlaybackDelegates;                            //@synthesize clipFaceTrackingPlaybackDelegates=_clipFaceTrackingPlaybackDelegates - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                                 //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVMutableComposition * avComposition;                                      //@synthesize avComposition=_avComposition - In the implementation block
@property (nonatomic,retain) AVMutableVideoComposition * videoComposition;                              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,retain) AVMutableAudioMix * audioMix;                                              //@synthesize audioMix=_audioMix - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                                               //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) JFXCompositionTrackGroup * trackGroupA;                                    //@synthesize trackGroupA=_trackGroupA - In the implementation block
@property (nonatomic,retain) JFXCompositionTrackGroup * trackGroupB;                                    //@synthesize trackGroupB=_trackGroupB - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioMixParameters;                                       //@synthesize audioMixParameters=_audioMixParameters - In the implementation block
@property (nonatomic,retain) id<JFXCompositionPlayableElementsDataSource> clipsDataSource;              //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoCompositionInstructions;                             //@synthesize videoCompositionInstructions=_videoCompositionInstructions - In the implementation block
@property (assign,nonatomic) CGSize previousRenderSize;                                                 //@synthesize previousRenderSize=_previousRenderSize - In the implementation block
@property (assign,nonatomic) long long backgroundAudioTrackCount;                                       //@synthesize backgroundAudioTrackCount=_backgroundAudioTrackCount - In the implementation block
@property (assign,nonatomic) long long foregroundAudioTrackCount;                                       //@synthesize foregroundAudioTrackCount=_foregroundAudioTrackCount - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                          //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) id<JFXPlayableElement> liveTransformClip;                                  //@synthesize liveTransformClip=_liveTransformClip - In the implementation block
@property (assign,nonatomic) PVTransformAnimationInfo liveCompositionTransform;                         //@synthesize liveCompositionTransform=_liveCompositionTransform - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsUsed;                                          //@synthesize assetsUsed=_assetsUsed - In the implementation block
@property (assign,nonatomic) float globalAudioVolume;                                                   //@synthesize globalAudioVolume=_globalAudioVolume - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                           //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                                                       //@synthesize parentCode=_parentCode - In the implementation block
+(Class)instructionBuilderClass;
-(BOOL)validate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(void)setDuration:(SCD_Struct_JF3)arg1 ;
-(CGSize)viewSize;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(AVMutableAudioMix *)audioMix;
-(void)update;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(AVMutableVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVMutableVideoComposition *)arg1 ;
-(void)setAudioMix:(AVMutableAudioMix *)arg1 ;
-(SCD_Struct_JF3)duration;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(id<JFXCompositionPlayableElementsDataSource>)clipsDataSource;
-(BOOL)JFX_hasEffectThatRequiresCustomRendering;
-(CGSize)previousRenderSize;
-(float)JFX_preferredRenderScale;
-(void)markDirty;
-(void)setAvComposition:(AVMutableComposition *)arg1 ;
-(void)setVideoCompositionInstructions:(NSMutableArray *)arg1 ;
-(void)setAudioMixParameters:(NSMutableArray *)arg1 ;
-(void)setTrackGroupA:(JFXCompositionTrackGroup *)arg1 ;
-(AVMutableComposition *)avComposition;
-(JFXCompositionTrackGroup *)trackGroupA;
-(void)setTrackGroupB:(JFXCompositionTrackGroup *)arg1 ;
-(JFXCompositionTrackGroup *)trackGroupB;
-(void)setGlobalAudioVolume:(float)arg1 ;
-(void)setAssetsUsed:(NSMutableDictionary *)arg1 ;
-(void)setPreviousRenderSize:(CGSize)arg1 ;
-(void)setLiveTransformClip:(id<JFXPlayableElement>)arg1 ;
-(void)setLiveCompositionTransform:(PVTransformAnimationInfo)arg1 ;
-(NSMutableArray *)audioMixParameters;
-(NSMutableArray *)videoCompositionInstructions;
-(NSMutableDictionary *)assetsUsed;
-(NSMapTable *)clipCustomRendererMap;
-(NSMapTable *)clipFaceTrackingPlaybackDelegates;
-(float)globalAudioVolume;
-(id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(BOOL*)arg4 isContainedClip:(BOOL)arg5 ;
-(CGAffineTransform)clipTransform:(id)arg1 ;
-(id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(CGAffineTransform)arg3 timeRange:(SCD_Struct_JF4)arg4 requiresCARendering:(BOOL)arg5 ;
-(float)volumeForClip:(id)arg1 ;
-(id)instructionToShowImageWithClip:(id)arg1 withTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_JF4)arg3 requiresCARendering:(BOOL)arg4 ;
-(BOOL)emptySegments:(id)arg1 ;
-(void)removeTrackFromAudioMix:(int)arg1 ;
-(BOOL)removeTrackIfEmpty:(id)arg1 ;
-(void)logRemovedTrack:(id)arg1 trackID:(int)arg2 ;
-(void)setRenderScale;
-(void)logAddedTrack:(id)arg1 trackID:(int)arg2 ;
-(id)buildClipList;
-(void)addBackTracksIfRemoved;
-(void)JFX_updatePlaybackDelegatesForClip:(id)arg1 ;
-(BOOL)CARenderingRequiredForClip:(id)arg1 ;
-(SCD_Struct_JF4)compositionItemsForState:(id)arg1 compositionItem:(id*)arg2 backfillCompositionItem:(id*)arg3 ;
-(void)assetUsed:(id)arg1 ;
-(id)updateVideoAndAudioInstructionForState:(id)arg1 previousInstructions:(id)arg2 waitingForResource:(BOOL)arg3 ;
-(id)dissolveGraphNode:(SCD_Struct_JF4)arg1 from:(id)arg2 to:(id)arg3 ;
-(void)burnInPlaybackSettings:(id)arg1 ;
-(id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(SCD_Struct_JF4)arg3 requiresCARendering:(BOOL)arg4 ;
-(id)animojiCustomRendererPropsForClip:(id)arg1 currentCustomProperties:(id)arg2 sharedMediaDataReaderManager:(id)arg3 ;
-(void)CFX_updateFaceTrackingPlaybackDelegateForClip:(id)arg1 sharedMediaDataReaderManager:(id)arg2 ;
-(void)rebuildCompositionInstructionsForVideoStillTitleCard:(id)arg1 ;
-(void)JFX_setScrubbingModeForPlaybackDelegates:(BOOL)arg1 ;
-(void)notifyNeedsEffectPropertiesUpdatedForPlaybackTime:(SCD_Struct_JF3)arg1 ;
-(void)JFX_updateFaceTrackPropertiesForEffectsAtTime:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF4)timeRangeForClip:(id)arg1 ;
-(void)removeEmptyTracks;
-(void)updateRenderSizeIfNeeded;
-(void)refreshAVComposition;
-(void)JFX_applyPropertiesForCustomVideoCompositor:(id)arg1 ;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(id)compositionOutputColorSpace;
-(void)JFX_finalizeVideoComposition;
-(id)JFX_bestAssetColorSpace;
-(id<JFXPlayableElement>)liveTransformClip;
-(int)outputFrameRate;
-(id)initWithClipsDataSource:(id)arg1 ;
-(void)noteEffectChangeForClip:(id)arg1 ;
-(void)notifyPlaybackWillBegin;
-(void)notifyPlaybackDidStopAtTime:(SCD_Struct_JF3)arg1 ;
-(id)AVComposition;
-(void)applyPropertiesForCustomVideoCompositor:(id)arg1 ;
-(void)applyExportProperties;
-(void)applyPlayerItemProperties;
-(void)clearPlayerItemProperties;
-(BOOL)JFX_isContigousSplitClip:(id)arg1 nextClip:(id)arg2 ;
-(void)setClipCustomRendererMap:(NSMapTable *)arg1 ;
-(void)setClipFaceTrackingPlaybackDelegates:(NSMapTable *)arg1 ;
-(void)setClipsDataSource:(id<JFXCompositionPlayableElementsDataSource>)arg1 ;
-(long long)backgroundAudioTrackCount;
-(void)setBackgroundAudioTrackCount:(long long)arg1 ;
-(long long)foregroundAudioTrackCount;
-(void)setForegroundAudioTrackCount:(long long)arg1 ;
-(PVTransformAnimationInfo)liveCompositionTransform;
@end

