/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;

}

@property (nonatomic,readonly) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source; 
-(id)init;
-(HKSource *)source;
-(HKClinicalSourceAuthorizationController *)authorizationController;
-(id)initWithAuthorizationController:(id)arg1 ;
-(id)currentTimeDisplayStringForReadAuthorizationFooter;
-(id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)_displayStringForReadAuthorizationDate:(id)arg1 ;
-(id)_displayReadAuthorizationDateForMode:(long long)arg1 ;
@end

