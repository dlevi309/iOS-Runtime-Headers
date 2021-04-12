/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext {

	Context* _impl;

}
-(void)dealloc;
-(void)invalidate;
-(id)options;
-(float)level;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isSecure;
-(id)layer;
-(BOOL)valid;
-(void)orderAbove:(unsigned)arg1 ;
-(void)setCommitPriority:(unsigned)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(unsigned)createFencePort;
-(unsigned)contextId;
-(void)setSecure:(BOOL)arg1 ;
-(id)annotation;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(unsigned)displayId;
-(id)contentsFormat;
-(void)setContentsFormat:(id)arg1 ;
-(ContextRef)renderContext;
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(unsigned)commitPriority;
-(BOOL)colorMatchUntaggedContent;
-(void)setColorMatchUntaggedContent:(BOOL)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)setDesiredDynamicRange:(float)arg1 ;
-(float)desiredDynamicRange;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)invalidateFences;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3 ;
-(unsigned)hitTestContext:(CGPoint)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(ContextRef)retainRenderContext;
@end

