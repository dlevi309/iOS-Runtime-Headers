/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CLKDevice, UIColor;

@interface NTKChronoPalette : NSObject {

	BOOL _showsShadows;
	CLKDevice* _device;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _tickColor;
	UIColor* _alternativeTickColor;
	UIColor* _labelColor;
	UIColor* _chronoHandColor;
	UIColor* _dateComplicationColor;
	UIColor* _inlayColor;
	UIColor* _glyphColor;
	UIColor* _glyphBackgroundColor;
	UIColor* _swatchColor;
	double _smallTickValue;
	double _largeTickValue;
	unsigned long long _paletteColor;

}

@property (nonatomic,readonly) CLKDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * foregroundColor;                    //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * tickColor;                          //@synthesize tickColor=_tickColor - In the implementation block
@property (nonatomic,readonly) UIColor * alternativeTickColor;               //@synthesize alternativeTickColor=_alternativeTickColor - In the implementation block
@property (nonatomic,readonly) UIColor * labelColor;                         //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,readonly) UIColor * chronoHandColor;                    //@synthesize chronoHandColor=_chronoHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * dateComplicationColor;              //@synthesize dateComplicationColor=_dateComplicationColor - In the implementation block
@property (nonatomic,readonly) UIColor * inlayColor;                         //@synthesize inlayColor=_inlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * glyphColor;                         //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) UIColor * glyphBackgroundColor;               //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * swatchColor;                        //@synthesize swatchColor=_swatchColor - In the implementation block
@property (nonatomic,readonly) double smallTickValue;                        //@synthesize smallTickValue=_smallTickValue - In the implementation block
@property (nonatomic,readonly) double largeTickValue;                        //@synthesize largeTickValue=_largeTickValue - In the implementation block
@property (nonatomic,readonly) unsigned long long paletteColor;              //@synthesize paletteColor=_paletteColor - In the implementation block
@property (nonatomic,readonly) BOOL showsShadows;                            //@synthesize showsShadows=_showsShadows - In the implementation block
+(id)paletteForDevice:(id)arg1 withColor:(unsigned long long)arg2 ;
+(id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(double)arg3 ;
-(UIColor *)foregroundColor;
-(UIColor *)glyphColor;
-(UIColor *)backgroundColor;
-(UIColor *)labelColor;
-(CLKDevice *)device;
-(UIColor *)swatchColor;
-(id)initForDevice:(id)arg1 ;
-(UIColor *)dateComplicationColor;
-(unsigned long long)paletteColor;
-(UIColor *)glyphBackgroundColor;
-(UIColor *)inlayColor;
-(UIColor *)chronoHandColor;
-(UIColor *)tickColor;
-(UIColor *)alternativeTickColor;
-(double)smallTickValue;
-(double)largeTickValue;
-(id)_initForDevice:(id)arg1 withColor:(unsigned long long)arg2 ;
-(BOOL)showsShadows;
@end

