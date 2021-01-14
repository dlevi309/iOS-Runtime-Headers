/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALinearMaskLayer : CALayer

@property (assign) CGColorRef foregroundColor; 
@property (__weak) id<CALinearMaskLayerDelegate><CALayerDelegate> delegate; 
+(id)defaultValueForKey:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(CGColorRef)foregroundColor;
-(void)drawInLinearMaskContext:(CALinearMaskContextRef)arg1 ;
@end

