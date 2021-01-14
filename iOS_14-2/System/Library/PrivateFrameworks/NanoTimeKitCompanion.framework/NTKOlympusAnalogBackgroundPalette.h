/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundColorPalette.h>

@class NTKOlympusColorPalette, UIColor, NSString;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {

	NTKOlympusColorPalette* _olympusPalette;

}

@property (nonatomic,retain) NTKOlympusColorPalette * olympusPalette;              //@synthesize olympusPalette=_olympusPalette - In the implementation block
@property (nonatomic,readonly) unsigned long long faceColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * numbersColor; 
@property (nonatomic,readonly) UIColor * logoColor; 
@property (nonatomic,readonly) UIColor * analogDotColor; 
@property (nonatomic,readonly) BOOL hasWhiteElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)backgroundColor;
-(unsigned long long)faceColor;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForLogoWithStyle:(unsigned long long)arg1 ;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;
-(id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2 ;
-(id)_softBlackColor;
-(id)initWithOlympusPalette:(id)arg1 ;
-(NTKOlympusColorPalette *)olympusPalette;
-(void)setOlympusPalette:(NTKOlympusColorPalette *)arg1 ;
@end

