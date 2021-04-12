/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUISpriteUniforms : NSObject {

	SCD_Struct_AR1 _uniforms;
	SCD_Struct_AR3 _vertexAttributes;

}

@property (nonatomic,readonly) SCD_Struct_AR3 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR3)vertexAttributes;
-(SCD_Struct_AR1)uniforms;
-(void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2 ;
-(void)_updateUniformsWithSprite:(id)arg1 ;
-(id)initWithSprite:(id)arg1 inContext:(id)arg2 ;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
@end

