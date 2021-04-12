/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer, NSString, NSDictionary;

@interface CAContext : NSObject

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
+(id)currentContext;
+(void)setClientPort:(unsigned)arg1 ;
+(id)remoteContextWithOptions:(id)arg1 ;
+(id)localContextWithOptions:(id)arg1 ;
+(id)objectForSlot:(unsigned)arg1 ;
+(id)localContext;
+(id)allContexts;
+(id)remoteContext;
-(void)invalidate;
-(void)orderAbove:(unsigned)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(unsigned)createFencePort;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)invalidateFences;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3 ;
-(unsigned)hitTestContext:(CGPoint)arg1 ;
@end

