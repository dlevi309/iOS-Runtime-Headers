/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_ringColor;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(void)_setLayoutEmptyRings;
-(void)_updateForTemplateChange;
-(void)_applyForegroundAlpha;
-(void)_updateRingColors;
@end

