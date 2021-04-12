/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class EAGLContext, NSObject, CADisplayLink;

@interface WKOpenGLESView : UIView {

	BOOL _initialized;
	EAGLContext* _context;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	NSObject*<OS_dispatch_queue> displayQueue;
	CADisplayLink* displayLink;
	long long frameInterval;

}

@property (assign) long long frameInterval; 
+(Class)layerClass;
-(id)init;
-(void)_init;
-(long long)frameInterval;
-(void)setFrameInterval:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepare;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)drawGL:(id)arg1 ;
-(BOOL)drawAtTime:(double)arg1 ;
@end

