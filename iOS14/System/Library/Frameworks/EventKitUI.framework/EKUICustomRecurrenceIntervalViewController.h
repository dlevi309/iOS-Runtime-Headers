/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSString;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _pickerView;
	BOOL _maximumInterval;
	long long _frequency;
	long long _interval;
	/*^block*/id _changeBlock;

}

@property (copy) id changeBlock;                                    //@synthesize changeBlock=_changeBlock - In the implementation block
@property (assign,nonatomic) long long frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long interval;                    //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) BOOL maximumInterval;                  //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(BOOL)maximumInterval;
-(id)changeBlock;
-(id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(/*^block*/id)arg3 ;
-(void)setMaximumInterval:(BOOL)arg1 ;
-(void)setChangeBlock:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)loadView;
-(id)pickerView;
@end

