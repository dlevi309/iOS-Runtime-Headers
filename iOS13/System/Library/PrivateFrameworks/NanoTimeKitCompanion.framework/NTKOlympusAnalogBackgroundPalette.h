/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundColorPalette.h>

@class NTKOlympusColorPalette, NSString, UIColor;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {

	NTKOlympusColorPalette* _olympusPalette;

}

@property (nonatomic,retain) NTKOlympusColorPalette * olympusPalette;              //@synthesize olympusPalette=_olympusPalette - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * numbersColor; 
@property (nonatomic,readonly) UIColor * logoColor; 
@property (nonatomic,readonly) UIColor * analogDotColor; 
@property (nonatomic,readonly) BOOL hasWhiteElements; 
-(UIColor *)backgroundColor;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForLogoWithStyle:(unsigned long long)arg1 ;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;
-(id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2 ;
-(id)initWithOlympusPalette:(id)arg1 ;
-(NTKOlympusColorPalette *)olympusPalette;
-(void)setOlympusPalette:(NTKOlympusColorPalette *)arg1 ;
@end

