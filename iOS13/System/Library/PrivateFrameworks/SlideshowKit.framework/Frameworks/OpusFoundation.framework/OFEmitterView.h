/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString;

@interface OFEmitterView : OFUIView

@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) NSArray * emitterCells; 
@property (assign,nonatomic) double emitterDepth; 
@property (assign,nonatomic) NSString * emitterMode; 
@property (assign,nonatomic) CGPoint emitterPosition; 
@property (assign,nonatomic) NSString * emitterShape; 
@property (assign,nonatomic) CGSize emitterSize; 
@property (assign,nonatomic) double emitterZPosition; 
@property (assign,nonatomic) double lifetime; 
@property (assign,nonatomic) NSString * renderMode; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) double spin; 
@property (assign,nonatomic) double velocity; 
+(Class)layerClass;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(unsigned)seed;
-(void)setRenderMode:(NSString *)arg1 ;
-(NSString *)renderMode;
-(NSArray *)emitterCells;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(double)birthRate;
-(void)setBirthRate:(double)arg1 ;
-(double)lifetime;
-(void)setLifetime:(double)arg1 ;
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
-(double)spin;
-(void)setSpin:(double)arg1 ;
-(void)setSeed:(unsigned)arg1 ;
-(id)emitterLayer;
@end

