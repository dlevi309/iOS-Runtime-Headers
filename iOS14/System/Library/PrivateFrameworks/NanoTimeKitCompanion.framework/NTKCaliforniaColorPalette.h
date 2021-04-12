/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKCircularAnalogDialColorPalette.h>

@class UIColor, CLKDevice, NSString;

@interface NTKCaliforniaColorPalette : NSObject <NTKCircularAnalogDialColorPalette> {

	unsigned long long _color;
	UIColor* _backgroundColor;
	UIColor* _circularBackgroundColor;
	UIColor* _swatchBackgroundColor;
	UIColor* _hourMarkerColor;
	UIColor* _smallTickColor;
	UIColor* _largeTickColor;
	UIColor* _hourHandInlayColor;
	UIColor* _hourHandStrokeColor;
	UIColor* _secondHandColor;
	UIColor* _cornerComplicationOuterTextColor;
	UIColor* _cornerComplicationInnerTextColor;
	UIColor* _simpleTextComplicationColor;
	UIColor* _circularComplicationColorA;
	UIColor* _circularComplicationColorB;
	UIColor* _bezelComplicationColor;
	UIColor* _circularDialSubtickColor;
	CLKDevice* _device;

}

@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * circularBackgroundColor; 
@property (nonatomic,readonly) BOOL isBlackBackground; 
@property (nonatomic,readonly) UIColor * hourMarkerColor; 
@property (nonatomic,readonly) UIColor * smallTickColor; 
@property (nonatomic,readonly) UIColor * largeTickColor; 
@property (nonatomic,readonly) UIColor * hourHandInlayColor; 
@property (nonatomic,readonly) UIColor * hourHandStrokeColor; 
@property (nonatomic,readonly) UIColor * secondHandColor; 
@property (nonatomic,readonly) UIColor * cornerComplicationOuterTextColor; 
@property (nonatomic,readonly) UIColor * cornerComplicationInnerTextColor; 
@property (nonatomic,readonly) UIColor * simpleTextComplicationColor; 
@property (nonatomic,readonly) UIColor * bezelComplicationColor; 
@property (nonatomic,readonly) UIColor * circularComplicationColorA; 
@property (nonatomic,readonly) UIColor * circularComplicationColorB; 
@property (nonatomic,readonly) long long richComplicationViewTheme; 
@property (nonatomic,readonly) UIColor * platterTextColor; 
@property (nonatomic,readonly) UIColor * worldClockDaytimeBackgrounColor; 
@property (nonatomic,readonly) UIColor * worldClockDaytimeHandsColors; 
@property (nonatomic,readonly) UIColor * worldClockDaytimeHandsDotColors; 
@property (nonatomic,readonly) UIColor * worldClockNighttimeBackgrounColor; 
@property (nonatomic,readonly) UIColor * worldClockNighttimeHandsColors; 
@property (nonatomic,readonly) UIColor * worldClockNighttimeHandsDotColors; 
@property (nonatomic,readonly) BOOL isMulticolorPalette; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForColor:(unsigned long long)arg1 ;
-(unsigned long long)color;
-(id)initWithColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)platterTextColor;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)secondHandColor;
-(BOOL)isBlackBackground;
-(UIColor *)smallTickColor;
-(UIColor *)largeTickColor;
-(UIColor *)hourMarkerColor;
-(id)colorForHourMarker:(unsigned long long)arg1 ;
-(long long)richComplicationViewTheme;
-(UIColor *)hourHandInlayColor;
-(UIColor *)hourHandStrokeColor;
-(UIColor *)circularBackgroundColor;
-(UIColor *)circularComplicationColorB;
-(UIColor *)circularComplicationColorA;
-(UIColor *)cornerComplicationInnerTextColor;
-(UIColor *)cornerComplicationOuterTextColor;
-(UIColor *)bezelComplicationColor;
-(UIColor *)worldClockDaytimeBackgrounColor;
-(UIColor *)worldClockDaytimeHandsColors;
-(UIColor *)worldClockDaytimeHandsDotColors;
-(UIColor *)worldClockNighttimeBackgrounColor;
-(UIColor *)worldClockNighttimeHandsColors;
-(UIColor *)worldClockNighttimeHandsDotColors;
-(UIColor *)simpleTextComplicationColor;
-(id)swatchImage;
-(id)circularDialFillColor;
-(BOOL)isMulticolorPalette;
-(id)colorForCircularTicksForMinute:(unsigned long long)arg1 ;
-(id)circularDialSubtickColor;
-(id)colorForCircularTicksForHour:(unsigned long long)arg1 ;
-(id)circularDialTickColor;
-(BOOL)_shouldHideColor:(unsigned long long)arg1 ;
-(id)_colorForCircularTicksForMinute:(unsigned long long)arg1 ;
-(BOOL)isLightColor;
-(id)swatchBackgroundColor;
@end

