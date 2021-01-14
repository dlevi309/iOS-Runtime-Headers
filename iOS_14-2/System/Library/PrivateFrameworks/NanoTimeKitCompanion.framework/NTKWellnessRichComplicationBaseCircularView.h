/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;
	CGRect _prevLayoutBounds;

}
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_updateRingWithTemplate:(id)arg1 ;
-(void)_showEmptyViews;
@end

