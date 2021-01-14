/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class UIColor;


@protocol NTKVictoryAnalogBackgroundColorPalette <NSObject>
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * numbersColor; 
@property (nonatomic,readonly) UIColor * logoColor; 
@property (nonatomic,readonly) UIColor * analogDotColor; 
@property (nonatomic,readonly) BOOL hasWhiteElements; 
@property (nonatomic,readonly) unsigned long long faceColor; 
@required
-(UIColor *)backgroundColor;
-(unsigned long long)faceColor;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1;
-(id)colorForLogoWithStyle:(unsigned long long)arg1;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;

@end

