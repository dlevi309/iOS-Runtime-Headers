/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFOpacitySlider *)slider;
-(id)init;
-(double)opacity;
-(void)layoutSubviews;
-(void)reset;
-(UILabel *)opacityLabel;
-(void)didChangeOpacityValue:(id)arg1 ;
@end

