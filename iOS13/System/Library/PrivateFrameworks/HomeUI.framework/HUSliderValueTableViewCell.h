/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUSliderValueTableViewCellDelegate;
@class UISlider, UILabel, NSArray, UIImage, NSString;

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _showValue;
	id<HUSliderValueTableViewCellDelegate> _delegate;
	UISlider* _slider;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UISlider * slider;                                                   //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                               //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUSliderValueTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumValue; 
@property (assign,nonatomic) double maximumValue; 
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) BOOL showValue;                                                      //@synthesize showValue=_showValue - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
-(id<HUSliderValueTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HUSliderValueTableViewCellDelegate>)arg1 ;
-(NSArray *)constraints;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(UIImage *)minimumValueImage;
-(UIImage *)maximumValueImage;
-(double)minimumValue;
-(double)maximumValue;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setShowValue:(BOOL)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UISlider *)slider;
-(void)setSlider:(UISlider *)arg1 ;
-(void)_sliderChanged:(id)arg1 ;
-(void)_setupAutoLayoutConstraints;
-(BOOL)showValue;
@end

