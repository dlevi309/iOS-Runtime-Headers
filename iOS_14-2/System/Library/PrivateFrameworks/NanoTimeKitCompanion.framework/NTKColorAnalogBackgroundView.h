/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, NSArray, CLKDevice, UIColor;

@interface NTKColorAnalogBackgroundView : UIView {

	CALayer* _tickContainerLayer;
	NSArray* _tickLayers;
	CALayer* _circleLayer;
	CALayer* _fullscreenLayer;
	CLKDevice* _device;
	UIColor* _color;
	unsigned long long _style;

}
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)applyStyle:(unsigned long long)arg1 ;
-(void)applyColor:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)cleanupAfterZoom;
-(void)applyTransitionFraction:(double)arg1 fromScheme:(id)arg2 toScheme:(id)arg3 ;
-(void)applyZoomFraction:(double)arg1 ;
-(void)updateLayerVisibilityForStyles:(id)arg1 ;
@end

