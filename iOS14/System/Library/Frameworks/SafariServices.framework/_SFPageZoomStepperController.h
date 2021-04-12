/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFSettingsAlertStepperController.h>

@protocol _SFBrowserDocument, _SFSettingsAlertStepperConfiguration;
@class WBSPageZoomPreferenceManager, NSNumberFormatter, NSString;

@interface _SFPageZoomStepperController : NSObject <_SFSettingsAlertStepperController> {

	WBSPageZoomPreferenceManager* _preferenceManager;
	id<_SFBrowserDocument> _tab;
	NSNumberFormatter* _percentFormatter;
	id<_SFSettingsAlertStepperConfiguration> _stepper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(double)arg1 ;
-(void)resetValue:(id)arg1 ;
-(void)prepareStepper:(id)arg1 ;
-(void)incrementValue:(id)arg1 ;
-(void)decrementValue:(id)arg1 ;
-(id)initWithDocument:(id)arg1 preferenceManager:(id)arg2 ;
-(void)_pageZoomChanged:(id)arg1 ;
-(void)_updateButtonsEnabledWithZoomFactor:(double)arg1 ;
-(void)dealloc;
@end

