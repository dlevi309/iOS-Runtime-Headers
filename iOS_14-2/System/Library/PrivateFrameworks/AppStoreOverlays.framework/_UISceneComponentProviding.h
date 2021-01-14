/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

@class UIScene;


@protocol _UISceneComponentProviding <NSObject>
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@optional
-(id)_settingsDiffActionsForScene:(id)arg1;
-(id)_actionHandlersForScene:(id)arg1;
-(void)_sceneWillInvalidate:(id)arg1;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;

@required
-(UIScene *)_scene;
-(void)_setScene:(id)arg1;
-(id)initWithScene:(id)arg1;

@end

