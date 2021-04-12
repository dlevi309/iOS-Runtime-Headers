/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

