/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)enabled;
-(id)init;
-(void)bind;
-(_GLKVector4)color;
-(void)setEnabled:(unsigned char)arg1 ;
-(id)description;
-(void)setColor:(_GLKVector4)arg1 ;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
@end

