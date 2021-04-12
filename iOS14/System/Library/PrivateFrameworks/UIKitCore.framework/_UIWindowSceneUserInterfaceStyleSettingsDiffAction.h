/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneUserInterfaceStyleSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsUserInterfaceStyleDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsUserInterfaceStyleDiffInspector;              //@synthesize sceneSettingsUserInterfaceStyleDiffInspector=_sceneSettingsUserInterfaceStyleDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateUserInterfaceStyleChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(/*^block*/id)arg3 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(void)setSceneSettingsUserInterfaceStyleDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsUserInterfaceStyleDiffInspector;
@end

