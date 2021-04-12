/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class SFSafariViewController;

@interface WDClinicalAccountErrorManager : NSObject {

	SFSafariViewController* _activeLoginViewController;

}

@property (assign,nonatomic,__weak) SFSafariViewController * activeLoginViewController;              //@synthesize activeLoginViewController=_activeLoginViewController - In the implementation block
+(id)sharedInstance;
-(void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
-(void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1 ;
-(SFSafariViewController *)activeLoginViewController;
-(void)setActiveLoginViewController:(SFSafariViewController *)arg1 ;
-(void)_dismissReloginViewController:(id)arg1 ;
-(void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
@end

