/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;
	CGRect _prevLayoutBounds;

}
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_updateRingWithTemplate:(id)arg1 ;
-(void)_showEmptyViews;
@end

