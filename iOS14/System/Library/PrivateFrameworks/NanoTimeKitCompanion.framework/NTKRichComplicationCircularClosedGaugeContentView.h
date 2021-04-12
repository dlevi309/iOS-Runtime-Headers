/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIView, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationCircularClosedGaugeContentView : NTKRichComplicationCircularBaseView {

	UIView* _innerView;
	NTKRichComplicationRingProgressView* _progressView;

}

@property (nonatomic,readonly) NTKRichComplicationRingProgressView * progressView; 
-(void)layoutSubviews;
-(NTKRichComplicationRingProgressView *)progressView;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(id)innerView;
-(id)gaugeProviderFromTemplate:(id)arg1 ;
@end

