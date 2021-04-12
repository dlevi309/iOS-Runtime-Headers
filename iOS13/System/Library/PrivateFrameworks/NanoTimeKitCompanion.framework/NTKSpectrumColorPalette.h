/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIColor;

@interface NTKSpectrumColorPalette : NSObject {

	float _overlayOpacity;
	UIColor* _bandColor;
	UIColor* _fromColor;
	UIColor* _toColor;

}

@property (nonatomic,readonly) UIColor * bandColor;               //@synthesize bandColor=_bandColor - In the implementation block
@property (nonatomic,readonly) UIColor * fromColor;               //@synthesize fromColor=_fromColor - In the implementation block
@property (nonatomic,readonly) UIColor * toColor;                 //@synthesize toColor=_toColor - In the implementation block
@property (nonatomic,readonly) float overlayOpacity;              //@synthesize overlayOpacity=_overlayOpacity - In the implementation block
+(id)swatchImageForColor:(unsigned long long)arg1 device:(id)arg2 ;
+(id)paletteForColor:(unsigned long long)arg1 device:(id)arg2 ;
-(UIColor *)fromColor;
-(UIColor *)toColor;
-(id)initWithColor:(unsigned long long)arg1 device:(id)arg2 ;
-(UIColor *)bandColor;
-(float)overlayOpacity;
@end

