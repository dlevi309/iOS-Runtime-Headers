/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKSolarRichComplicationFullColorImageView* _solarImageView;

}
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4 ;
@end

