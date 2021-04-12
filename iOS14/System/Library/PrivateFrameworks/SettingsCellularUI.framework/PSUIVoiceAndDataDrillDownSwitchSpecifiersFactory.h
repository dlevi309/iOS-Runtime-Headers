/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject
+(BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)arg1 RATMode:(int)arg2 ;
+(BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)arg1 ;
+(BOOL)shouldShow5GSASwitchForSpecifier:(id)arg1 RATMode:(int)arg2 ;
-(id)createVoLTESwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)create5GSASwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
@end

