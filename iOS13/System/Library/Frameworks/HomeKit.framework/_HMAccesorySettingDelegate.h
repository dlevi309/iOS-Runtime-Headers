/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@protocol _HMAccesorySettingDelegate <NSObject>
@optional
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2;
-(void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;

@required
-(void)_settingWillUpdateReflected:(id)arg1;
-(void)_settingDidUpdateReflected:(id)arg1;
-(void)_settingWillUpdateValue:(id)arg1;
-(void)_settingDidUpdateValue:(id)arg1;

@end

