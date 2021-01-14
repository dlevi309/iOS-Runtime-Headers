/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty {

	unsigned char _enabled;
	int _mode;
	GLKVector4 _color;
	float _density;
	float _start;
	float _end;
	int _modeLoc;
	int _colorLoc;
	int _densityLoc;
	int _startLoc;
	int _endLoc;

}

@property (assign,nonatomic) int modeLoc;                        //@synthesize modeLoc=_modeLoc - In the implementation block
@property (assign,nonatomic) int colorLoc;                       //@synthesize colorLoc=_colorLoc - In the implementation block
@property (assign,nonatomic) int densityLoc;                     //@synthesize densityLoc=_densityLoc - In the implementation block
@property (assign,nonatomic) int startLoc;                       //@synthesize startLoc=_startLoc - In the implementation block
@property (assign,nonatomic) int endLoc;                         //@synthesize endLoc=_endLoc - In the implementation block
@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) _GLKVector4 color;                  //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float density;                      //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) float start;                        //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) float end;                          //@synthesize end=_end - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(unsigned char)enabled;
-(int)mode;
-(float)density;
-(float)end;
-(id)init;
-(void)bind;
-(float)start;
-(_GLKVector4)color;
-(void)setEnabled:(unsigned char)arg1 ;
-(void)setDensity:(float)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)endLoc;
-(id)description;
-(void)setEnd:(float)arg1 ;
-(void)setColor:(_GLKVector4)arg1 ;
-(int)modeLoc;
-(void)setStart:(float)arg1 ;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(void)setModeLoc:(int)arg1 ;
-(int)colorLoc;
-(void)setColorLoc:(int)arg1 ;
-(int)densityLoc;
-(void)setDensityLoc:(int)arg1 ;
-(int)startLoc;
-(void)setStartLoc:(int)arg1 ;
-(void)setEndLoc:(int)arg1 ;
@end

