/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationCurvedProgressView* _progressView;
	NTKRichComplicationImageView* _centerImageView;
	NTKColoringLabel* _smallLabel;

}

@property (nonatomic,retain) NTKRichComplicationCurvedProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NTKRichComplicationImageView * centerImageView;                    //@synthesize centerImageView=_centerImageView - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * smallLabel;                                     //@synthesize smallLabel=_smallLabel - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(long long)progressFillStyle;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setProgressView:(NTKRichComplicationCurvedProgressView *)arg1 ;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(NTKRichComplicationImageView *)centerImageView;
-(void)setCenterImageView:(NTKRichComplicationImageView *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)smallLabel;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)setSmallLabel:(NTKColoringLabel *)arg1 ;
@end

