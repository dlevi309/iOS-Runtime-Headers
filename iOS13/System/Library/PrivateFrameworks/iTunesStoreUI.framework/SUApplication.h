/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIColor, NSString;

@interface SUApplication : UIApplication <UIApplicationDelegate> {

	BOOL _terminateOnNextSuspend;
	UIWindow* _window;
	UIColor* _interactionTintColor;

}

@property (nonatomic,copy) UIColor * interactionTintColor;              //@synthesize interactionTintColor=_interactionTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(id)init;
-(void)dealloc;
-(double)defaultImageSnapshotExpiration;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)setInteractionTintColor:(UIColor *)arg1 ;
-(UIColor *)interactionTintColor;
-(void)_storeEnabledChangeNotification:(id)arg1 ;
-(void)_teardownUI;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_setupUI;
-(void)_exitIfStoreNotAvailable;
-(void)_exitForStoreNotAvailable;
-(void)_runScriptTestWithOptions:(id)arg1 ;
-(void)runTestInvocation:(id)arg1 ;
@end

