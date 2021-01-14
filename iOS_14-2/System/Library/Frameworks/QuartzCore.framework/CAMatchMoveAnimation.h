/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (copy) NSString * keyPath; 
@property (assign) BOOL targetsSuperlayer; 
@property (copy) NSArray * sourcePoints; 
@property (assign) BOOL usesNormalizedCoordinates; 
@property (assign) BOOL appliesX; 
@property (assign) BOOL appliesY; 
@property (assign) BOOL appliesScale; 
@property (assign) BOOL appliesRotation; 
@property (getter=isAdditive) BOOL additive; 
+(id)defaultValueForKey:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)setTargetsSuperlayer:(BOOL)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)appliesScale;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(BOOL)appliesY;
-(void)setAppliesX:(BOOL)arg1 ;
-(void)setAppliesY:(BOOL)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setAdditive:(BOOL)arg1 ;
-(unsigned)sourceContextId;
-(void)setAppliesRotation:(BOOL)arg1 ;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(BOOL)appliesRotation;
-(void)setSourcePoints:(NSArray *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(NSString *)keyPath;
-(BOOL)appliesX;
-(NSArray *)sourcePoints;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(BOOL)targetsSuperlayer;
-(BOOL)isAdditive;
-(CALayer *)sourceLayer;
-(void)setUsesNormalizedCoordinates:(BOOL)arg1 ;
-(void)setAppliesScale:(BOOL)arg1 ;
-(BOOL)usesNormalizedCoordinates;
@end

