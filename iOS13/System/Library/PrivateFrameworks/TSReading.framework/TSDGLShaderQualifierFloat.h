/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier {

	float _GLfloatValue;
	float _proposedGLfloatValue;

}

@property (getter=LfloatValue,nonatomic,readonly) float GLfloatValue;              //@synthesize GLfloatValue=_GLfloatValue - In the implementation block
@property (assign,nonatomic) float proposedGLfloatValue;                           //@synthesize proposedGLfloatValue=_proposedGLfloatValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(float)GLfloatValue;
-(void)setProposedGLfloatValue:(float)arg1 ;
-(float)proposedGLfloatValue;
@end

