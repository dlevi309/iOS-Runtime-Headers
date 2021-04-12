/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFSettingsAlertControl.h>
#import <libobjc.A.dylib/_SFSettingsAlertStepperConfiguration.h>

@class _SFSettingsAlertButton, NSString;

@interface _SFSettingsAlertStepper : _SFSettingsAlertControl <_SFSettingsAlertStepperConfiguration> {

	_SFSettingsAlertButton* _incrementButton;
	_SFSettingsAlertButton* _decrementButton;
	_SFSettingsAlertButton* _resetButton;
	long long _value;

}

@property (nonatomic,readonly) long long value;                     //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initUsingResetButton:(BOOL)arg1 ;
-(id)_button:(long long)arg1 ;
-(void)_decrementTapped:(id)arg1 ;
-(void)_incrementTapped:(id)arg1 ;
-(void)_resetTapped:(id)arg1 ;
-(void)setImage:(id)arg1 forButton:(long long)arg2 ;
-(void)setText:(id)arg1 forButton:(long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 forButton:(long long)arg2 ;
-(long long)value;
@end

