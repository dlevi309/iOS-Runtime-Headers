/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALinearMaskLayer : CALayer

@property (assign) CGColorRef foregroundColor; 
@property (__weak) id<CALinearMaskLayerDelegate><CALayerDelegate> delegate; 
+(id)defaultValueForKey:(id)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(CGColorRef)foregroundColor;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)drawInLinearMaskContext:(CALinearMaskContextRef)arg1 ;
@end

