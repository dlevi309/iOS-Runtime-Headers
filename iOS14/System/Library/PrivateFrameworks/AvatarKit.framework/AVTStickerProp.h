/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCNNode, NSString, NSArray;

@interface AVTStickerProp : NSObject <NSCopying> {

	BOOL _orientToCamera;
	BOOL _renderLast;
	SCNNode* _node;
	NSString* _originalName;
	NSArray* _palettesDescriptions;
	NSArray* _shaderModifiers;
	NSArray* _adjustments;
	double _opacity;
	CGSize _size;
	 _position;
	 _scale;
	 _rotation;

}

@property (nonatomic,retain) SCNNode * node;                                //@synthesize node=_node - In the implementation block
@property (nonatomic,copy) NSString * originalName;                         //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL orientToCamera;                         //@synthesize orientToCamera=_orientToCamera - In the implementation block
@property (nonatomic,readonly) BOOL renderLast;                             //@synthesize renderLast=_renderLast - In the implementation block
@property (nonatomic,readonly) NSArray * palettesDescriptions;              //@synthesize palettesDescriptions=_palettesDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * shaderModifiers;                       //@synthesize shaderModifiers=_shaderModifiers - In the implementation block
@property (nonatomic,readonly) NSArray * adjustments;                       //@synthesize adjustments=_adjustments - In the implementation block
@property (assign,nonatomic)  position;                                     //@synthesize position=_position - In the implementation block
@property (assign,nonatomic)  scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic)  rotation;                                     //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) double opacity;                                //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * nodeName; 
+(BOOL)cacheEnabled;
+(2)getPositionInDictionary:(id)arg1 ;
+(2)getRotationInDictionary:(id)arg1 ;
+(2)getScaleInDictionary:(id)arg1 ;
+(CGSize)getSizeInDictionary:(id)arg1 ;
+(float)getOpacityInDictionary:(id)arg1 ;
+(BOOL)getOrientToCameraInDictionary:(id)arg1 ;
+(BOOL)getRenderLastInDictionary:(id)arg1 ;
+(id)adjustmentFromDictionary:(id)arg1 presetCategory:(id)arg2 ;
+(id)stickerPropCache;
+(id)cacheKeyForSize:(CGSize)arg1 position:(id)arg2 rotation:(id)arg3 ;
+(void)setCacheEnabled:(BOOL)arg1 ;
+(id)propFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
+(void)applyPalettesForAvatar:(id)arg1 toNode:(id)arg2 palettesDescriptions:(id)arg3 ;
-()position;
-(void)setRotation:;
-(SCNNode *)node;
-()rotation;
-(NSString *)originalName;
-(void)setOriginalName:(NSString *)arg1 ;
-(CGSize)size;
-()scale;
-(double)opacity;
-(void)setNode:(SCNNode *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(NSString *)nodeName;
-(void)setScale:;
-(void)setPosition:;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSArray *)adjustments;
-(NSArray *)shaderModifiers;
-(void)setShaderModifiers:(NSArray *)arg1 ;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateNode:(id)arg1 withContentAtTime:(SCD_Struct_AV13)arg2 ;
-(void)stickerGenerationWillBegin;
-(void)stickerGenerationDidEnd;
-(id)cloneWithShaderModifiers:(id)arg1 ;
-(BOOL)renderLast;
-(BOOL)orientToCamera;
-(NSArray *)palettesDescriptions;
-(id)initWithSize:(CGSize)arg1 scale:(BOOL)arg2 position:(BOOL)arg3 renderLast:(id)arg4 orientToCamera:(id)arg5 rotation:(id)arg6 ;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(void)applyCamera:(id)arg1 toNode:(id)arg2 distToHead:(double)arg3 ;
@end

