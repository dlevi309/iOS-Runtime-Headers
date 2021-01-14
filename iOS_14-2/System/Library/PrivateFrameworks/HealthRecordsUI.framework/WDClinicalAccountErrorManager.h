/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class SFSafariViewController;

@interface WDClinicalAccountErrorManager : NSObject {

	SFSafariViewController* _activeLoginViewController;

}

@property (assign,nonatomic,__weak) SFSafariViewController * activeLoginViewController;              //@synthesize activeLoginViewController=_activeLoginViewController - In the implementation block
+(id)sharedInstance;
-(void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
-(SFSafariViewController *)activeLoginViewController;
-(void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1 ;
-(void)setActiveLoginViewController:(SFSafariViewController *)arg1 ;
-(void)_dismissReloginViewController:(id)arg1 ;
-(void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 ;
@end

