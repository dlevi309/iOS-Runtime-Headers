/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFTriggerPercentageSliderCellDelegate;
@class UISlider, UILabel;

@interface WFTriggerPercentageSliderCell : UITableViewCell {

	id<WFTriggerPercentageSliderCellDelegate> _delegate;
	UISlider* _slider;
	UILabel* _label;
	double _stepValue;

}

@property (nonatomic,readonly) UISlider * slider;                                                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) double stepValue;                                                       //@synthesize stepValue=_stepValue - In the implementation block
@property (assign,nonatomic) double sliderValue; 
@property (assign,nonatomic,__weak) id<WFTriggerPercentageSliderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)stepValue;
-(void)setStepValue:(double)arg1 ;
-(UISlider *)slider;
-(id<WFTriggerPercentageSliderCellDelegate>)delegate;
-(void)setDelegate:(id<WFTriggerPercentageSliderCellDelegate>)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(double)sliderValue;
-(void)setSliderValue:(double)arg1 ;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithInitialValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3 stepValue:(double)arg4 ;
-(double)roundValue:(double)arg1 toNearestStep:(double)arg2 ;
@end

