/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	NTKAstronomyRichComplicationContentView* _astronomyContentView;

}
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_applyPausedUpdate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupContentViewForFamily:(long long)arg1 ;
@end

