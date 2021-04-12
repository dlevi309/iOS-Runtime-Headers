/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTransform : GLKEffectProperty {

	GLKMatrix4 _modelviewMatrix;
	GLKMatrix4 _projectionMatrix;
	GLKMatrix3 _normalMatrix;
	int _mvpMatrixLoc;
	int _modelviewMatrixLoc;
	int _projectionMatrixLoc;
	int _normalMatrixLoc;
	int _invModelviewMatrixLoc;
	GLKMatrix4 _invModelviewMatrix;
	GLKMatrix4 _mvpMatrix;

}

@property (assign,nonatomic) _GLKMatrix4 mvpMatrix;                       //@synthesize mvpMatrix=_mvpMatrix - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 invModelviewMatrix;              //@synthesize invModelviewMatrix=_invModelviewMatrix - In the implementation block
@property (assign,nonatomic) int projectionMatrixLoc;                     //@synthesize projectionMatrixLoc=_projectionMatrixLoc - In the implementation block
@property (assign,nonatomic) int modelviewMatrixLoc;                      //@synthesize modelviewMatrixLoc=_modelviewMatrixLoc - In the implementation block
@property (assign,nonatomic) int mvpMatrixLoc;                            //@synthesize mvpMatrixLoc=_mvpMatrixLoc - In the implementation block
@property (assign,nonatomic) int normalMatrixLoc;                         //@synthesize normalMatrixLoc=_normalMatrixLoc - In the implementation block
@property (assign,nonatomic) int invModelviewMatrixLoc;                   //@synthesize invModelviewMatrixLoc=_invModelviewMatrixLoc - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 modelviewMatrix;                 //@synthesize modelviewMatrix=_modelviewMatrix - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 projectionMatrix;                //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (nonatomic,readonly) _GLKMatrix3 normalMatrix;                  //@synthesize normalMatrix=_normalMatrix - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(_GLKMatrix4)projectionMatrix;
-(void)setProjectionMatrix:(_GLKMatrix4)arg1 ;
-(void)bind;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
-(_GLKMatrix3)normalMatrix;
-(_GLKMatrix4)modelviewMatrix;
-(void)loadMatrix:(int)arg1 matrix:(_GLKMatrix4)arg2 ;
-(_GLKMatrix4)invModelviewMatrix;
-(_GLKMatrix4)mvpMatrix;
-(void)loadIdentity:(int)arg1 ;
-(void)setModelviewMatrix:(_GLKMatrix4)arg1 ;
-(void)setInvModelviewMatrix:(_GLKMatrix4)arg1 ;
-(void)setMvpMatrix:(_GLKMatrix4)arg1 ;
-(int)mvpMatrixLoc;
-(void)setMvpMatrixLoc:(int)arg1 ;
-(int)modelviewMatrixLoc;
-(void)setModelviewMatrixLoc:(int)arg1 ;
-(int)projectionMatrixLoc;
-(void)setProjectionMatrixLoc:(int)arg1 ;
-(int)normalMatrixLoc;
-(void)setNormalMatrixLoc:(int)arg1 ;
-(int)invModelviewMatrixLoc;
-(void)setInvModelviewMatrixLoc:(int)arg1 ;
@end
