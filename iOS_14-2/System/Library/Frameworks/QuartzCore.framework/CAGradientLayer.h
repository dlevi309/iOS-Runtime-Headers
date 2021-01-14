/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(NSArray *)locations;
-(void)_colorSpaceDidChange;
-(NSArray *)colors;
-(id)colorMap;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(NSArray *)interpolations;
-(void)setColors:(NSArray *)arg1 ;
-(void)setColorMap:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setInterpolations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setLocations:(NSArray *)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
@end

