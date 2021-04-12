/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier {

	SCD_Struct_TS83 _GLPoint4DValue;
	SCD_Struct_TS83 _proposedGLPoint4DValue;

}

@property (getter=LPoint4DValue,nonatomic,readonly) SCD_Struct_TS83 GLPoint4DValue;              //@synthesize GLPoint4DValue=_GLPoint4DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS83 proposedGLPoint4DValue;                             //@synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS83)GLPoint4DValue;
-(void)setProposedGLPoint4DValue:(SCD_Struct_TS83)arg1 ;
-(SCD_Struct_TS83)proposedGLPoint4DValue;
@end

