/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class NTKZeusColorPalette;


@protocol NTKZeusComplicationDisplay <NSObject>
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,readonly) NTKZeusColorPalette * palette; 
@property (assign,nonatomic) BOOL legibilityEnabled; 
@required
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1;
-(NTKZeusColorPalette *)palette;
-(void)setLegibilityEnabled:(BOOL)arg1;
-(void)applyPalette:(id)arg1;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
-(BOOL)legibilityEnabled;

@end

