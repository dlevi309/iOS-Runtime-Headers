/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularOpenGaugeContentView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView {

	NTKRichComplicationImageView* _bottomImageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * bottomImageView;              //@synthesize bottomImageView=_bottomImageView - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(id)bottomView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(NTKRichComplicationImageView *)bottomImageView;
-(void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3 ;
-(void)setBottomImageView:(NTKRichComplicationImageView *)arg1 ;
@end

