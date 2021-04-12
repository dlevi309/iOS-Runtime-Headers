/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView

@property (nonatomic,readonly) HFTemperatureIconDescriptor * iconDescriptor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldFlipForRTL;
@end

