/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneAccessibilityContrastSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsAccessibilityContrastDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsAccessibilityContrastDiffInspector;              //@synthesize sceneSettingsAccessibilityContrastDiffInspector=_sceneSettingsAccessibilityContrastDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateAccessibilityContrastChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(/*^block*/id)arg3 ;
-(void)setSceneSettingsAccessibilityContrastDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsAccessibilityContrastDiffInspector;
@end

