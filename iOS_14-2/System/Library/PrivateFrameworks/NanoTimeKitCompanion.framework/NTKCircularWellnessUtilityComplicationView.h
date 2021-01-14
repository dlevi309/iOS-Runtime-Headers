/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;
	BOOL _animationsAllowed;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)_layoutContentView;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(id)_ringColor;
-(void)_setLayoutEmptyRings;
-(void)_updateForTemplateChange;
-(void)_applyForegroundAlpha;
-(void)_updateRingColors;
@end

