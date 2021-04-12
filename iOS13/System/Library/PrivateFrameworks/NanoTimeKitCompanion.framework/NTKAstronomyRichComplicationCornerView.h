/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {

	NTKAstronomyRichComplicationContentView* _astronomyContentView;

}
-(id)_outerView;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_enumerateQuadViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_applyPausedUpdate;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateInnerLabel;
@end

