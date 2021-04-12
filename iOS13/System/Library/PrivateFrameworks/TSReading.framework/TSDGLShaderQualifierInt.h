/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier {

	int _GLintValue;
	int _proposedGLintValue;

}

@property (getter=LintValue,nonatomic,readonly) int GLintValue;              //@synthesize GLintValue=_GLintValue - In the implementation block
@property (assign,nonatomic) int proposedGLintValue;                         //@synthesize proposedGLintValue=_proposedGLintValue - In the implementation block
-(id)description;
-(void)setGLUniformWithShader:(id)arg1 ;
-(int)GLintValue;
-(void)setProposedGLintValue:(int)arg1 ;
-(int)proposedGLintValue;
@end

