/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel;

@interface NTKRichComplicationCircularStackTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _line1Label;
	NTKColoringLabel* _line2Label;
	unsigned long long _highlightMode;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(id)_createAndAddLabel;
-(id)_desiredFontForLabel:(id)arg1 ;
-(long long)_line1FilterStyle;
-(long long)_line2FilterStyle;
@end

