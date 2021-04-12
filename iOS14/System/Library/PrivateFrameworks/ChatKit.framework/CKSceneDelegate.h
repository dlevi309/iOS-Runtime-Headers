/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKit/UIWindowSceneDelegate.h>

@class UIWindow, UIWindowScene, CKMacToolbarController, NSString;

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate> {

	BOOL _handlingLaunchTask;
	UIWindowScene* _scene;
	UIWindow* _window;
	CKMacToolbarController* _toolbarController;

}

@property (nonatomic,__weak,readonly) UIWindowScene * scene;                                   //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                //@synthesize window=_window - In the implementation block
@property (assign,getter=isHandlingLaunchTask,nonatomic) BOOL handlingLaunchTask;              //@synthesize handlingLaunchTask=_handlingLaunchTask - In the implementation block
@property (nonatomic,retain) CKMacToolbarController * toolbarController;                       //@synthesize toolbarController=_toolbarController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)containerClassForType:(long long)arg1 ;
+(id)stateFromUserInfoDictionary:(id)arg1 ;
+(id)userInfoDictionaryForState:(id)arg1 ;
-(UIWindowScene *)scene;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)windowSceneDidBecomeVisible:(id)arg1 ;
-(void)_setFrameNameForWindowIfNeeded;
-(BOOL)isHandlingLaunchTask;
-(void)setHandlingLaunchTask:(BOOL)arg1 ;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(id)stateRestorationActivityForScene:(id)arg1 ;
-(UIWindow *)window;
-(long long)type;
-(void)setToolbarController:(CKMacToolbarController *)arg1 ;
-(CKMacToolbarController *)toolbarController;
-(void)updateSceneActivationConditions;
-(void)updateSceneTitleForConversation:(id)arg1 ;
-(id)prefersToActivatePredicate;
-(id)predicateMatchingConversation:(id)arg1 ;
-(id)canActivatePredicate;
-(void)scene:(id)arg1 continueUserActivity:(id)arg2 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneWillResignActive:(id)arg1 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
@end

