/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationCurvedProgressView, NTKColoringLabel, UIView;

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationCurvedProgressView* _progressView;
	NTKColoringLabel* _centerLabel;
	UIView* _bottomView;

}

@property (nonatomic,readonly) NTKRichComplicationCurvedProgressView * progressView; 
@property (nonatomic,readonly) NTKColoringLabel * centerLabel; 
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(long long)progressFillStyle;
-(void)layoutSubviews;
-(id)bottomView;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)centerLabel;
-(void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3 ;
@end

