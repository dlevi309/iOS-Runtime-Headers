/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow;

@interface TSAppDelegate : UIResponder <UIApplicationDelegate> {

	 resolver;
	 window;
	 windowToolbarManager;
	 sessionObserver;
	 $__lazy_storage_$_menuManager;

}

@property (retain,nonatomic) UIWindow * window; 
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)init;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)bootstrapWithApplication:(id)arg1 ;
-(void)bootstrapWithContainer:(id)arg1 application:(id)arg2 ;
-(void)bootstrapWithWindow:(id)arg1 application:(id)arg2 ;
@end

