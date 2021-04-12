/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKZeudleColorPalette.h>

@class UIColor, NSString;

@interface NTKZeusColorPalette : NSObject <NTKZeudleColorPalette> {

	unsigned long long _color;
	UIColor* _handInlayColorForNonDetailedDensity;
	UIColor* _bottomComplicationColor;
	UIColor* _dialColor;
	UIColor* _secondHandColor;
	UIColor* _minuteHandColor;
	UIColor* _hourHandColor;
	UIColor* _handInlayColor;
	UIColor* _minuteHandDotColor;
	UIColor* _backgroundColor;
	double _secondHandAlpha;
	unsigned long long _bleed;
	UIColor* _splitColor;

}

@property (nonatomic,readonly) UIColor * dialColor;                                      //@synthesize dialColor=_dialColor - In the implementation block
@property (nonatomic,readonly) UIColor * secondHandColor;                                //@synthesize secondHandColor=_secondHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * minuteHandColor;                                //@synthesize minuteHandColor=_minuteHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * hourHandColor;                                  //@synthesize hourHandColor=_hourHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * handInlayColor;                                 //@synthesize handInlayColor=_handInlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * minuteHandDotColor;                             //@synthesize minuteHandDotColor=_minuteHandDotColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double secondHandAlpha;                                   //@synthesize secondHandAlpha=_secondHandAlpha - In the implementation block
@property (nonatomic,readonly) unsigned long long bleed;                                 //@synthesize bleed=_bleed - In the implementation block
@property (nonatomic,readonly) BOOL wantsStatusBarIconShadow; 
@property (nonatomic,readonly) UIColor * splitColor;                                     //@synthesize splitColor=_splitColor - In the implementation block
@property (nonatomic,readonly) UIColor * bottomComplicationColor;                        //@synthesize bottomComplicationColor=_bottomComplicationColor - In the implementation block
@property (nonatomic,readonly) UIColor * bottomComplicationBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForColor:(unsigned long long)arg1 ;
+(id)zeusSilverColor;
+(id)zeusOrangeColor;
+(id)craieColor;
+(id)indigoColor;
+(id)bordeauxColor;
+(id)feuColor;
+(id)capucineColor;
+(id)roseAzaleeColor;
+(id)roseExtremeColor;
+(id)ambreColor;
+(id)encreColor;
+(id)etainColor;
+(id)briqueColor;
+(id)noirColor;
+(id)noirHandStrokeColor;
+(id)noirSecondHandColor;
+(id)noirDualToneBackgroundColor;
+(id)noirDualToneSplitColor;
+(id)noirDualToneHandInlayTextColor;
+(id)zeusBlancColor;
+(id)blancDialTextColor;
+(id)blancSecondHandColor;
+(id)zeusRougePimentColor;
+(id)zeusJauneAmbreColor;
+(id)zeusBambouColor;
+(id)zeusNavyColor;
+(id)zeusAnemoneColor;
+(id)sakuraLightColor;
+(id)sakuraMediumColor;
+(id)sakuraDarkColor;
+(id)bleuLightColor;
+(id)bleuMediumColor;
+(id)bleuDarkColor;
+(id)offWhiteColor;
+(id)charcoalColor;
+(id)swatchColorForColor:(unsigned long long)arg1 ;
+(id)swatchImageForColor:(unsigned long long)arg1 ;
-(unsigned long long)bleed;
-(id)initWithColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)secondHandColor;
-(UIColor *)handInlayColor;
-(UIColor *)splitColor;
-(UIColor *)minuteHandDotColor;
-(UIColor *)minuteHandColor;
-(UIColor *)hourHandColor;
-(UIColor *)bottomComplicationColor;
-(BOOL)wantsStatusBarIconShadow;
-(UIColor *)dialColor;
-(id)handInlayColorForDensity:(unsigned long long)arg1 ;
-(double)secondHandAlpha;
@end

