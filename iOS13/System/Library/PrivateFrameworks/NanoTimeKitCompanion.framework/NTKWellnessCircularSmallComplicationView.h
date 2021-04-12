/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(void)_updateColors;
-(double)_ringDiameter;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_setLayoutEmptyRings;
-(void)setSecondaryForegroundColor:(id)arg1 ;
-(double)_ringGapWidth;
-(void)_updateForTemplateChange;
-(void)setUsesMultiColor:(BOOL)arg1 ;
-(double)_ringStrokeWidth;
-(double)_overlapStrokeWidth;
@end

