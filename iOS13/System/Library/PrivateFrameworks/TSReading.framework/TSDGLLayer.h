/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@protocol TSDGLLayerDelegate, TSDGLLayerContext;
@class NSObject, CADisplayLink;

@interface TSDGLLayer : CAEAGLLayer {

	NSObject*<TSDGLLayerDelegate> mDelegate;
	id<TSDGLLayerContext> mContext;
	CADisplayLink* mDisplayLink;

}

@property (assign,nonatomic) NSObject*<TSDGLLayerDelegate> animationDelegate; 
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)teardown;
-(void)startAnimation;
-(void)stopAnimation;
-(void)pauseAnimation;
-(void)setAnimationDelegate:(NSObject*<TSDGLLayerDelegate>)arg1 ;
-(NSObject*<TSDGLLayerDelegate>)animationDelegate;
-(void)resumeAnimation;
-(void)p_drawFrameAtLayerTime:(double)arg1 ;
-(void)p_drawFrameFromDisplayLink:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setCurrentContext;
-(void)displayAtCurrentLayerTime;
@end

