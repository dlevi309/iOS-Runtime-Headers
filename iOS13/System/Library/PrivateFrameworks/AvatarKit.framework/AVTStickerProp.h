/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCNNode, NSArray;

@interface AVTStickerProp : NSObject <NSCopying> {

	BOOL _orientToCamera;
	BOOL _renderLast;
	SCNNode* _node;
	NSArray* _palettesDescriptions;
	NSArray* _shaderModifiers;
	NSArray* _adjustments;
	SCNVector3 _position;
	SCNVector3 _rotation;
	SCNVector3 _scale;
	CGSize _size;

}

@property (nonatomic,retain) SCNNode * node;                                //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) SCNVector3 position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) SCNVector3 rotation;                         //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) SCNVector3 scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL orientToCamera;                         //@synthesize orientToCamera=_orientToCamera - In the implementation block
@property (nonatomic,readonly) BOOL renderLast;                             //@synthesize renderLast=_renderLast - In the implementation block
@property (nonatomic,readonly) NSArray * palettesDescriptions;              //@synthesize palettesDescriptions=_palettesDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * shaderModifiers;                       //@synthesize shaderModifiers=_shaderModifiers - In the implementation block
@property (nonatomic,readonly) NSArray * adjustments;                       //@synthesize adjustments=_adjustments - In the implementation block
+(SCNVector3)getPositionInDictionary:(id)arg1 ;
+(SCNVector3)getRotationInDictionary:(id)arg1 ;
+(SCNVector3)getScaleInDictionary:(id)arg1 ;
+(CGSize)getSizeInDictionary:(id)arg1 ;
+(BOOL)getOrientToCameraInDictionary:(id)arg1 ;
+(BOOL)getRenderLastInDictionary:(id)arg1 ;
+(id)adjustmentFromDictionary:(id)arg1 presetCategory:(id)arg2 ;
+(id)cacheKeyForSize:(CGSize)arg1 position:(SCNVector3)arg2 rotation:(SCNVector3)arg3 scale:(SCNVector3)arg4 palettesDescriptions:(id)arg5 filePath:(id)arg6 ;
+(id)stickerPropCache;
+(id)propFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
+(void)applyPalettesForAvatar:(id)arg1 toNode:(id)arg2 palettesDescriptions:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(SCNVector3)scale;
-(SCNVector3)position;
-(SCNNode *)node;
-(SCNVector3)rotation;
-(void)setNode:(SCNNode *)arg1 ;
-(NSArray *)adjustments;
-(NSArray *)shaderModifiers;
-(id)nodeName;
-(void)setShaderModifiers:(NSArray *)arg1 ;
-(void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateNode:(id)arg1 withContentAtTime:(SCD_Struct_AV12)arg2 ;
-(void)stickerGenerationWillBegin;
-(void)stickerGenerationDidEnd;
-(id)cloneWithShaderModifiers:(id)arg1 ;
-(BOOL)renderLast;
-(BOOL)orientToCamera;
-(NSArray *)palettesDescriptions;
-(id)initWithSize:(CGSize)arg1 scale:(SCNVector3)arg2 position:(SCNVector3)arg3 renderLast:(BOOL)arg4 orientToCamera:(BOOL)arg5 rotation:(SCNVector3)arg6 palettesDescriptions:(id)arg7 shaderModifiers:(id)arg8 adjustments:(id)arg9 ;
-(void)applyCamera:(id)arg1 toNode:(id)arg2 distToHead:(double)arg3 ;
@end

