/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class UIView, NTKColoringLabel;

@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {

	UIView* _body;
	NTKColoringLabel* _headerLabel;

}

@property (nonatomic,retain) NTKColoringLabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
-(id)body;
-(id)init;
-(void)layoutSubviews;
-(NTKColoringLabel *)headerLabel;
-(void)setHeaderLabel:(NTKColoringLabel *)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)headerTextProviderFromTemplate:(id)arg1 ;
-(void)_editingDidEnd;
@end

