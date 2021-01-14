/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIRingUniforms : NSObject {

	SCD_Struct_AR6 _vertexAttributes;
	SCD_Struct_AR7 _uniforms;

}

@property (nonatomic,readonly) SCD_Struct_AR6 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR7 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR6)vertexAttributes;
-(SCD_Struct_AR7)uniforms;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
-(id)initWithRing:(id)arg1 inContext:(id)arg2 ;
-(void)_updateVertexAttributesWithRing:(id)arg1 inContext:(id)arg2 ;
-(void)_updateUniformsWithRing:(id)arg1 inContext:(id)arg2 ;
@end

