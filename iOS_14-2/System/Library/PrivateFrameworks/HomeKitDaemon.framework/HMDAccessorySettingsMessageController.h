/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDAccessorySettingsMessageController
@required
-(void)onMessageUpdateValue:(id)arg1 settingIdentifier:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;
-(void)onMessageAddConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageRemoveConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageUpdateConstraints:(id)arg1 settingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 settingIdentifier:(id)arg3 senderProductClass:(long long)arg4 completion:(/*^block*/id)arg5;

@end

