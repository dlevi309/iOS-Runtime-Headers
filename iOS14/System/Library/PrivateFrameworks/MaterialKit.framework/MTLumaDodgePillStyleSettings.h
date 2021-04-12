/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <PrototypeTools/PTSettings.h>

@interface MTLumaDodgePillStyleSettings : PTSettings {

	double _colorAddOpacity;
	double _lumaMapPlusColorOpacity;
	double _overlayBlendOpacity;
	double _blur;
	double _brightness;
	double _saturation;

}

@property (assign,nonatomic) double colorAddOpacity;                      //@synthesize colorAddOpacity=_colorAddOpacity - In the implementation block
@property (assign,nonatomic) double lumaMapPlusColorOpacity;              //@synthesize lumaMapPlusColorOpacity=_lumaMapPlusColorOpacity - In the implementation block
@property (assign,nonatomic) double overlayBlendOpacity;                  //@synthesize overlayBlendOpacity=_overlayBlendOpacity - In the implementation block
@property (assign,nonatomic) double blur;                                 //@synthesize blur=_blur - In the implementation block
@property (assign,nonatomic) double brightness;                           //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) double saturation;                           //@synthesize saturation=_saturation - In the implementation block
+(id)settingsControllerModule;
-(double)blur;
-(void)setDefaultValues;
-(double)brightness;
-(void)setSaturation:(double)arg1 ;
-(double)saturation;
-(void)setBrightness:(double)arg1 ;
-(void)setBlur:(double)arg1 ;
-(void)setColorAddOpacity:(double)arg1 ;
-(void)setLumaMapPlusColorOpacity:(double)arg1 ;
-(void)setOverlayBlendOpacity:(double)arg1 ;
-(double)colorAddOpacity;
-(double)lumaMapPlusColorOpacity;
-(double)overlayBlendOpacity;
@end

