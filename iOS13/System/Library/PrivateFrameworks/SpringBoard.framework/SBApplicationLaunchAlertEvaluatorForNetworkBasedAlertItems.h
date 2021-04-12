/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_airplaneModeController;
-(id)_telephonyManager;
-(unsigned long long)shouldShowLaunchAlertForApplication:(id)arg1 ;
-(id)initWithAirplaneModeController:(id)arg1 telephonyManager:(id)arg2 ;
@end

