/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLBuffer;
#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class ARUISpriteTexture;

@interface ARUISpritesRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	SCD_Struct_AR2* _vertexAttributes;
	SCD_Struct_AR3* _uniforms;
	ARUISpriteTexture* _texture;

}

@property (assign,nonatomic) SCD_Struct_AR2* vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR3* uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,retain) ARUISpriteTexture * texture;                   //@synthesize texture=_texture - In the implementation block
+(void)clearCaches;
-(void)dealloc;
-(void)setTexture:(ARUISpriteTexture *)arg1 ;
-(ARUISpriteTexture *)texture;
-(SCD_Struct_AR2*)vertexAttributes;
-(void)setVertexAttributes:(SCD_Struct_AR2*)arg1 ;
-(void)setUniforms:(SCD_Struct_AR3*)arg1 ;
-(SCD_Struct_AR3*)uniforms;
-(id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2 ;
-(void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
@end

