/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>

@class NTKCurvedColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationCornerBaseGaugeView : NTKRichComplicationCornerView {

	NTKCurvedColoringLabel* _leftLabel;
	NTKRichComplicationCurvedProgressView* _progressView;
	NTKCurvedColoringLabel* _rightLabel;

}
+(long long)progressFillStyle;
+(BOOL)isMeteredProgressView;
-(id)init;
-(void)setPosition:(long long)arg1 ;
-(void)layoutSubviews;
-(id)leftLabel;
-(id)rightLabel;
-(id)progressView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_layoutSubviewsWithoutAnimation;
-(void)_updateLabelMaxWidths;
-(void)_calculateLabel:(id)arg1 center:(CGPoint*)arg2 widthInRadius:(double*)arg3 ;
-(double)_calculateProgressWidthWithLeftLabelWidth:(double)arg1 rightLabelWidth:(double)arg2 ;
-(double)_layoutLabel:(id)arg1 withLabelCenter:(CGPoint)arg2 labelWidthInRadius:(double)arg3 leftInRadius:(double)arg4 ;
-(double)_layoutProgressViewWithBeginAngle:(double)arg1 widthInRadius:(double)arg2 bottomPadding:(double)arg3 ;
-(void)handleGaugeProvider:(id)arg1 leftTextProvider:(id)arg2 rightTextProvider:(id)arg3 ;
@end

