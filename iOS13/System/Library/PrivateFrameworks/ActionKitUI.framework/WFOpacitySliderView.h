/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIControl.h>

@class WFOpacitySlider, UILabel;

@interface WFOpacitySliderView : UIControl {

	WFOpacitySlider* _slider;
	UILabel* _opacityLabel;

}

@property (nonatomic,__weak,readonly) WFOpacitySlider * slider;              //@synthesize slider=_slider - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * opacityLabel;                //@synthesize opacityLabel=_opacityLabel - In the implementation block
@property (nonatomic,readonly) double opacity; 
-(id)init;
-(void)reset;
-(double)opacity;
-(void)layoutSubviews;
-(WFOpacitySlider *)slider;
-(UILabel *)opacityLabel;
-(void)didChangeOpacityValue:(id)arg1 ;
@end

