/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithOptions:(id)arg1 ;
-(CGRect)bounds;
-(void)setDestination:(id)arg1 ;
-(CALayer *)layer;
-(void)render;
-(id<CARendererDelegate>)delegate;
-(void)endFrame;
-(CAContext *)context;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<CARendererDelegate>)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(id)_initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(CGRect)updateBounds;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA32*)arg2 ;
-(void)addUpdateRect:(CGRect)arg1 ;
-(double)nextFrameTime;
-(BOOL)hasMissingContent;
-(void)dealloc;
-(void)setContext:(CAContext *)arg1 ;
@end

