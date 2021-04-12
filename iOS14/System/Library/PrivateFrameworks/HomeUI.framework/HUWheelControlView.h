/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate, HUWheelControlViewDelegate;
@class NSString, NSArray, NSFormatter, NSSet, UIPickerView;

@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView> {

	BOOL _canBeHighlighted;
	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	id<HUWheelControlViewDelegate> _wheelDelegate;
	NSArray* _values;
	NSFormatter* _valueFormatter;
	NSSet* _customValues;
	UIPickerView* _pickerView;
	NSArray* _wheelValues;

}

@property (nonatomic,retain) UIPickerView * pickerView;                                        //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) NSArray * wheelValues;                                            //@synthesize wheelValues=_wheelValues - In the implementation block
@property (assign,nonatomic,__weak) id<HUWheelControlViewDelegate> wheelDelegate;              //@synthesize wheelDelegate=_wheelDelegate - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                 //@synthesize values=_values - In the implementation block
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
-(void)_setupConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(NSArray *)values;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(BOOL)isDisabled;
-(void)setValues:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(UIPickerView *)pickerView;
-(id)value;
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1 ;
-(void)_generateWheelValues;
-(NSArray *)wheelValues;
-(id)_formatValue:(id)arg1 ;
-(id<HUWheelControlViewDelegate>)wheelDelegate;
-(void)_updateUIToReachable;
-(NSSet *)customValues;
-(void)setWheelValues:(NSArray *)arg1 ;
-(NSFormatter *)valueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(void)setCustomValues:(NSSet *)arg1 ;
-(void)setWheelDelegate:(id<HUWheelControlViewDelegate>)arg1 ;
@end

