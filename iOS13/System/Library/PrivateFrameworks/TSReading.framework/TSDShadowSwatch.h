/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathPainter.h>

@class TSDShadow, NSString;

@interface TSDShadowSwatch : NSObject <TSDPathPainter> {

	TSDShadow* mShadow;

}

@property (nonatomic,readonly) TSDShadow * shadow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(TSDShadow *)shadow;
-(id)initWithShadow:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5 ;
-(void)p_drawContactShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
-(void)p_drawCurvedShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
@end

