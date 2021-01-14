/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _centerLabel;
	NTKRichComplicationRingProgressView* _progressView;

}

@property (nonatomic,retain) NTKColoringLabel * centerLabel;                                  //@synthesize centerLabel=_centerLabel - In the implementation block
@property (nonatomic,retain) NTKRichComplicationRingProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setProgressView:(NTKRichComplicationRingProgressView *)arg1 ;
-(NTKRichComplicationRingProgressView *)progressView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)centerLabel;
-(void)setCenterLabel:(NTKColoringLabel *)arg1 ;
@end

