/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView, NTKColoringLabel;

@interface NTKRichComplicationCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationCurvedProgressView* _progressView;
	NTKRichComplicationImageView* _centerImageView;
	NTKColoringLabel* _smallLabel;

}

@property (nonatomic,readonly) NTKRichComplicationCurvedProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) NTKRichComplicationImageView * centerImageView;                    //@synthesize centerImageView=_centerImageView - In the implementation block
@property (nonatomic,readonly) NTKColoringLabel * smallLabel;                                     //@synthesize smallLabel=_smallLabel - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(NTKRichComplicationImageView *)centerImageView;
-(NTKColoringLabel *)smallLabel;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
@end

