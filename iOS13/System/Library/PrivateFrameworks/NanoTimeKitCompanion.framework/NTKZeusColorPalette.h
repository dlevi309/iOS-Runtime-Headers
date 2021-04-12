/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIColor;

@interface NTKZeusColorPalette : NSObject {

	unsigned long long _color;
	UIColor* _dialColor;
	UIColor* _complicationColor;
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

@property (nonatomic,readonly) UIColor * dialColor;                       //@synthesize dialColor=_dialColor - In the implementation block
@property (nonatomic,readonly) UIColor * complicationColor;               //@synthesize complicationColor=_complicationColor - In the implementation block
@property (nonatomic,readonly) UIColor * secondHandColor;                 //@synthesize secondHandColor=_secondHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * minuteHandColor;                 //@synthesize minuteHandColor=_minuteHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * hourHandColor;                   //@synthesize hourHandColor=_hourHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * handInlayColor;                  //@synthesize handInlayColor=_handInlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * minuteHandDotColor;              //@synthesize minuteHandDotColor=_minuteHandDotColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double secondHandAlpha;                    //@synthesize secondHandAlpha=_secondHandAlpha - In the implementation block
@property (nonatomic,readonly) unsigned long long bleed;                  //@synthesize bleed=_bleed - In the implementation block
@property (nonatomic,readonly) UIColor * splitColor;                      //@synthesize splitColor=_splitColor - In the implementation block
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
-(id)initWithColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)complicationColor;
-(unsigned long long)bleed;
-(UIColor *)secondHandColor;
-(UIColor *)handInlayColor;
-(UIColor *)splitColor;
-(UIColor *)minuteHandDotColor;
-(UIColor *)minuteHandColor;
-(UIColor *)hourHandColor;
-(UIColor *)dialColor;
-(double)secondHandAlpha;
@end

