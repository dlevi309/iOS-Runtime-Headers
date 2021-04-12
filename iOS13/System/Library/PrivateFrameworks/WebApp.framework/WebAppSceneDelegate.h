/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
*/

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIWindowSceneDelegate.h>

@class UIWindow, WebAppViewController, NSString;

@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate> {

	WebAppViewController* _webApp;
	UIWindow* _window;
	BOOL _wasSuspendedUnderLock;
	BOOL _sceneHasEverEnteredForeground;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(BOOL)_shouldReloadWebAppOnLaunch;
@end

