/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUStepperCellProtocol.h>

@protocol HUStepperCellDelegate;
@class HFItem, NSNumber, UIStepper, UILabel, NSString;

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol> {

	BOOL _disabled;
	HFItem* _item;
	NSNumber* _stepperValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	id<HUStepperCellDelegate> _stepperCellDelegate;
	UIStepper* _stepper;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                                               //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                     //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                   //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate;              //@synthesize stepperCellDelegate=_stepperCellDelegate - In the implementation block
@property (nonatomic,copy) NSNumber * minimumValue;                                             //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,copy) NSNumber * maximumValue;                                             //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepValue;                                                //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepperValue;                                             //@synthesize stepperValue=_stepperValue - In the implementation block
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(id)_valueDescription;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UIStepper *)stepper;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(NSNumber *)arg1 ;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id<HUStepperCellDelegate>)arg1 ;
-(void)_stepperValueDidChange:(id)arg1 ;
-(void)_toggleValueChange:(id)arg1 ;
@end

