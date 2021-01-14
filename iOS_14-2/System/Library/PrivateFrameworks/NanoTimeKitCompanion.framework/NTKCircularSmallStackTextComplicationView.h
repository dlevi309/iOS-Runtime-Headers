/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {

	NTKColoringLabel* _firstLineLabel;
	NTKColoringLabel* _secondLineLabel;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateLabelColors;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateLabelsForFontChange;
-(void)_updateForTemplateChange;
-(void)setUsesMultiColor:(BOOL)arg1 ;
@end

