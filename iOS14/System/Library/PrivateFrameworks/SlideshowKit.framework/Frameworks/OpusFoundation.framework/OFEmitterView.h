/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)seed;
-(void)setSpin:(double)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(double)birthRate;
-(double)emitterDepth;
-(double)velocity;
-(void)setSeed:(unsigned)arg1 ;
-(void)setLifetime:(double)arg1 ;
-(double)lifetime;
-(void)setBirthRate:(double)arg1 ;
-(NSString *)emitterShape;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(double)spin;
-(NSString *)emitterMode;
-(CGSize)emitterSize;
-(double)scale;
-(NSArray *)emitterCells;
-(NSString *)renderMode;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setEmitterSize:(CGSize)arg1 ;
-(void)setEmitterShape:(NSString *)arg1 ;
-(void)setEmitterZPosition:(double)arg1 ;
-(double)emitterZPosition;
-(CGPoint)emitterPosition;
-(void)setEmitterDepth:(double)arg1 ;
-(void)dealloc;
-(id)emitterLayer;
@end

