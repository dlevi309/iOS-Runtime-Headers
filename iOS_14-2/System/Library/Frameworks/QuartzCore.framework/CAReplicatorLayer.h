/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property (assign) long long instanceCount; 
@property (assign) BOOL preservesDepth; 
@property (assign) double instanceDelay; 
@property (assign) CATransform3D instanceTransform; 
@property (assign) CGColorRef instanceColor; 
@property (assign) float instanceRedOffset; 
@property (assign) float instanceGreenOffset; 
@property (assign) float instanceBlueOffset; 
@property (assign) float instanceAlphaOffset; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setInstanceDelay:(double)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(CGColorRef)instanceColor;
-(id)init;
-(float)instanceRedOffset;
-(BOOL)preservesDepth;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)setInstanceTransform:(CATransform3D)arg1 ;
-(float)instanceGreenOffset;
-(long long)instanceCount;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setInstanceAlphaOffset:(float)arg1 ;
-(void)setInstanceGreenOffset:(float)arg1 ;
-(void)setInstanceRedOffset:(float)arg1 ;
-(float)instanceBlueOffset;
-(void)setInstanceBlueOffset:(float)arg1 ;
-(CATransform3D)instanceTransform;
-(void)setInstanceColor:(CGColorRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)setInstanceCount:(long long)arg1 ;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(float)instanceAlphaOffset;
-(double)instanceDelay;
@end

