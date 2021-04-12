/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBStarkNotificationViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISceneSettingsDiffAction.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/_UISceneComponentProviding.h>

@protocol BSInvalidatable;
@class UIScene, SBStarkNotificationConfiguration, SBStarkNotificationWindow, SBStarkNotificationViewController, NSString;

@interface SBStarkNotificationSceneComponent : NSObject <SBStarkNotificationViewControllerDelegate, _UISceneSettingsDiffAction, FBSDisplayObserving, _UISceneComponentProviding> {

	UIScene* _scene;
	SBStarkNotificationConfiguration* _configuration;
	SBStarkNotificationWindow* _window;
	SBStarkNotificationViewController* _viewController;
	BOOL _observingDisplays;
	BOOL _connected;
	id<BSInvalidatable> _deferringRule;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(id)configuration;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)_updateWindow;
-(id)bannerSource;
-(void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2 ;
-(void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2 ;
-(void)_updateDynamicConfigurationOfScene:(id)arg1 withSettings:(id)arg2 transition:(id)arg3 ;
@end

