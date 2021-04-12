/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CAContext, CALayer;

@interface CARenderer : NSObject {

	CARendererPriv* _priv;

}

@property (retain) CAContext * context; 
@property (__weak) id<CARendererDelegate> delegate; 
@property (retain) CALayer * layer; 
@property (assign) CGRect bounds; 
+(id)rendererWithMTLTexture:(id)arg1 options:(id)arg2 ;
+(id)rendererWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id<CARendererDelegate>)delegate;
-(void)setDelegate:(id<CARendererDelegate>)arg1 ;
-(CAContext *)context;
-(void)setContext:(CAContext *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDestination:(id)arg1 ;
-(CALayer *)layer;
-(void)endFrame;
-(void)setLayer:(CALayer *)arg1 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)_initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA28*)arg2 ;
-(CGRect)updateBounds;
-(void)addUpdateRect:(CGRect)arg1 ;
-(double)nextFrameTime;
-(BOOL)hasMissingContent;
-(void)render;
@end

