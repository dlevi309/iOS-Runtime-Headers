/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationCurvedProgressView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationCurvedProgressView* _progressView;
	NTKColoringLabel* _leadingSmallLabel;
	NTKColoringLabel* _trailingSmallLabel;
	NTKColoringLabel* _centerLabel;

}

@property (nonatomic,retain) NTKRichComplicationCurvedProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * leadingSmallLabel;                              //@synthesize leadingSmallLabel=_leadingSmallLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * trailingSmallLabel;                             //@synthesize trailingSmallLabel=_trailingSmallLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * centerLabel;                                    //@synthesize centerLabel=_centerLabel - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(long long)progressFillStyle;
-(void)layoutSubviews;
-(void)setProgressView:(NTKRichComplicationCurvedProgressView *)arg1 ;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)centerLabel;
-(void)setCenterLabel:(NTKColoringLabel *)arg1 ;
-(NTKColoringLabel *)leadingSmallLabel;
-(NTKColoringLabel *)trailingSmallLabel;
-(void)setLeadingSmallLabel:(NTKColoringLabel *)arg1 ;
-(void)setTrailingSmallLabel:(NTKColoringLabel *)arg1 ;
@end

