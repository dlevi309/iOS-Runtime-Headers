/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <libobjc.A.dylib/CDPUIDeviceToDeviceEncryptionUIProvider.h>

@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider> {

	/*^block*/id _cancelActionHandler;
	/*^block*/id _continueActionHandler;

}

@property (nonatomic,copy) id cancelActionHandler;                //@synthesize cancelActionHandler=_cancelActionHandler - In the implementation block
@property (nonatomic,copy) id continueActionHandler;              //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
-(void)cancelTapped:(id)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(id)continueActionHandler;
-(void)dealloc;
-(void)promptForUpgradeWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptIneligibilityWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptForCancelWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeAlertControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_upgradeCardUIViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)continueTapped:(id)arg1 ;
-(void)setCancelActionHandler:(id)arg1 ;
-(id)cancelActionHandler;
@end

