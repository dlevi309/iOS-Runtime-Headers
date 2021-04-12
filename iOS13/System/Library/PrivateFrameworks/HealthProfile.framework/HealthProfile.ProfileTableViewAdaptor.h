/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <HealthProfile/HealthProfile-Structs.h>
#import <HealthExperienceUI/HealthExperienceUI.SectionedTableViewAdaptor.h>
#import <UIKit/UITableViewDelegate.h>

@interface HealthProfile.ProfileTableViewAdaptor : HealthExperienceUI.SectionedTableViewAdaptor <UITableViewDelegate>
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)listenForMedicalIDUpdatesWithNotification:(id)arg1 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

