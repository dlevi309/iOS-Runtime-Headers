/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKRichComplicationImageView, _TtC19ComplicationDisplay23ComplicationHostingView, NTKColoringLabel;

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {

	NTKRichComplicationImageView* _headerImageView;
	_TtC19ComplicationDisplay23ComplicationHostingView* _headerSwiftUIView;
	NTKColoringLabel* _headerLabel;

}
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)init;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_updateTemplateHeaderWithTextProvider:(id)arg1 imageProvider:(id)arg2 viewData:(id)arg3 reason:(long long)arg4 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
@end

