/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularLargeHeadlineBaseView.h>

@class NTKColoringLabel;

@interface NTKRichComplicationRectangularStandardBodyView : NTKRichComplicationRectangularLargeHeadlineBaseView {

	NTKColoringLabel* _line1Label;
	NTKColoringLabel* _line2Label;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
@end

