/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView

@property (nonatomic,readonly) HFTemperatureIconDescriptor * iconDescriptor; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldFlipForRTL;
@end

