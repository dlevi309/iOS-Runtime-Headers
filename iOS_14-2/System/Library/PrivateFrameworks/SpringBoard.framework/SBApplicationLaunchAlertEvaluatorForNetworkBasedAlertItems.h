/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationLaunchAlertEvaluator.h>

@class SBAirplaneModeController, SBTelephonyManager, NSString;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator> {

	SBAirplaneModeController* _airplaneModeController;
	SBTelephonyManager* _telephonyManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)shouldShowLaunchAlertForApplication:(id)arg1 ;
-(id)_airplaneModeController;
-(id)_telephonyManager;
-(id)initWithAirplaneModeController:(id)arg1 telephonyManager:(id)arg2 ;
@end

