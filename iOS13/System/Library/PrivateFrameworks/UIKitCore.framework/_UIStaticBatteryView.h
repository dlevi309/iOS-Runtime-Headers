/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBatteryView.h>

@interface _UIStaticBatteryView : _UIBatteryView {

	long long _inflightBoltAnimationCount;

}
+(id)_batteryBoltMaskImageWithSize:(CGSize)arg1 boltSize:(CGSize)arg2 forScale:(double)arg3 ;
+(id)_batteryBoltImageWithSize:(CGSize)arg1 boltSize:(CGSize)arg2 forScale:(double)arg3 ;
+(id)_batteryBodyImageWithSize:(CGSize)arg1 forScale:(double)arg2 batteryRect:(CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(CGSize)arg6 inRect:(CGRect)arg7 boltFlipped:(BOOL)arg8 ;
+(id)_batteryBodyImageWithSize:(CGSize)arg1 forScale:(double)arg2 batteryRect:(CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 ;
+(id)_batteryPinImageWithSize:(CGSize)arg1 forScale:(double)arg2 complexPinPath:(BOOL)arg3 ;
+(id)_batteryFillImageWithSize:(CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(CGSize)arg4 inRect:(CGRect)arg5 boltFlipped:(BOOL)arg6 ;
+(id)_batteryFillImageWithSize:(CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 ;
+(id)_renderedImageOfSize:(CGSize)arg1 scale:(double)arg2 withActions:(/*^block*/id)arg3 ;
+(id)_imageWithRenderedBezierPath:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(BOOL)arg5 ;
+(id)_imageByPunchingImage:(id)arg1 inRect:(CGRect)arg2 flippedHorizontally:(BOOL)arg3 outOfImage:(id)arg4 inRect:(CGRect)arg5 size:(CGSize)arg6 scale:(double)arg7 ;
-(double)_batteryPathScaleFactor;
-(double)_batteryBoltLargeScaleFactor;
-(BOOL)_useImagesWithCutoutsForBolt;
-(CGSize)_boltPathSize;
-(CGRect)_boltRectForTraitCollection:(id)arg1 boltSize:(CGSize)arg2 ;
-(CGRect)_updateBodyLayers;
-(void)_updateFillLayer;
-(void)_createBodyLayers;
-(void)_createFillLayer;
-(void)_createBoltLayersWithSize:(CGSize)arg1 ;
-(void)_updateBodyColors;
-(void)_updateBatteryFillColor;
-(double)_batteryBoltSmallScaleFactor;
-(void)_willBeginAnimatingBoltToVisible:(BOOL)arg1 ;
-(void)_didFinishAnimatingBoltToVisible:(BOOL)arg1 ;
@end

