/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKit/UIWindowSceneDelegate.h>

@class UIWindow, UIWindowScene, NSString;

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate> {

	BOOL _handlingLaunchTask;
	UIWindowScene* _scene;
	UIWindow* _window;

}

@property (nonatomic,__weak,readonly) UIWindowScene * scene;                                   //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                //@synthesize window=_window - In the implementation block
@property (assign,getter=isHandlingLaunchTask,nonatomic) BOOL handlingLaunchTask;              //@synthesize handlingLaunchTask=_handlingLaunchTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userInfoDictionaryForState:(id)arg1 ;
+(id)stateFromUserInfoDictionary:(id)arg1 ;
+(Class)containerClassForType:(long long)arg1 ;
-(id)init;
-(long long)type;
-(UIWindow *)window;
-(UIWindowScene *)scene;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)sceneWillResignActive:(id)arg1 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
-(id)stateRestorationActivityForScene:(id)arg1 ;
-(void)scene:(id)arg1 continueUserActivity:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)updateSceneActivationConditions;
-(void)updateSceneTitleForConversation:(id)arg1 ;
-(id)predicateMatchingConversation:(id)arg1 ;
-(id)prefersToActivatePredicate;
-(id)canActivatePredicate;
-(BOOL)isHandlingLaunchTask;
-(void)setHandlingLaunchTask:(BOOL)arg1 ;
@end

