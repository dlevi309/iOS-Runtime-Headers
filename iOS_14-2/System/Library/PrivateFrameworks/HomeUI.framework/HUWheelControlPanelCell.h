/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>
#import <libobjc.A.dylib/HUWheelControlViewDelegate.h>

@class HUWheelControlView, UILabel, UIView, NSArray, HUWheelControlPopUpButton, NSNumber, NSFormatter, NSString;

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate> {

	BOOL _wheelViewVisible;
	HUWheelControlView* _wheelView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIView* _separatorView;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;
	HUWheelControlPopUpButton* _wheelButton;
	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;
	NSFormatter* _valueFormatter;
	NSArray* _wheelValues;

}

@property (nonatomic,readonly) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                             //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                          //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                         //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) HUWheelControlPopUpButton * wheelButton;              //@synthesize wheelButton=_wheelButton - In the implementation block
@property (nonatomic,retain) NSNumber * minValue;                                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxValue;                                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSFormatter * valueFormatter;                         //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) NSArray * wheelValues;                                //@synthesize wheelValues=_wheelValues - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * detailText; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (nonatomic,retain) HUWheelControlView * wheelView;                       //@synthesize wheelView=_wheelView - In the implementation block
@property (assign,nonatomic) BOOL wheelViewVisible;                                //@synthesize wheelViewVisible=_wheelViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(NSNumber *)stepValue;
-(void)setStepValue:(NSNumber *)arg1 ;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(UIView *)separatorView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSString *)titleText;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)_defaultValueFormatter;
-(HUWheelControlView *)wheelView;
-(void)setMinValue:(NSNumber *)arg1 ;
-(NSString *)detailText;
-(NSNumber *)maxValue;
-(UILabel *)detailLabel;
-(NSNumber *)minValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)wheelValues;
-(void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2 ;
-(void)setWheelValues:(NSArray *)arg1 ;
-(NSFormatter *)valueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(id)allControlViews;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setWheelViewVisible:(BOOL)arg1 ;
-(void)setWheelView:(HUWheelControlView *)arg1 ;
-(HUWheelControlPopUpButton *)wheelButton;
-(BOOL)wheelViewVisible;
-(void)_generateWheelValuesWithMinValue:(double)arg1 maxValue:(double)arg2 stepValue:(double)arg3 ;
-(id)_defaultMaxValue;
-(id)_defaultMinValue;
-(id)_defaultStepValue;
-(void)setWheelButton:(HUWheelControlPopUpButton *)arg1 ;
@end

