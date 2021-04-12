/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSString, NSMutableArray, GLKEffect;

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect> {

	GLKVector3 _center;
	float _xSize;
	float _ySize;
	float _zSize;
	GLKEffectPropertyTexture* _textureCubeMap;
	GLKEffectPropertyTransform* _transform;
	NSString* _label;
	unsigned char _effectStale;
	unsigned char _centerChanged;
	unsigned _vao;
	unsigned _positionVBO;
	unsigned _texCoordVBO;
	unsigned _programName;
	NSMutableArray* _propertyArray;
	GLKEffect* _effect;

}

@property (nonatomic,readonly) NSMutableArray * propertyArray;                         //@synthesize propertyArray=_propertyArray - In the implementation block
@property (assign,nonatomic) unsigned char effectStale;                                //@synthesize effectStale=_effectStale - In the implementation block
@property (assign,nonatomic) unsigned char centerChanged;                              //@synthesize centerChanged=_centerChanged - In the implementation block
@property (assign,nonatomic) GLKEffect * effect;                                       //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) unsigned programName;                                     //@synthesize programName=_programName - In the implementation block
@property (assign,nonatomic) unsigned vao;                                             //@synthesize vao=_vao - In the implementation block
@property (assign,nonatomic) unsigned positionVBO;                                     //@synthesize positionVBO=_positionVBO - In the implementation block
@property (assign,nonatomic) unsigned texCoordVBO;                                     //@synthesize texCoordVBO=_texCoordVBO - In the implementation block
@property (assign,nonatomic) _GLKVector3 center;                                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float xSize;                                              //@synthesize xSize=_xSize - In the implementation block
@property (assign,nonatomic) float ySize;                                              //@synthesize ySize=_ySize - In the implementation block
@property (assign,nonatomic) float zSize;                                              //@synthesize zSize=_zSize - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTransform * transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(GLKEffectPropertyTransform *)transform;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(_GLKVector3)center;
-(void)setCenter:(_GLKVector3)arg1 ;
-(void)setEffect:(GLKEffect *)arg1 ;
-(GLKEffect *)effect;
-(void)prepareToDraw;
-(void)draw;
-(NSMutableArray *)propertyArray;
-(unsigned char)effectStale;
-(void)setEffectStale:(unsigned char)arg1 ;
-(unsigned)programName;
-(void)setProgramName:(unsigned)arg1 ;
-(void)createAndBindVAOWithPositions:(float*)arg1 texCoords:(float*)arg2 ;
-(void)updateSkyboxEffect;
-(GLKEffectPropertyTexture *)textureCubeMap;
-(void)setXSize:(float)arg1 ;
-(void)setYSize:(float)arg1 ;
-(void)setZSize:(float)arg1 ;
-(float)xSize;
-(float)ySize;
-(float)zSize;
-(unsigned)vao;
-(void)setVao:(unsigned)arg1 ;
-(unsigned)positionVBO;
-(void)setPositionVBO:(unsigned)arg1 ;
-(unsigned)texCoordVBO;
-(void)setTexCoordVBO:(unsigned)arg1 ;
-(unsigned char)centerChanged;
-(void)setCenterChanged:(unsigned char)arg1 ;
@end

