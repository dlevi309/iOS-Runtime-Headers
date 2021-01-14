/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKBaseEffect.h>
#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {

	GLKEffectPropertyTexture* _textureCubeMap;
	GLKMatrix3 _matrix;
	BOOL _dirtyUniforms;
	int _matrixLoc;

}

@property (assign,nonatomic) BOOL dirtyUniforms;                                       //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) int matrixLoc;                                            //@synthesize matrixLoc=_matrixLoc - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (assign,nonatomic) _GLKMatrix3 matrix;                                       //@synthesize matrix=_matrix - In the implementation block
-(_GLKMatrix3)matrix;
-(id)init;
-(id)description;
-(void)setMatrix:(_GLKMatrix3)arg1 ;
-(void)prepareToDraw;
-(void)dealloc;
-(void)setDirtyUniforms:(BOOL)arg1 ;
-(BOOL)dirtyUniforms;
-(GLKEffectPropertyTexture *)textureCubeMap;
-(int)matrixLoc;
-(void)setMatrixLoc:(int)arg1 ;
@end

