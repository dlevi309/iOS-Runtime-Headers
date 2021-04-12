/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKZeudleComplicationDisplay <NSObject>
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,readonly) id<NTKZeudleColorPalette> palette; 
@property (assign,nonatomic) BOOL legibilityEnabled; 
@required
-(id<NTKZeudleColorPalette>)palette;
-(void)setStyle:(unsigned long long)arg1;
-(unsigned long long)style;
-(id)initWithBackgroundView:(id)arg1;
-(void)applyPalette:(id)arg1;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1;

@end

