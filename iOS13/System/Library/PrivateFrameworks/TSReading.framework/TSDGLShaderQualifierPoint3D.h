/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier {

	SCD_Struct_TS82 _GLPoint3DValue;
	SCD_Struct_TS82 _proposedGLPoint3DValue;

}

@property (getter=LPoint3DValue,nonatomic,readonly) SCD_Struct_TS82 GLPoint3DValue;              //@synthesize GLPoint3DValue=_GLPoint3DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS82 proposedGLPoint3DValue;                             //@synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS82)GLPoint3DValue;
-(void)setProposedGLPoint3DValue:(SCD_Struct_TS82)arg1 ;
-(SCD_Struct_TS82)proposedGLPoint3DValue;
@end

