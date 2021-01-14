/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUSliderValueTableViewCellDelegate;
@class HFItem, NSString, UISlider, UILabel, NSArray, UIImage;

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol> {

	BOOL _showValue;
	BOOL _useLargeCell;
	HFItem* _item;
	id<HUSliderValueTableViewCellDelegate> _delegate;
	NSString* _title;
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
@property (assign,nonatomic) BOOL useLargeCell;                                                   //@synthesize useLargeCell=_useLargeCell - In the implementation block
@property (nonatomic,retain) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(NSArray *)constraints;
-(void)setDisabled:(BOOL)arg1 ;
-(UIImage *)maximumValueImage;
-(double)maximumValue;
-(void)setConstraints:(NSArray *)arg1 ;
-(UISlider *)slider;
-(id<HUSliderValueTableViewCellDelegate>)delegate;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(HFItem *)item;
-(void)setTitle:(NSString *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)isContinuous;
-(void)setDelegate:(id<HUSliderValueTableViewCellDelegate>)arg1 ;
-(BOOL)showValue;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setSlider:(UISlider *)arg1 ;
-(UILabel *)valueLabel;
-(double)minimumValue;
-(void)setShowValue:(BOOL)arg1 ;
-(UIImage *)minimumValueImage;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)value;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_sliderChanged:(id)arg1 ;
-(void)_setupAutoLayoutConstraints;
-(void)setUseLargeCell:(BOOL)arg1 ;
-(BOOL)useLargeCell;
@end

