/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)layoutSubviews;
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

