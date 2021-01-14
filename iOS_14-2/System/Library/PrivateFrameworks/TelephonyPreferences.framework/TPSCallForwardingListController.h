/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSListController.h>
#import <libobjc.A.dylib/TPSCallForwardingControllerDelegate.h>

@class TPSCallForwardingController, PSSpecifier, NSString;

@interface TPSCallForwardingListController : TPSListController <TPSCallForwardingControllerDelegate> {

	TPSCallForwardingController* _callForwardingController;
	PSSpecifier* _conditionalServiceSwitchSpecifier;
	PSSpecifier* _mainSwitchSpecifier;

}

@property (nonatomic,readonly) PSSpecifier * conditionalServiceSwitchSpecifier;                     //@synthesize conditionalServiceSwitchSpecifier=_conditionalServiceSwitchSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * mainSwitchSpecifier;                                   //@synthesize mainSwitchSpecifier=_mainSwitchSpecifier - In the implementation block
@property (nonatomic,readonly) TPSCallForwardingController * callForwardingController;              //@synthesize callForwardingController=_callForwardingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 ;
-(PSSpecifier *)mainSwitchSpecifier;
-(void)setMainSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(void)callForwardingController:(id)arg1 didChangeServiceType:(long long)arg2 ;
-(void)callForwardingController:(id)arg1 didChangeValue:(id)arg2 error:(id)arg3 ;
-(TPSCallForwardingController *)callForwardingController;
-(PSSpecifier *)conditionalServiceSwitchSpecifier;
-(id)conditionalServiceTypeSpecifiers;
-(id)unconditionalServiceTypeSpecifiers;
-(id)mainSwitchOn:(id)arg1 ;
-(void)setConditionalServiceSwitchOn:(id)arg1 specifier:(id)arg2 ;
-(id)conditionalServiceSwitchOn:(id)arg1 ;
-(void)setConditionalServiceBusyPhoneNumber:(id)arg1 specifier:(id)arg2 ;
-(id)conditionalServiceBusyPhoneNumber:(id)arg1 ;
-(void)setConditionalServiceUnansweredPhoneNumber:(id)arg1 specifier:(id)arg2 ;
-(id)conditionalServiceUnansweredPhoneNumber:(id)arg1 ;
-(void)setConditionalServiceUnreachablePhoneNumber:(id)arg1 specifier:(id)arg2 ;
-(id)conditionalServiceUnreachablePhoneNumber:(id)arg1 ;
-(void)setUnconditionalServicePhoneNumber:(id)arg1 specifier:(id)arg2 ;
-(id)unconditionalServicePhoneNumber:(id)arg1 ;
-(void)configureCell:(id)arg1 forSpecifier:(id)arg2 ;
@end

