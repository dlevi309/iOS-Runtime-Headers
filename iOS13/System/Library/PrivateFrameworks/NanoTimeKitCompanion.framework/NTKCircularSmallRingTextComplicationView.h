/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView {

	NTKColoringLabel* _label;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateLabelsForFontChange;
-(void)_updateForTemplateChange;
-(void)_updateLabelWithTextProvider:(id)arg1 ;
-(void)updateLabelWithString:(id)arg1 ;
@end

