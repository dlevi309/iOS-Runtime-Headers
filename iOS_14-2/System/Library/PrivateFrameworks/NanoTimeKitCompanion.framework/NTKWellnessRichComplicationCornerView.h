/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
-(id)_outerView;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_showEmptyViewsWithString:(id)arg1 shortText:(id)arg2 ;
-(void)_updateRingWithTemplate:(id)arg1 ;
-(void)_updateLabelWithTemplate:(id)arg1 ;
@end

