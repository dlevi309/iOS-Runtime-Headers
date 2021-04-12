/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(UIColor *)interactionTintColor;
-(void)setInteractionTintColor:(UIColor *)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(double)defaultImageSnapshotExpiration;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(void)_setupUI;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)_storeEnabledChangeNotification:(id)arg1 ;
-(void)_teardownUI;
-(void)_exitIfStoreNotAvailable;
-(void)_exitForStoreNotAvailable;
-(void)_runScriptTestWithOptions:(id)arg1 ;
-(void)runTestInvocation:(id)arg1 ;
@end

