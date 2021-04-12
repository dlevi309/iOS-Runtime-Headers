/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <TVMLKit/TVApplicationControllerDelegate.h>

@class UIWindow, TVApplicationController, BKSProcessAssertion, NSString;

@interface TVAppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {

	BOOL _headLess;
	BOOL _shouldTerminateOnEnterBackground;
	UIWindow* _window;
	TVApplicationController* _appController;
	BKSProcessAssertion* _launchAssertion;

}

@property (nonatomic,retain) TVApplicationController * appController;              //@synthesize appController=_appController - In the implementation block
@property (assign,nonatomic) BOOL shouldTerminateOnEnterBackground;                //@synthesize shouldTerminateOnEnterBackground=_shouldTerminateOnEnterBackground - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * launchAssertion;                //@synthesize launchAssertion=_launchAssertion - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)_launchContext;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(TVApplicationController *)appController;
-(id)launchOptionsWithDefaultOptions:(id)arg1 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(BOOL)shouldTerminateOnEnterBackground;
-(void)_runScrollMoveTest:(id)arg1 ;
-(void)_presetDialogWithError:(long long)arg1 appController:(id)arg2 ;
-(void)setShouldTerminateOnEnterBackground:(BOOL)arg1 ;
-(void)setAppController:(TVApplicationController *)arg1 ;
-(BKSProcessAssertion *)launchAssertion;
-(void)setLaunchAssertion:(BKSProcessAssertion *)arg1 ;
@end

