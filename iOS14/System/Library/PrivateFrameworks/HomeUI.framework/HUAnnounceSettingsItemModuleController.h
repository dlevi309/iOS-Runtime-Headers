/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUIconSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUUserSwitchCellDelegate.h>

@class NSString;

@interface HUAnnounceSettingsItemModuleController : HUItemTableModuleController <HUIconSwitchCellDelegate, HUUserSwitchCellDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)_submitAnalyticsForAnnounceNotificationSettingItem:(id)arg1 writeWasSuccessfull:(BOOL)arg2 ;
-(void)_submitAnalyticsForAnnounceHomePodSettingItem:(id)arg1 enabled:(BOOL)arg2 writeWasSuccessfull:(BOOL)arg3 ;
-(void)_submitAnalyticsForAnnounceUserSettingItem:(id)arg1 enabled:(BOOL)arg2 writeWasSuccessfull:(BOOL)arg3 ;
-(void)_populateHostInformation:(id)arg1 ;
-(void)userSwitchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
@end

