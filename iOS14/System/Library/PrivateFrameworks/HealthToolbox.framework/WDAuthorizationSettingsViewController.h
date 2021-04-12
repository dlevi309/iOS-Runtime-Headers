/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDProfile;

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController {

	WDProfile* _profile;

}

@property (nonatomic,retain) WDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(void)setProfile:(WDProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(WDProfile *)profile;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_applicationWillEnterForeground;
-(id)sectionsForAuthController:(id)arg1 ;
-(id)initWithProfile:(id)arg1 style:(long long)arg2 ;
-(id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2 ;
@end

