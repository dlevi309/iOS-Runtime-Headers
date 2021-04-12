/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate, HUWheelControlViewDelegate;
@class NSString, NSNumber, NSFormatter, NSSet, UIPickerView, NSArray;

@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView> {

	BOOL _canBeHighlighted;
	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;
	id<HUWheelControlViewDelegate> _wheelDelegate;
	NSFormatter* _valueFormatter;
	NSSet* _customValues;
	UIPickerView* _pickerView;
	NSArray* _wheelValues;

}

@property (nonatomic,retain) UIPickerView * pickerView;                                        //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) NSArray * wheelValues;                                            //@synthesize wheelValues=_wheelValues - In the implementation block
@property (nonatomic,copy) NSNumber * minValue;                                                //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) NSNumber * maxValue;                                                //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSNumber * stepValue;                                               //@synthesize stepValue=_stepValue - In the implementation block
@property (assign,nonatomic,__weak) id<HUWheelControlViewDelegate> wheelDelegate;              //@synthesize wheelDelegate=_wheelDelegate - In the implementation block
@property (nonatomic,retain) NSFormatter * valueFormatter;                                     //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,retain) NSSet * customValues;                                             //@synthesize customValues=_customValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted;                                            //@synthesize canBeHighlighted=_canBeHighlighted - In the implementation block
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(NSNumber *)minValue;
-(void)setMinValue:(NSNumber *)arg1 ;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(NSFormatter *)valueFormatter;
-(void)_setupConstraints;
-(id)_defaultValueFormatter;
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1 ;
-(id)_defaultStepValue;
-(id)_defaultMaxValue;
-(NSArray *)wheelValues;
-(id)_formatValue:(id)arg1 ;
-(id<HUWheelControlViewDelegate>)wheelDelegate;
-(void)_generateWheelValues;
-(id)_defaultMinValue;
-(void)_updateUIToReachable;
-(void)setWheelValues:(NSArray *)arg1 ;
-(NSSet *)customValues;
-(void)setCustomValues:(NSSet *)arg1 ;
-(void)setWheelDelegate:(id<HUWheelControlViewDelegate>)arg1 ;
@end

