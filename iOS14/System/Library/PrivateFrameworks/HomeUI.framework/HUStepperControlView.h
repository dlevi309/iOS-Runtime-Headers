/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, NSFormatter, UIStepper, UILabel, NSArray;

@interface HUStepperControlView : UIView <HUControlView> {

	id<HUControlViewDelegate> _delegate;
	NSString* _identifier;
	id _value;
	NSFormatter* _valueFormatter;
	UIStepper* _stepper;
	UILabel* _valueLabel;
	NSArray* _layoutConstraints;

}

@property (nonatomic,readonly) UIStepper * stepper;                                  //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                                 //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                            //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (assign,nonatomic) double stepValue; 
@property (nonatomic,retain) NSFormatter * valueFormatter;                           //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
+(BOOL)requiresConstraintBasedLayout;
-(double)stepValue;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(UIStepper *)stepper;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(BOOL)isDisabled;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(void)updateConstraints;
-(id)_defaultValueFormatter;
-(void)setMinValue:(double)arg1 ;
-(void)_stepperValueChanged:(id)arg1 ;
-(UILabel *)valueLabel;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(double)maxValue;
-(double)minValue;
-(id)value;
-(NSFormatter *)valueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(void)_stepperTouchDown:(id)arg1 ;
-(void)_stepperTouchUp:(id)arg1 ;
-(void)_updateValueLabel;
@end

