/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode; 
@property (assign) BOOL invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) double offset; 
@property (assign) double sharpness; 
@property (assign) double lineWidth; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(void)_colorSpaceDidChange;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(CGColorRef)foregroundColor;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)offset;
-(NSString *)renderMode;
-(double)sharpness;
-(void)setOffset:(double)arg1 ;
-(unsigned)_renderImageCopyFlags;
-(BOOL)invertsShape;
-(void)setInvertsShape:(BOOL)arg1 ;
-(void)setSharpness:(double)arg1 ;
@end

