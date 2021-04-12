/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyConstantColor : GLKEffectProperty {

	GLKVector4 _color;
	unsigned char _enabled;

}

@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) _GLKVector4 color;                  //@synthesize color=_color - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned char)enabled;
-(void)setEnabled:(unsigned char)arg1 ;
-(_GLKVector4)color;
-(void)setColor:(_GLKVector4)arg1 ;
-(void)bind;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
@end

