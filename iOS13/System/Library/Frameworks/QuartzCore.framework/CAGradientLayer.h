/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap; 
@property (copy) NSArray * interpolations; 
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(CGPoint)endPoint;
-(NSArray *)interpolations;
-(void)setInterpolations:(NSArray *)arg1 ;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
@end

