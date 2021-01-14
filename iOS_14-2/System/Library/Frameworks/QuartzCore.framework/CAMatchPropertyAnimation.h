/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setAdditive:(BOOL)arg1 ;
-(unsigned)sourceContextId;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(NSString *)keyPath;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(BOOL)isAdditive;
-(CALayer *)sourceLayer;
@end

