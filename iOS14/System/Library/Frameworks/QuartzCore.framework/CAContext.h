/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer, NSString, NSDictionary;

@interface CAContext : NSObject {

	Context* _impl;

}

@property (readonly) unsigned contextId; 
@property (retain) CALayer * layer; 
@property (assign) CGColorSpaceRef colorSpace; 
@property (assign) unsigned commitPriority; 
@property (assign) BOOL colorMatchUntaggedContent; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * annotation; 
@property (readonly) NSDictionary * options; 
@property (assign) float level; 
@property (readonly) unsigned displayId; 
@property (getter=isSecure) BOOL secure; 
@property (assign) float desiredDynamicRange; 
@property (readonly) BOOL valid; 
+(id)localContext;
+(id)remoteContextWithOptions:(id)arg1 ;
+(id)allContexts;
+(id)objectForSlot:(unsigned)arg1 ;
+(id)currentContext;
+(void)setClientPort:(unsigned)arg1 ;
+(id)remoteContext;
+(id)localContextWithOptions:(id)arg1 ;
-(BOOL)isSecure;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(NSString *)annotation;
-(void)setSecure:(BOOL)arg1 ;
-(CALayer *)layer;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(unsigned)displayId;
-(unsigned)contextId;
-(void)invalidateFences;
-(void)setAnnotation:(NSString *)arg1 ;
-(BOOL)addFence:(id)arg1 ;
-(id)debugDescription;
-(NSDictionary *)options;
-(unsigned)createFencePort;
-(id)initRemoteWithOptions:(id)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(unsigned)commitPriority;
-(BOOL)addFence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)contentsFormat;
-(float)level;
-(unsigned)hitTestContext:(CGPoint)arg1 ;
-(float)desiredDynamicRange;
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(Context*)renderContext;
-(BOOL)valid;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3 ;
-(void)setDesiredDynamicRange:(float)arg1 ;
-(void)setCommitPriority:(unsigned)arg1 ;
-(void*)contextImpl;
-(void)invalidate;
-(void)orderAbove:(unsigned)arg1 ;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setColorMatchUntaggedContent:(BOOL)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(unsigned)createSlot;
-(Context*)retainRenderContext;
-(BOOL)colorMatchUntaggedContent;
-(void)setFencePort:(unsigned)arg1 ;
-(void)dealloc;
-(void)setContentsFormat:(NSString *)arg1 ;
@end

