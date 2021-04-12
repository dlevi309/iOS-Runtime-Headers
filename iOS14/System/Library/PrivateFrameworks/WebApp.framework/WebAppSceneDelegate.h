/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)_tearDownWindowAndWebApp;
@end

