/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/JFXPlayableElement.h>

@class NSString, JFXMediaItem, NSData, PVTransformAnimation, NSURL, NSMutableArray, JFXMediaReaderCreationAVAssetTrackAttributes;

@interface CFXClip : NSObject <NSCopying, JFXPlayableElement> {

	int _presentationTime;
	int _duration;
	int _mediaStartOffset;
	int _transformInitialStartOffset;
	NSString* _uuid;
	JFXMediaItem* _mediaItem;
	NSURL* _metadataURL;
	NSData* _originalAnimojiDataRepresentation;
	unsigned long long _originalAnimojiVersionNumber;
	PVTransformAnimation* _transformAnimation;
	NSMutableArray* _filters;
	NSMutableArray* _overlays;
	NSMutableArray* _animojis;

}

@property (nonatomic,retain) NSString * uuid;                                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) JFXMediaItem * mediaItem;                                                                           //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                                                           //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * overlays;                                                                          //@synthesize overlays=_overlays - In the implementation block
@property (nonatomic,retain) NSMutableArray * animojis;                                                                          //@synthesize animojis=_animojis - In the implementation block
@property (nonatomic,readonly) int presentationTime;                                                                             //@synthesize presentationTime=_presentationTime - In the implementation block
@property (assign,nonatomic) int duration;                                                                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) int mediaStartOffset;                                                                             //@synthesize mediaStartOffset=_mediaStartOffset - In the implementation block
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long mediaInterfaceOrientationForDisplay; 
@property (nonatomic,readonly) CGSize mediaSize; 
@property (nonatomic,retain) NSURL * metadataURL;                                                                                //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSData * originalAnimojiDataRepresentation;                                                         //@synthesize originalAnimojiDataRepresentation=_originalAnimojiDataRepresentation - In the implementation block
@property (assign,nonatomic) unsigned long long originalAnimojiVersionNumber;                                                    //@synthesize originalAnimojiVersionNumber=_originalAnimojiVersionNumber - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;                                                          //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int transformInitialStartOffset;                                                                    //@synthesize transformInitialStartOffset=_transformInitialStartOffset - In the implementation block
@property (nonatomic,readonly) BOOL isAssetUnavailable; 
@property (nonatomic,readonly) BOOL isAssetLoaded; 
@property (nonatomic,readonly) BOOL isStill; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL shouldRenderVideoAsBlack; 
@property (nonatomic,readonly) CGSize playableMediaSizeWithTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) JFXMediaReaderCreationAVAssetTrackAttributes * depthDataReaderAssetTrackAttributes; 
@property (nonatomic,readonly) JFXMediaReaderCreationAVAssetTrackAttributes * arMetadataReaderAssetTrackAttributes; 
+(id)defaultClip;
+(BOOL)cfx_writeProxyImageToURL:(id)arg1 fromImageAtURL:(id)arg2 maximumImageDimension:(unsigned long long)arg3 outColorSpace:(id*)arg4 ;
+(void)cfx_createVideoClipWithLocalURL:(id)arg1 effectStack:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)cfx_createStillClipPreviewWithLocalURL:(id)arg1 maximumImageDimension:(unsigned long long)arg2 effectStack:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)createClipWithLocalURL:(id)arg1 effectStack:(id)arg2 isVideo:(BOOL)arg3 maximumImageDimension:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)createCaptureClip;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSString *)uuid;
-(void)setDuration:(int)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(void)setMediaItem:(JFXMediaItem *)arg1 ;
-(long long)mediaType;
-(id)init;
-(int)presentationTime;
-(void)setPresentationTime:(int)arg1 ;
-(NSMutableArray *)overlays;
-(NSMutableArray *)filters;
-(NSURL *)metadataURL;
-(NSString *)description;
-(JFXMediaItem *)mediaItem;
-(BOOL)isAssetLoaded;
-(BOOL)isVideo;
-(unsigned long long)hash;
-(void)setOverlays:(NSMutableArray *)arg1 ;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isStill;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(CGSize)mediaSize;
-(void)removeAllEffects;
-(PVTransformAnimation *)transformAnimation;
-(id)effectStack;
-(BOOL)removeAllEffectsOfType:(int)arg1 ;
-(id)effectsOfType:(int)arg1 ;
-(long long)mediaInterfaceOrientationForDisplay;
-(int)mediaStartOffset;
-(void)addEffect:(id)arg1 ;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(BOOL)hasPlayableEffectOfType:(int)arg1 ;
-(id)playableEffectsOfType:(int)arg1 ;
-(CGSize)playableMediaSizeWithTransform;
-(id)playableEffectStack;
-(NSMutableArray *)animojis;
-(void)setAnimojis:(NSMutableArray *)arg1 ;
-(JFXMediaReaderCreationAVAssetTrackAttributes *)arMetadataReaderAssetTrackAttributes;
-(JFXMediaReaderCreationAVAssetTrackAttributes *)depthDataReaderAssetTrackAttributes;
-(id)stringForMediaType:(long long)arg1 ;
-(id)cfx_clipType;
-(void)addEffectStack:(id)arg1 ;
-(BOOL)cfx_isAssetMissing;
-(BOOL)cfx_isAssetInTrash;
-(int)transformInitialStartOffset;
-(void)updateTransformPresentationTimeRange;
-(void)cfx_addEffect:(id)arg1 ;
-(BOOL)cfx_removeAllEffectsOfType:(int)arg1 ;
-(id)cfx_effectsOfType:(int)arg1 ;
-(id)CFX_removeStyleTranferOnUnsupportedDevice:(id)arg1 ;
-(id)effectStackExcludingType:(int)arg1 ;
-(BOOL)hasMetadataAsset;
-(id)playableEffectStackExcludingType:(int)arg1 ;
-(BOOL)isAssetUnavailable;
-(BOOL)shouldRenderVideoAsBlack;
-(NSData *)originalAnimojiDataRepresentation;
-(unsigned long long)originalAnimojiVersionNumber;
-(void)removeEffect:(id)arg1 ;
-(void)setOriginalAnimojiDataRepresentation:(NSData *)arg1 ;
-(void)setOriginalAnimojiVersionNumber:(unsigned long long)arg1 ;
-(void)setTransformInitialStartOffset:(int)arg1 ;
@end

