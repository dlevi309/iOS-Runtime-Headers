/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDGLFrameBuffer, TSDGLShader, TSDGLDataBuffer;

@interface TSDGLMotionBlurEffect : NSObject {

	CGSize mFramebufferSize;
	CGSize mSlideSize;
	long long mDebugDrawMode;
	TSDGLFrameBuffer* mColorFrameBuffer;
	TSDGLShader* mVelocityVisualizerShader;
	TSDGLShader* mVelocityCollectionShader;
	TSDGLFrameBuffer* mVelocityFrameBuffer;
	TSDGLShader* mDefaultTextureShader;
	TSDGLDataBuffer* mVelocityFBODataBuffer;
	TSDGLDataBuffer* mFBODataBuffer;
	TSDGLShader* mBlurHorizontalShader;
	TSDGLShader* mBlurVerticalShader;
	double mDilationDistanceInSlidePercent;
	double mMotionBlurStrength;
	int mBackingWidth;
	int mBackingHeight;

}

@property (nonatomic,readonly) CGSize velocityScale; 
@property (assign,nonatomic) double dilationDistanceInSlidePercent; 
@property (assign,nonatomic) double motionBlurStrength; 
@property (assign,nonatomic) long long debugDrawMode; 
-(void)dealloc;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)p_updateMaxVelocityInShadersWithScale:(double)arg1 ;
-(void)p_setupVelocityFramebufferIfNecessary;
-(void)p_setupBlurShaders;
-(CGSize)velocityScale;
-(double)p_velocityFramebufferScale;
-(void)setupMotionBlurEffectIfNecessary;
-(long long)debugDrawMode;
-(void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1 ;
-(id)initWithFramebufferSize:(CGSize)arg1 slideSize:(CGSize)arg2 ;
-(void)setMotionBlurStrength:(double)arg1 ;
-(void)updateVelocityScaleInShader:(id)arg1 ;
-(void)bindColorFramebuffer;
-(void)bindVelocityFramebuffer;
-(void)drawResultWithCurrentGLFramebuffer:(int)arg1 ;
-(double)dilationDistanceInSlidePercent;
-(void)setDilationDistanceInSlidePercent:(double)arg1 ;
-(double)motionBlurStrength;
-(void)setDebugDrawMode:(long long)arg1 ;
-(CGSize)p_velocityFramebufferSize;
-(void)p_setupGLTextureParameters;
@end

