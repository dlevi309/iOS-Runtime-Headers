/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForColor:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)color;
-(id)initWithColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)platterTextColor;
-(id)swatchImage;
-(UIColor *)secondHandColor;
-(UIColor *)smallTickColor;
-(UIColor *)largeTickColor;
-(UIColor *)hourMarkerColor;
-(long long)richComplicationViewTheme;
-(BOOL)isBlackBackground;
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
-(id)circularDialFillColor;
-(id)circularDialSubtickColor;
-(id)circularDialTickColor;
-(BOOL)isLightColor;
-(id)swatchBackgroundColor;
@end

