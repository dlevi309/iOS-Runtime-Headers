/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)currentTimeDisplayStringForReadAuthorizationFooter;
-(id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)_displayStringForReadAuthorizationDate:(id)arg1 ;
-(id)_displayReadAuthorizationDateForMode:(long long)arg1 ;
@end

