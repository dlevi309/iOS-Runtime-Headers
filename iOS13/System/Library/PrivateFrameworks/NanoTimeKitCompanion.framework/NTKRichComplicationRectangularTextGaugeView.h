/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKRichComplicationImageView, NTKColoringLabel, NTKRichComplicationLineProgressView;

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularBaseView {

	NTKRichComplicationImageView* _headerImageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _line1Label;
	NTKRichComplicationLineProgressView* _progressView;

}

@property (nonatomic,readonly) NTKRichComplicationImageView * headerImageView;                  //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,readonly) NTKColoringLabel * headerLabel;                                  //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) NTKColoringLabel * line1Label;                                   //@synthesize line1Label=_line1Label - In the implementation block
@property (nonatomic,readonly) NTKRichComplicationLineProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(long long)progressFillStyle;
+(BOOL)isMeteredProgressView;
-(id)init;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(NTKColoringLabel *)headerLabel;
-(NTKRichComplicationLineProgressView *)progressView;
-(NTKRichComplicationImageView *)headerImageView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_handleTemplateUpdateWithReason:(long long)arg1 headerImageProvider:(id)arg2 headerTextProvider:(id)arg3 body1TextProvider:(id)arg4 gaugeProvider:(id)arg5 ;
-(NTKColoringLabel *)line1Label;
@end

