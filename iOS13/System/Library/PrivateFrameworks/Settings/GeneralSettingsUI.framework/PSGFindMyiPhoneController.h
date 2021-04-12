/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface PSGFindMyiPhoneController : NSObject {

	NSObject*<OS_dispatch_semaphore> _stateChangeSem;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(BOOL)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)locatorStateDidChange:(id)arg1 ;
-(BOOL)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
@end

