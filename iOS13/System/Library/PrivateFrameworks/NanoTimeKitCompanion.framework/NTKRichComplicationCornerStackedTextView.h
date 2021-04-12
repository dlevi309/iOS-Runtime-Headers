/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseTextView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerStackedTextView : NTKRichComplicationCornerBaseTextView {

	NTKCurvedColoringLabel* _outerLabel;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(id)outerLabel;
@end

