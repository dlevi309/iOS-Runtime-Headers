/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject {

	CGSize _effectSize;
	CGSize _blurBufferSize;
	TSDGLFrameBuffer* _colorFramebuffer;
	TSDGLFrameBuffer* _blurFramebuffer;
	TSDGLDataBuffer* _dataBuffer;
	TSDGLDataBuffer* _blurTransferDataBuffer;
	TSDGLDataBuffer* _blurDataBuffer;
	TSDGLShader* _blurHorizontalShader;
	TSDGLShader* _blurVerticalShader;
	TSDGLShader* _bloomShader;
	TSDGLShader* _fboTransferShader;
	int _oldViewportRect[4];
	BOOL _oldViewportRectInitialized;

}
-(void)dealloc;
-(void)teardown;
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 ;
-(id)initWithEffectSize:(CGSize)arg1 blurScale:(double)arg2 ;
-(void)drawBloomEffectWithMVPMatrix:(CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 ;
@end

