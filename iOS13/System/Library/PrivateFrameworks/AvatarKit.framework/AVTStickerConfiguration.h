/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/AVTCacheableResourceScope.h>

@class NSString, AVTAvatarPoseAnimation, NSArray, AVTStickerCamera, NSDictionary;

@interface AVTStickerConfiguration : NSObject <AVTCacheableResourceScope> {

	BOOL _preRendered;
	BOOL _hasLoadedFromConfiguration;
	float _rate;
	float _scale;
	NSString* _name;
	NSString* _localizedName;
	AVTAvatarPoseAnimation* _poseAnimation;
	NSArray* _props;
	NSArray* _shaderModifiers;
	AVTStickerCamera* _camera;
	NSString* _stickerPack;
	double _snapshotFrame;
	double _duration;
	NSArray* _morpherOverrides;
	NSArray* _presetOverrides;
	unsigned long long _stickerVersion;
	NSDictionary* _configurationDictionary;
	NSString* _assetsPath;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * configurationDictionary;              //@synthesize configurationDictionary=_configurationDictionary - In the implementation block
@property (nonatomic,retain) NSString * assetsPath;                               //@synthesize assetsPath=_assetsPath - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFromConfiguration;                     //@synthesize hasLoadedFromConfiguration=_hasLoadedFromConfiguration - In the implementation block
@property (nonatomic,retain) AVTAvatarPoseAnimation * poseAnimation;              //@synthesize poseAnimation=_poseAnimation - In the implementation block
@property (nonatomic,retain) NSArray * props;                                     //@synthesize props=_props - In the implementation block
@property (nonatomic,retain) NSArray * shaderModifiers;                           //@synthesize shaderModifiers=_shaderModifiers - In the implementation block
@property (nonatomic,retain) AVTStickerCamera * camera;                           //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                          //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * emojiRepresentation; 
@property (nonatomic,readonly) BOOL preRendered;                                  //@synthesize preRendered=_preRendered - In the implementation block
@property (nonatomic,readonly) NSString * stickerPack;                            //@synthesize stickerPack=_stickerPack - In the implementation block
@property (nonatomic,readonly) double snapshotFrame;                              //@synthesize snapshotFrame=_snapshotFrame - In the implementation block
@property (nonatomic,readonly) double duration;                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float rate;                                        //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) float scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) NSArray * morpherOverrides;                        //@synthesize morpherOverrides=_morpherOverrides - In the implementation block
@property (nonatomic,readonly) NSArray * presetOverrides;                         //@synthesize presetOverrides=_presetOverrides - In the implementation block
@property (nonatomic,readonly) unsigned long long stickerVersion;                 //@synthesize stickerVersion=_stickerVersion - In the implementation block
+(id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2 ;
+(id)stickerConfigurationsForMemojiInStickerPack:(id)arg1 ;
+(id)availableStickerNamesForMemojiInStickerPack:(id)arg1 ;
+(id)availableStickerNamesForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2 ;
+(id)unavailableAnimojiNamesForStickerPack:(id)arg1 ;
+(id)stickerConfigurationsForAnimojiNamed:(id)arg1 ;
+(id)allStickerPackNames;
+(id)stickerConfigurationsForMemoji;
+(id)stickerConfigurationsForPuppetNamed:(id)arg1 ;
-(id)cacheableResourceAssociatedIdentifier;
-(unsigned long long)cacheableResourceAssociatedCost;
-(NSString *)name;
-(CGSize)size;
-(void)unload;
-(NSString *)localizedName;
-(float)scale;
-(double)duration;
-(NSDictionary *)configurationDictionary;
-(void)setConfigurationDictionary:(NSDictionary *)arg1 ;
-(float)rate;
-(double)snapshotFrame;
-(void)setCamera:(AVTStickerCamera *)arg1 ;
-(AVTStickerCamera *)camera;
-(id)initWithName:(id)arg1 poseAnimation:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6 ;
-(NSArray *)shaderModifiers;
-(NSArray *)props;
-(AVTAvatarPoseAnimation *)poseAnimation;
-(void)loadIfNeeded;
-(void)setShaderModifiers:(NSArray *)arg1 ;
-(NSString *)stickerPack;
-(BOOL)preRendered;
-(NSArray *)presetOverrides;
-(NSArray *)morpherOverrides;
-(id)initWithConfigurationAtPath:(id)arg1 forStickerPack:(id)arg2 ;
-(id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2 forStickerPack:(id)arg3 ;
-(void)setupOptions:(id)arg1 ;
-(BOOL)hasLoadedFromConfiguration;
-(NSString *)assetsPath;
-(void)setPoseAnimation:(AVTAvatarPoseAnimation *)arg1 ;
-(void)setProps:(NSArray *)arg1 ;
-(void)setHasLoadedFromConfiguration:(BOOL)arg1 ;
-(id)initWithConfigurationAtPath:(id)arg1 ;
-(NSString *)emojiRepresentation;
-(unsigned long long)stickerVersion;
-(void)setAssetsPath:(NSString *)arg1 ;
@end

