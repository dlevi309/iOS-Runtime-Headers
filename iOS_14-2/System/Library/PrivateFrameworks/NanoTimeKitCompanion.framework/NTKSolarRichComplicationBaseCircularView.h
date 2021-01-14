/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	NTKSolarRichComplicationFullColorImageView* _solarImageView;

}
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)_updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4 ;
@end

