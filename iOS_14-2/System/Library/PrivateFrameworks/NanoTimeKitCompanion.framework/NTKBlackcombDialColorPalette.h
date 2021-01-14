/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIColor;

@interface NTKBlackcombDialColorPalette : NSObject {

	UIColor* _backgroundColor;
	UIColor* _hourMarkerColor;
	UIColor* _smallTickColor;
	UIColor* _largeTickColor;
	UIColor* _largeHandsColor;
	UIColor* _secondHandColor;
	unsigned long long _color;

}

@property (nonatomic,readonly) unsigned long long color;                         //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * hourMarkerColor; 
@property (nonatomic,readonly) UIColor * smallTickColor; 
@property (nonatomic,readonly) UIColor * largeTickColor; 
@property (nonatomic,readonly) long long richComplicationViewTheme; 
@property (nonatomic,readonly) UIColor * platterTextColor; 
+(id)paletteForColor:(unsigned long long)arg1 ;
-(unsigned long long)color;
-(id)initWithColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)platterTextColor;
-(UIColor *)smallTickColor;
-(UIColor *)largeTickColor;
-(UIColor *)hourMarkerColor;
-(long long)richComplicationViewTheme;
@end

