/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebGLLayer : CALayer {

	float _devicePixelRatio;
	unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> >* _contentsBuffer;
	unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> >* _drawingBuffer;
	unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> >* _spareBuffer;
	IntSize _bufferSize;
	BOOL _usingAlpha;
	void* _eglDisplay;
	void* _eglConfig;
	void* _contentsPbuffer;
	void* _drawingPbuffer;
	void* _sparePbuffer;
	void* _latchedPbuffer;
	BOOL _preparedForDisplay;
	NakedPtr<WebCore::GraphicsContextGLOpenGL>* _context;

}

@property (assign,nonatomic) NakedPtr<WebCore::GraphicsContextGLOpenGL>* context;              //@synthesize context=_context - In the implementation block
-(void)prepareForDisplay;
-(id)initWithGraphicsContextGL:(NakedPtr<WebCore::GraphicsContextGLOpenGL>*)arg1 ;
-(void)setEGLDisplay:(void*)arg1 config:(void*)arg2 ;
-(void)releaseGLResources;
-(BOOL)allocateIOSurfaceBackingStoreWithSize:(IntSize)arg1 usingAlpha:(BOOL)arg2 ;
-(void)bindFramebufferToNextAvailableSurface;
-(NakedPtr<WebCore::GraphicsContextGLOpenGL>*)context;
-(void)setTransform:(CATransform3D)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(void)display;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setContext:(NakedPtr<WebCore::GraphicsContextGLOpenGL>*)arg1 ;
@end

