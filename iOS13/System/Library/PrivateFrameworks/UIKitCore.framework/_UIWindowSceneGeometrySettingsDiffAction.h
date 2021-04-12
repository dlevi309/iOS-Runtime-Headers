/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneGeometrySettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsGeometryMutationDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsGeometryMutationDiffInspector;              //@synthesize sceneSettingsGeometryMutationDiffInspector=_sceneSettingsGeometryMutationDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsGeometryMutationDiffInspector;
-(void)_updateSceneGeometryWithSettingObserverContext:(SCD_Struct_UI31)arg1 windowScene:(id)arg2 transitionContext:(id)arg3 ;
-(void)setSceneSettingsGeometryMutationDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

