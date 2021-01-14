/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, CALayer, NSArray;

@interface NTKSpectrumAnalogDialView : UIView {

	CLKDevice* _device;
	CALayer* _ticksLayer;
	NSArray* _allTicks;
	double _tickPadding;

}
+(id)_disabledLayerActions;
-(void)layoutSubviews;
-(void)setColor:(id)arg1 ;
-(void)cleanupAfterZoom;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)prepareForEdit;
-(void)cleanupAfterEdit;
-(void)prepareForZoom;
-(void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3 ;
-(void)applyZoomFraction:(double)arg1 ;
-(void)showAllTicksInDial;
-(void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2 ;
-(void)applyColorTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(void)_toggleRasterization:(BOOL)arg1 ;
-(double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3 ;
-(id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2 ;
-(void)fillDialTransitionWithFraction:(double)arg1 bezelTextWidthRadians:(double)arg2 ;
@end

