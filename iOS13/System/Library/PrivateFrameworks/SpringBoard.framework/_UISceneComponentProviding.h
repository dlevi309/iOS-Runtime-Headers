/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIScene;


@protocol _UISceneComponentProviding <NSObject>
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@optional
-(id)_settingsDiffActionsForScene:(id)arg1;
-(id)_actionHandlersForScene:(id)arg1;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
-(void)_sceneWillInvalidate:(id)arg1;

@required
-(id)initWithScene:(id)arg1;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1;

@end

