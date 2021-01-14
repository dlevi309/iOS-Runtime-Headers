/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(unsigned)seed;
-(void)setSpin:(float)arg1 ;
-(void)_colorSpaceDidChange;
-(void)setVelocity:(float)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(double)updateInterval;
-(void)setRenderMode:(NSString *)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(float)birthRate;
-(double)emitterDepth;
-(float)velocity;
-(void)setSeed:(unsigned)arg1 ;
-(void)setLifetime:(float)arg1 ;
-(NSArray *)emitterBehaviors;
-(double)cullMaxZ;
-(float)lifetime;
-(BOOL)preservesDepth;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)setBirthRate:(float)arg1 ;
-(NSString *)emitterShape;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(float)spin;
-(NSString *)emitterMode;
-(CGSize)emitterSize;
-(void)didChangeValueForKey:(id)arg1 ;
-(float)spinBias;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(float)scale;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(NSArray *)emitterCells;
-(void)setEmitterRects:(NSArray *)arg1 ;
-(void)setEmitterDuration:(float)arg1 ;
-(void)setCullRect:(CGRect)arg1 ;
-(void)setSpinBias:(float)arg1 ;
-(NSString *)renderMode;
-(const CGPathRef)emitterPath;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)setEmitterSize:(CGSize)arg1 ;
-(CGRect)cullRect;
-(void)setEmitterShape:(NSString *)arg1 ;
-(void)setEmitterZPosition:(double)arg1 ;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(float)emitterDuration;
-(double)emitterZPosition;
-(NSArray *)emitterRects;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)setEmitterPath:(const CGPathRef)arg1 ;
-(CGPoint)emitterPosition;
-(void)setCullMinZ:(double)arg1 ;
-(double)cullMinZ;
-(void)setEmitterDepth:(double)arg1 ;
-(void)setCullMaxZ:(double)arg1 ;
@end

