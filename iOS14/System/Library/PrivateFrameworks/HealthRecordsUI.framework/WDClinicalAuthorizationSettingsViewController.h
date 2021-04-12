/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKClinicalAuthorizationSettingsViewController.h>

@class HRProfile;

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController {

	HRProfile* _profile;

}

@property (nonatomic,__weak,readonly) HRProfile * profile;              //@synthesize profile=_profile - In the implementation block
+(id)contextUsingProfile:(id)arg1 source:(id)arg2 ;
-(HRProfile *)profile;
-(id)initWithContext:(id)arg1 style:(long long)arg2 ;
-(id)initWithProfile:(id)arg1 source:(id)arg2 ;
@end

