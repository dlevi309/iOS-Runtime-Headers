/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property (assign) const CGPathRef emitterPath; 
@property (copy) NSArray * emitterRects; 
@property (assign) float emitterDuration; 
@property (assign) float spinBias; 
@property (copy) NSArray * emitterBehaviors; 
@property (assign) CGRect cullRect; 
@property (assign) double cullMinZ; 
@property (assign) double cullMaxZ; 
@property (assign) double updateInterval; 
@property (copy) NSArray * emitterCells; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) CGPoint emitterPosition; 
@property (assign) double emitterZPosition; 
@property (assign) CGSize emitterSize; 
@property (assign) double emitterDepth; 
@property (copy) NSString * emitterShape; 
@property (copy) NSString * emitterMode; 
@property (copy) NSString * renderMode; 
@property (assign) BOOL preservesDepth; 
@property (assign) float velocity; 
@property (assign) float scale; 
@property (assign) float spin; 
@property (assign) unsigned seed; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(float)velocity;
-(void)setVelocity:(float)arg1 ;
-(unsigned)seed;
-(void)setRenderMode:(NSString *)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(NSString *)renderMode;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(NSArray *)emitterCells;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(float)birthRate;
-(void)setBirthRate:(float)arg1 ;
-(float)lifetime;
-(void)setLifetime:(float)arg1 ;
-(NSString *)emitterShape;
-(void)setEmitterShape:(NSString *)arg1 ;
-(NSString *)emitterMode;
-(void)setEmitterMode:(NSString *)arg1 ;
-(CGPoint)emitterPosition;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(double)emitterZPosition;
-(void)setEmitterZPosition:(double)arg1 ;
-(CGSize)emitterSize;
-(void)setEmitterSize:(CGSize)arg1 ;
-(double)emitterDepth;
-(void)setEmitterDepth:(double)arg1 ;
-(float)spin;
-(void)setSpin:(float)arg1 ;
-(BOOL)preservesDepth;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)setSeed:(unsigned)arg1 ;
-(NSArray *)emitterRects;
-(const CGPathRef)emitterPath;
-(NSArray *)emitterBehaviors;
-(double)cullMaxZ;
-(double)cullMinZ;
-(CGRect)cullRect;
-(float)spinBias;
-(float)emitterDuration;
-(void)setEmitterPath:(const CGPathRef)arg1 ;
-(void)setEmitterRects:(NSArray *)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(void)setEmitterDuration:(float)arg1 ;
-(void)setSpinBias:(float)arg1 ;
-(void)setCullRect:(CGRect)arg1 ;
-(void)setCullMinZ:(double)arg1 ;
-(void)setCullMaxZ:(double)arg1 ;
@end

