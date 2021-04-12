/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
*/


@class EAGLContext;

@interface AFilter : NSObject {

	EAGLContext* _glContext;
	unsigned _lumaProgram;
	unsigned _chromaProgram;
	unsigned _lumaWithClippingProgram;
	unsigned _chromaWithClippingProgram;
	unsigned _bgraProgram;
	unsigned _lumaBlurProgram;
	unsigned _chromaBlurProgram;
	int _uniforms[40];
	int _blurUniforms[14];
	float m_angle;

}
-(id)initWithContext:(id)arg1 ;
@end

