/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@interface WebGLLayer : CAEAGLLayer {

	GraphicsContext3D* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GraphicsContext3D* context;              //@synthesize context=_context - In the implementation block
-(GraphicsContext3D*)context;
-(void)setContext:(GraphicsContext3D*)arg1 ;
-(void)display;
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
@end

