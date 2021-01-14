/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)locatorStateDidChange:(id)arg1 ;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(BOOL)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
@end

