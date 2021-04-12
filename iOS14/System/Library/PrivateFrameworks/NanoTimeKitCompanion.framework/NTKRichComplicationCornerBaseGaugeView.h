/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)leftLabel;
-(void)layoutSubviews;
-(void)setPosition:(long long)arg1 ;
-(id)progressView;
-(id)rightLabel;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)handleGaugeProvider:(id)arg1 leftTextProvider:(id)arg2 rightTextProvider:(id)arg3 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_layoutSubviewsWithoutAnimation;
-(void)_updateLabelMaxWidths;
-(void)_calculateLabel:(id)arg1 center:(CGPoint*)arg2 widthInRadius:(double*)arg3 ;
-(double)_calculateProgressWidthWithLeftLabelWidth:(double)arg1 rightLabelWidth:(double)arg2 ;
-(double)_layoutLabel:(id)arg1 withLabelCenter:(CGPoint)arg2 labelWidthInRadius:(double)arg3 leftInRadius:(double)arg4 ;
-(double)_layoutProgressViewWithBeginAngle:(double)arg1 widthInRadius:(double)arg2 bottomPadding:(double)arg3 ;
@end

