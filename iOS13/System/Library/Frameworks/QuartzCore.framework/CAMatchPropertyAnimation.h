/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString;

@interface CAMatchPropertyAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
-(NSString *)keyPath;
-(BOOL)isAdditive;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(CALayer *)sourceLayer;
-(unsigned long long)sourceLayerRenderId;
-(unsigned)sourceContextId;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
@end

