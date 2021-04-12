/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundColorPalette.h>

@class UIColor, CLKDevice, NSString;

@interface NTKVictoryColorPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {

	BOOL _hasWhiteElements;
	unsigned long long _color;
	UIColor* _numbersColor;
	UIColor* _handsColor;
	UIColor* _logoColor;
	UIColor* _secondHandColor;
	UIColor* _handInlayColor;
	UIColor* _analogComplicationsColor;
	UIColor* _analogDotColor;
	UIColor* _digitalComplicationsColor;
	UIColor* _digitalComplicationsPlatterColor;
	UIColor* _platterColor;
	UIColor* _cornerComplicationsAccentColor;
	unsigned long long _bleed;
	UIColor* _backgroundColor;
	CLKDevice* _device;

}

@property (nonatomic,retain) CLKDevice * device;                                        //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * numbersColor;                                  //@synthesize numbersColor=_numbersColor - In the implementation block
@property (nonatomic,readonly) UIColor * handsColor;                                    //@synthesize handsColor=_handsColor - In the implementation block
@property (nonatomic,readonly) UIColor * logoColor;                                     //@synthesize logoColor=_logoColor - In the implementation block
@property (nonatomic,readonly) UIColor * secondHandColor;                               //@synthesize secondHandColor=_secondHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * handInlayColor;                                //@synthesize handInlayColor=_handInlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * analogComplicationsColor;                      //@synthesize analogComplicationsColor=_analogComplicationsColor - In the implementation block
@property (nonatomic,readonly) UIColor * analogDotColor;                                //@synthesize analogDotColor=_analogDotColor - In the implementation block
@property (nonatomic,readonly) UIColor * digitalComplicationsColor;                     //@synthesize digitalComplicationsColor=_digitalComplicationsColor - In the implementation block
@property (nonatomic,readonly) UIColor * digitalComplicationsPlatterColor;              //@synthesize digitalComplicationsPlatterColor=_digitalComplicationsPlatterColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterColor;                                  //@synthesize platterColor=_platterColor - In the implementation block
@property (nonatomic,readonly) UIColor * cornerComplicationsAccentColor;                //@synthesize cornerComplicationsAccentColor=_cornerComplicationsAccentColor - In the implementation block
@property (nonatomic,readonly) BOOL hasWhiteElements;                                   //@synthesize hasWhiteElements=_hasWhiteElements - In the implementation block
@property (nonatomic,readonly) unsigned long long bleed;                                //@synthesize bleed=_bleed - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForDevice:(id)arg1 color:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
+(id)paletteForDevice:(id)arg1 color:(unsigned long long)arg2 bleed:(unsigned long long)arg3 ;
+(id)voltColor;
-(CLKDevice *)device;
-(unsigned long long)color;
-(UIColor *)backgroundColor;
-(void)setDevice:(CLKDevice *)arg1 ;
-(UIColor *)platterColor;
-(unsigned long long)bleed;
-(UIColor *)handsColor;
-(UIColor *)secondHandColor;
-(UIColor *)handInlayColor;
-(UIColor *)analogComplicationsColor;
-(id)initWithDevice:(id)arg1 color:(unsigned long long)arg2 bleed:(unsigned long long)arg3 ;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForLogoWithStyle:(unsigned long long)arg1 ;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;
-(UIColor *)digitalComplicationsColor;
-(UIColor *)digitalComplicationsPlatterColor;
-(UIColor *)cornerComplicationsAccentColor;
@end

