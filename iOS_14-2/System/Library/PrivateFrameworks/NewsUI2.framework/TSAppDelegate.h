/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow;

@interface TSAppDelegate : UIResponder <UIApplicationDelegate> {

	 $__lazy_storage_$_resolverManager;
	 $__lazy_storage_$_resolvers;
	 window;
	 swiftSingletonPool;
	 objcSingletonPool;
	 $__lazy_storage_$_menuManager;
	 $__lazy_storage_$_commandCenter;
	 $__lazy_storage_$_tracker;

}

@property (retain,nonatomic) UIWindow * window; 
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)validateCommand:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)buildMenuWithBuilder:(id)arg1 ;
-(id)createSceneResolver;
-(id)createCarPlaySceneResolver;
-(id)createBridgedAppResolver;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(UIWindow *)window;
-(void)bootstrapWithApplication:(id)arg1 ;
@end

