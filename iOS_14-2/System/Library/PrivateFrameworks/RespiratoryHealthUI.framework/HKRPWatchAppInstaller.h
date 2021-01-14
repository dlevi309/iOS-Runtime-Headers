/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthUI.framework/RespiratoryHealthUI
*/


@protocol HKRPWatchInstallAppsProviding;
@class NRDevice, HKWatchAppAvailability;

@interface HKRPWatchAppInstaller : NSObject {

	NRDevice* _device;
	HKWatchAppAvailability* _watchAppAvailability;
	id<HKRPWatchInstallAppsProviding> _installAppsProviding;

}
-(id)init;
-(void)installAppWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDevice:(id)arg1 watchAppAvailability:(id)arg2 installAppsProviding:(id)arg3 ;
-(void)checkIfAppCanBeInstalledWithCompletion:(/*^block*/id)arg1 ;
@end

