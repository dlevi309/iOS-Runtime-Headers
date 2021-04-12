/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class UIColor;


@protocol NTKVictoryAnalogBackgroundColorPalette <NSObject>
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * numbersColor; 
@property (nonatomic,readonly) UIColor * logoColor; 
@property (nonatomic,readonly) UIColor * analogDotColor; 
@property (nonatomic,readonly) BOOL hasWhiteElements; 
@required
-(UIColor *)backgroundColor;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1;
-(id)colorForLogoWithStyle:(unsigned long long)arg1;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;

@end

