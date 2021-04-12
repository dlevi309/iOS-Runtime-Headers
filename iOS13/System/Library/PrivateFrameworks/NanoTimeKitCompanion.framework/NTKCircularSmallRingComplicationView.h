/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {

	NTKColoringImageView* _fillFractionRing;
	double _fillFraction;
	BOOL _didDrawOnce;
	UIColor* _ringOverrideColor;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)updateRingWithRingDescription:(id)arg1 ;
-(void)updateRingWithOverrideColor:(id)arg1 ;
@end

