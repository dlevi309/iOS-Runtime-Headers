/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

