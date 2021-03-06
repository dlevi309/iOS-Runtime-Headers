/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol HUTriggerDurationPickerDelegate;
@class UIPickerView, NSArray, HUTriggerDurationPickerValue, NSNumber, NSString;

@interface HUTriggerDurationPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<HUTriggerDurationPickerDelegate> _delegate;
	UIPickerView* _pickerView;
	NSArray* _durationOptions;
	HUTriggerDurationPickerValue* _currentDurationValue;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                      //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) NSArray * durationOptions;                                        //@synthesize durationOptions=_durationOptions - In the implementation block
@property (nonatomic,retain) HUTriggerDurationPickerValue * currentDurationValue;              //@synthesize currentDurationValue=_currentDurationValue - In the implementation block
@property (nonatomic,retain) NSNumber * currentDuration; 
@property (assign,nonatomic,__weak) id<HUTriggerDurationPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultDurationOptions;
-(id<HUTriggerDurationPickerDelegate>)delegate;
-(void)setDelegate:(id<HUTriggerDurationPickerDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UIPickerView *)pickerView;
-(NSNumber *)currentDuration;
-(void)setCurrentDuration:(NSNumber *)arg1 ;
-(void)_updateDurationOptions;
-(NSArray *)durationOptions;
-(HUTriggerDurationPickerValue *)currentDurationValue;
-(void)setCurrentDurationValue:(HUTriggerDurationPickerValue *)arg1 ;
-(void)setDurationOptions:(NSArray *)arg1 ;
-(id)pickerDurationValue;
@end

