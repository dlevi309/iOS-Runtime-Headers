/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIView, NTKColoringLabel;

@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {

	UIView* _line1View;
	NTKColoringLabel* _line2Label;

}

@property (nonatomic,readonly) NTKColoringLabel * line2Label; 
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg1 ;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)line2Label;
@end

