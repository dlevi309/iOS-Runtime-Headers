/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@protocol MCProfileConnectionObserver <NSObject>
@optional
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveAppWhitelistChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveDefaultsChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
