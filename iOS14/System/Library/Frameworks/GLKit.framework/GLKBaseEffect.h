/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTransform, GLKEffectPropertyLight, GLKEffectPropertyMaterial, GLKEffectPropertyTexture, NSArray, GLKEffectPropertyFog, NSString, GLKEffectPropertyConstantColor, NSMutableArray, GLKEffect;

@interface GLKBaseEffect : NSObject <GLKNamedEffect> {

	unsigned char _colorMaterialEnabled;
	unsigned char _fogEnabled;
	GLKEffectPropertyTransform* _transform;
	int _lightingType;
	GLKEffectPropertyLight* _light0;
	GLKEffectPropertyLight* _light1;
	GLKEffectPropertyLight* _light2;
	GLKEffectPropertyMaterial* _material;
	GLKEffectPropertyTexture* _texture2d0;
	GLKEffectPropertyTexture* _texture2d1;
	NSArray* _textureOrder;
	GLKVector4 _constantColor;
	GLKEffectPropertyFog* _fog;
	NSString* _label;
	unsigned char _lightModelTwoSided;
	unsigned char _useConstantColor;
	unsigned char _propertyArrayStale;
	unsigned char _effectStale;
	unsigned _programName;
	GLKEffectPropertyConstantColor* _constantColorProp;
	NSMutableArray* _propertyArray;
	GLKEffect* _effect;
	GLKVector4 _lightModelAmbientColor;

}

@property (nonatomic,readonly) NSMutableArray * propertyArray;                                  //@synthesize propertyArray=_propertyArray - In the implementation block
@property (assign,nonatomic) unsigned char effectStale;                                         //@synthesize effectStale=_effectStale - In the implementation block
@property (assign,nonatomic) unsigned char propertyArrayStale;                                  //@synthesize propertyArrayStale=_propertyArrayStale - In the implementation block
@property (assign,nonatomic) GLKEffect * effect;                                                //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) unsigned programName;                                              //@synthesize programName=_programName - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyConstantColor * constantColorProp;              //@synthesize constantColorProp=_constantColorProp - In the implementation block
@property (assign,nonatomic) unsigned char colorMaterialEnabled;                                //@synthesize colorMaterialEnabled=_colorMaterialEnabled - In the implementation block
@property (assign,nonatomic) unsigned char lightModelTwoSided;                                  //@synthesize lightModelTwoSided=_lightModelTwoSided - In the implementation block
@property (assign,nonatomic) unsigned char useConstantColor;                                    //@synthesize useConstantColor=_useConstantColor - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTransform * transform;                          //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyLight * light0;                                 //@synthesize light0=_light0 - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyLight * light1;                                 //@synthesize light1=_light1 - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyLight * light2;                                 //@synthesize light2=_light2 - In the implementation block
@property (assign,nonatomic) int lightingType;                                                  //@synthesize lightingType=_lightingType - In the implementation block
@property (assign,nonatomic) _GLKVector4 lightModelAmbientColor;                                //@synthesize lightModelAmbientColor=_lightModelAmbientColor - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyMaterial * material;                            //@synthesize material=_material - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * texture2d0;                           //@synthesize texture2d0=_texture2d0 - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * texture2d1;                           //@synthesize texture2d1=_texture2d1 - In the implementation block
@property (nonatomic,copy) NSArray * textureOrder;                                              //@synthesize textureOrder=_textureOrder - In the implementation block
@property (assign,nonatomic) _GLKVector4 constantColor;                                         //@synthesize constantColor=_constantColor - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyFog * fog;                                      //@synthesize fog=_fog - In the implementation block
@property (nonatomic,copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
-(void)setEffect:(GLKEffect *)arg1 ;
-(GLKEffect *)effect;
-(GLKEffectPropertyFog *)fog;
-(id)init;
-(GLKEffectPropertyTransform *)transform;
-(GLKEffectPropertyLight *)light0;
-(GLKEffectPropertyLight *)light1;
-(GLKEffectPropertyLight *)light2;
-(id)description;
-(GLKEffectPropertyMaterial *)material;
-(int)lightingType;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLightingType:(int)arg1 ;
-(void)prepareToDraw;
-(NSString *)label;
-(void)dealloc;
-(void)setLightModelAmbientColor:(_GLKVector4)arg1 ;
-(void)setColorMaterialEnabled:(unsigned char)arg1 ;
-(void)setLightModelTwoSided:(unsigned char)arg1 ;
-(void)setTextureOrder:(NSArray *)arg1 ;
-(void)updateBaseEffect;
-(GLKEffectPropertyTexture *)texture2d0;
-(GLKEffectPropertyTexture *)texture2d1;
-(void)setConstantColor:(_GLKVector4)arg1 ;
-(_GLKVector4)constantColor;
-(void)setUseConstantColor:(unsigned char)arg1 ;
-(BOOL)perVertexLightingEnabled;
-(BOOL)perPixelLightingEnabled;
-(unsigned char)colorMaterialEnabled;
-(unsigned char)lightModelTwoSided;
-(_GLKVector4)lightModelAmbientColor;
-(NSArray *)textureOrder;
-(GLKEffectPropertyConstantColor *)constantColorProp;
-(unsigned char)useConstantColor;
-(unsigned char)propertyArrayStale;
-(void)setPropertyArrayStale:(unsigned char)arg1 ;
-(NSMutableArray *)propertyArray;
-(unsigned char)effectStale;
-(void)setEffectStale:(unsigned char)arg1 ;
-(unsigned)programName;
-(void)setProgramName:(unsigned)arg1 ;
@end

