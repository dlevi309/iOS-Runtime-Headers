/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {

	SCD_Struct_TS78 _GLPoint2DValue;
	SCD_Struct_TS78 _proposedGLPoint2DValue;

}

@property (getter=LPoint2DValue,nonatomic,readonly) SCD_Struct_TS78 GLPoint2DValue;              //@synthesize GLPoint2DValue=_GLPoint2DValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS78 proposedGLPoint2DValue;                             //@synthesize proposedGLPoint2DValue=_proposedGLPoint2DValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(SCD_Struct_TS78)GLPoint2DValue;
-(void)setProposedGLPoint2DValue:(SCD_Struct_TS78)arg1 ;
-(SCD_Struct_TS78)proposedGLPoint2DValue;
@end

