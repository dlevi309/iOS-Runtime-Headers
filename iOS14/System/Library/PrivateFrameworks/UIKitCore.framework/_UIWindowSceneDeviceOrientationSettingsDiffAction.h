/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, FBSSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDeviceOrientationDiffInspector;

}

@property (nonatomic,readonly) FBSSceneSettingsDiffInspector * sceneSettingsDeviceOrientationDiffInspector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSSceneSettingsDiffInspector *)sceneSettingsDeviceOrientationDiffInspector;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(void)_updateDeviceOrientationWithSettingObserverContext:(SCD_Struct_UI34)arg1 windowScene:(id)arg2 transitionContext:(id)arg3 ;
@end

