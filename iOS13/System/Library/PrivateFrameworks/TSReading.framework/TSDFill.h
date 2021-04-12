/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathPainter.h>
#import <TSReading/TSSThemeAsset.h>

@class NSString;

@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset> {

	int mInterest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isOpaque;
-(id)referenceColor;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(BOOL)isNearlyWhite;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)drawsInOneStep;
-(void)addInterest;
-(void)removeInterest;
-(BOOL)isClear;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(void)i_flushCaches;
@end

