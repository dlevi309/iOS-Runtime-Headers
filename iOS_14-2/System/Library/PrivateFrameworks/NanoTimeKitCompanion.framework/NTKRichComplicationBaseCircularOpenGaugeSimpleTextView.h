/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _smallLabel;
	NTKColoringLabel* _centerLabel;
	NTKRichComplicationCurvedProgressView* _progressView;

}

@property (nonatomic,retain) NTKColoringLabel * smallLabel;                                     //@synthesize smallLabel=_smallLabel - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * centerLabel;                                    //@synthesize centerLabel=_centerLabel - In the implementation block
@property (nonatomic,retain) NTKRichComplicationCurvedProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setProgressView:(NTKRichComplicationCurvedProgressView *)arg1 ;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)smallLabel;
-(NTKColoringLabel *)centerLabel;
-(void)setCenterLabel:(NTKColoringLabel *)arg1 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)setSmallLabel:(NTKColoringLabel *)arg1 ;
@end

