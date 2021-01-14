/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, UIViewController, UINavigationController, NSString;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {

	NSDictionary* _overrideFirstActionSignal;
	UIViewController* _topViewControllerOnLoadStart;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSString * usernameForCreating; 
@property (nonatomic,readonly) NSString * passwordForCreating; 
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)usernameForCreating;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)passwordForCreating;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(UINavigationController *)navigationController;
@end

