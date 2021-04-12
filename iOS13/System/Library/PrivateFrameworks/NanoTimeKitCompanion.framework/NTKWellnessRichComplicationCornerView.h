/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
-(id)_outerView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_showEmptyViewsWithString:(id)arg1 shortText:(id)arg2 ;
-(void)_updateRingWithTemplate:(id)arg1 ;
-(void)_updateLabelWithTemplate:(id)arg1 ;
@end

