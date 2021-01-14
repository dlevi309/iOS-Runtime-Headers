/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroClip.h>
#import <libobjc.A.dylib/MiroClip_Shim.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>
#import <libobjc.A.dylib/SpeedRangeDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/AltAspect.h>

@class NSArray, PHAsset, SpeedRanges, VideoMovie, NSMutableDictionary, TitleDefinition, NSString, ClipBackground, AltClipCollection, Movie, NSDate, NSURL, NSDictionary, PVEffect;

@interface KonaClip : NSObject <MiroClip, MiroClip_Shim, KonaClipMiroAutoEditAdditions, SpeedRangeDelegate, NSCopying, AltAspect> {

	NSMutableDictionary* m_clipDict;
	BOOL placeholder;
	BOOL showActivity;
	BOOL transitionChanged;
	unsigned _filterEffectSeed;
	int selectionStart;
	int selectionEnd;
	float _sourceStartTime;
	float _sourceDuration;
	TitleDefinition* _titleDefinition;
	NSString* _uuid;
	long long anchorItemIndex;
	SpeedRanges* _speedRanges;
	ClipBackground* _clipBackground;
	AltClipCollection* _altClips;
	double _altAspect;
	id _suggestion;
	id _freezeInfo;
	id _scene;

}

@property (nonatomic,readonly) int minStart; 
@property (nonatomic,readonly) int maxEnd; 
@property (nonatomic,readonly) int maxDur; 
@property (assign,nonatomic) int startTime; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int maxDuration; 
@property (nonatomic,readonly) float sourceStartTime; 
@property (nonatomic,readonly) float sourceDuration; 
@property (nonatomic,readonly) int rawSourceDuration; 
@property (nonatomic,readonly) NSArray * multiUpContainedClips; 
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (nonatomic,readonly) BOOL isSlomo; 
@property (assign,nonatomic) BOOL audioEnabled; 
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) Movie * movie; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) float rotation; 
@property (nonatomic,retain) NSURL * identifierURL; 
@property (assign,nonatomic) int startOffset; 
@property (nonatomic,retain) NSString * audioTitle; 
@property (nonatomic,retain) NSString * audioArtist; 
@property (nonatomic,retain) NSDictionary * movieMapLocation; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int transitionEatLeft; 
@property (assign,nonatomic) int transitionEatRight; 
@property (assign,nonatomic) float audioVolume; 
@property (nonatomic,retain) NSURL * movieURL; 
@property (nonatomic,retain) KonaClip * anchorItem; 
@property (assign,nonatomic) int anchorLocalOffset; 
@property (assign,nonatomic) int anchorTargetOffset; 
@property (nonatomic,retain) KonaClip * precisionSourceClip; 
@property (assign,nonatomic) int precisionTrack; 
@property (assign,nonatomic) int freezeFrame; 
@property (assign,nonatomic) float scaleFactor; 
@property (assign,nonatomic) float translateX; 
@property (assign,nonatomic) float translateY; 
@property (assign,nonatomic) int audioStartOffset; 
@property (assign,nonatomic) int audioEndOffset; 
@property (assign,nonatomic) int audioFadeInDuration; 
@property (assign,nonatomic) int audioFadeOutDuration; 
@property (nonatomic,retain) SpeedRanges * speedRanges; 
@property (nonatomic,retain) PVEffect * filterEffect; 
@property (nonatomic,readonly) unsigned filterEffectSeed; 
@property (nonatomic,readonly) PVEffect * titleEffect; 
@property (assign,nonatomic) BOOL projectMovie; 
@property (nonatomic,retain) KonaClip * nextTransition; 
@property (assign,nonatomic) int desiredDuration; 
@property (assign,nonatomic) BOOL userEditing; 
@property (assign,nonatomic) int userEditedSize; 
@property (assign,nonatomic) float sourceStartTime;                          //@synthesize sourceStartTime=_sourceStartTime - In the implementation block
@property (assign,nonatomic) float sourceDuration;                           //@synthesize sourceDuration=_sourceDuration - In the implementation block
@property (nonatomic,retain) SpeedRanges * speedRanges;                      //@synthesize speedRanges=_speedRanges - In the implementation block
@property (assign,nonatomic) unsigned filterEffectSeed;                      //@synthesize filterEffectSeed=_filterEffectSeed - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) int clipType; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,retain) TitleDefinition * titleDefinition;              //@synthesize titleDefinition=_titleDefinition - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,readonly) int titleDuration; 
@property (nonatomic,retain) ClipBackground * clipBackground;                //@synthesize clipBackground=_clipBackground - In the implementation block
@property (assign,nonatomic) BOOL placeholder; 
@property (assign,nonatomic) BOOL showActivity; 
@property (assign,nonatomic) BOOL transitionChanged; 
@property (assign,nonatomic) int selectionStart; 
@property (assign,nonatomic) int selectionEnd; 
@property (nonatomic,readonly) BOOL hasSelection; 
@property (assign,nonatomic) long long anchorItemIndex; 
@property (nonatomic,retain) AltClipCollection * altClips;                   //@synthesize altClips=_altClips - In the implementation block
@property (assign,nonatomic) double altAspect;                               //@synthesize altAspect=_altAspect - In the implementation block
@property (assign,nonatomic,__weak) id suggestion;                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) id freezeInfo;                                  //@synthesize freezeInfo=_freezeInfo - In the implementation block
@property (nonatomic,retain) id scene;                                       //@synthesize scene=_scene - In the implementation block
+(id)clip;
+(id)stabilizationMovieFilenameForAssetID:(id)arg1 ;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(id)watermarkedMovieFilenameForAssetID:(id)arg1 ;
+(id)clipWithAsset:(id)arg1 ;
+(Class)classForClipType:(int)arg1 ;
+(BOOL)audioEnabledByDefault;
+(id)clipFromPlist:(id)arg1 ;
-(BOOL)isPrimary;
-(void)setScaleFactor:(float)arg1 ;
-(id)scene;
-(void)setSpeed:(float)arg1 ;
-(float)scaleFactor;
-(NSString *)uuid;
-(void)setDuration:(int)arg1 ;
-(void)setScene:(id)arg1 ;
-(Movie *)movie;
-(void)setRotation:(float)arg1 ;
-(id)init;
-(int)maxDuration;
-(BOOL)hasSelection;
-(BOOL)hasTitle;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(float)speed;
-(float)rotation;
-(BOOL)audioEnabled;
-(KonaClip *)nextTransition;
-(PHAsset *)asset;
-(void)setAudioVolume:(float)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setStartTime:(int)arg1 ;
-(int)maxEnd;
-(BOOL)isPano;
-(void)encodeWithCoder:(id)arg1 ;
-(id)suggestion;
-(void)setStartOffset:(int)arg1 ;
-(double)aspectRatio;
-(KonaClip *)anchorItem;
-(void)setShowActivity:(BOOL)arg1 ;
-(BOOL)isIris;
-(void)setAnchorItem:(KonaClip *)arg1 ;
-(NSString *)name;
-(id)fileURL;
-(float)frameRate;
-(BOOL)isBurst;
-(int)selectionStart;
-(NSString *)description;
-(void)setPlaceholder:(BOOL)arg1 ;
-(NSDate *)creationDate;
-(int)maxDur;
-(NSURL *)movieURL;
-(int)minStart;
-(BOOL)placeholder;
-(unsigned long long)hash;
-(void)setSelectionStart:(int)arg1 ;
-(BOOL)showActivity;
-(id)initWithCoder:(id)arg1 ;
-(void)clearSelection;
-(void)setMovie:(Movie *)arg1 ;
-(void)setSuggestion:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(int)startOffset;
-(long long)volume;
-(int)duration;
-(BOOL)isSlomo;
-(void)setMaxDuration:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)audioVolume;
-(int)startTime;
-(SCD_Struct_PM9)sourceTimeRange;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)canBeDeleted;
-(int)selectionEnd;
-(void)setSelectionEnd:(int)arg1 ;
-(void)setMovieURL:(NSURL *)arg1 ;
-(int)audioStartOffset;
-(void)setAudioStartOffset:(int)arg1 ;
-(int)audioEndOffset;
-(void)setAudioEndOffset:(int)arg1 ;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(CGSize)naturalSizeWithTransform;
-(BOOL)isFreezeFrame;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(SCD_Struct_PM9)targetTimeRange;
-(AltClipCollection *)altClips;
-(int)clipType;
-(int)transitionEatLeft;
-(int)transitionEatRight;
-(long long)specialTreatment;
-(SpeedRanges *)speedRanges;
-(BOOL)hasAudioCharacteristic;
-(id)sourceClips;
-(NSURL *)identifierURL;
-(float)sourceStartTime;
-(float)sourceDuration;
-(id)freezeInfo;
-(BOOL)isMultiUp;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(int)audioFadeOutDuration;
-(void)setFreezeInfo:(id)arg1 ;
-(int)paddedMaxEnd;
-(int)paddedMinStart;
-(int)paddedMaxDur;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(NSArray *)multiUpContainedClips;
-(int)rawSourceDuration;
-(double)altAspect;
-(void)setAltAspect:(double)arg1 ;
-(double)autoEditShortestDurationWithBlueprint:(id)arg1 ;
-(double)autoEditShortestIdealDurationWithBlueprint:(id)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(VideoMovie *)videoMovie;
-(void)setFilterEffect:(PVEffect *)arg1 ;
-(void)setTitleDefinition:(TitleDefinition *)arg1 ;
-(TitleDefinition *)titleDefinition;
-(PVEffect *)titleEffect;
-(void)setTranslateY:(float)arg1 ;
-(void)setTranslateX:(float)arg1 ;
-(ClipBackground *)clipBackground;
-(BOOL)isSpeedAdjustable;
-(float)translateY;
-(void)setFreezeFrame:(int)arg1 ;
-(int)anchorTargetOffset;
-(int)anchorLocalOffset;
-(id)validationInformation;
-(float)translateX;
-(void)didFinishTrimming;
-(id)deepCopyOntoClip:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM9)arg1 inProject:(id)arg2 ;
-(void)setProjectMovie:(BOOL)arg1 ;
-(void)setTransitionEatLeft:(int)arg1 ;
-(void)setTransitionEatRight:(int)arg1 ;
-(void)setAnchorTargetOffset:(int)arg1 ;
-(void)setAnchorLocalOffset:(int)arg1 ;
-(void)setAudioTitle:(NSString *)arg1 ;
-(void)setSpeedRanges:(SpeedRanges *)arg1 ;
-(BOOL)transitionChanged;
-(void)setTransitionChanged:(BOOL)arg1 ;
-(long long)anchorItemIndex;
-(void)setAnchorItemIndex:(long long)arg1 ;
-(unsigned)filterEffectSeed;
-(void)setFilterEffectSeed:(unsigned)arg1 ;
-(void)setClipBackground:(ClipBackground *)arg1 ;
-(BOOL)clipContentsEqual:(id)arg1 ;
-(BOOL)canBeDuplicated;
-(void)generateFilterEffectSeed;
-(void)stampNewUUID;
-(void)_addDefaultKeys;
-(PVEffect *)filterEffect;
-(void)setAltClips:(AltClipCollection *)arg1 ;
-(void)setSourceStartTime:(float)arg1 ;
-(void)setSourceDuration:(float)arg1 ;
-(void)changedMapFrom:(id)arg1 to:(id)arg2 ;
-(id)altClipsInOrder;
-(BOOL)allowsTitle;
-(BOOL)isBackgroundAudio;
-(BOOL)isVideoOverlay;
-(int)titleStartTimeForClipStartTime:(int)arg1 ;
-(int)titleDuration;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
-(void)updateSourceCaches;
-(NSString *)audioTitle;
-(void)setAudioArtist:(NSString *)arg1 ;
-(NSString *)audioArtist;
-(void)setMovieMapLocation:(NSDictionary *)arg1 ;
-(NSDictionary *)movieMapLocation;
-(void)setPrecisionSourceClip:(KonaClip *)arg1 ;
-(KonaClip *)precisionSourceClip;
-(void)setPrecisionTrack:(int)arg1 ;
-(int)precisionTrack;
-(int)freezeFrame;
-(void)setUserEditedSize:(int)arg1 ;
-(int)userEditedSize;
-(void)setDesiredDuration:(int)arg1 ;
-(int)desiredDuration;
-(BOOL)projectMovie;
-(void)setNextTransition:(KonaClip *)arg1 ;
-(void)setUserEditing:(BOOL)arg1 ;
-(BOOL)userEditing;
@end
