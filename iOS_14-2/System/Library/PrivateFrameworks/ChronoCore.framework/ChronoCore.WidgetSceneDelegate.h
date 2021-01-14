/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/CHUISAvocadoWindowSceneDelegate.h>

@interface ChronoCore.WidgetSceneDelegate : UIResponder <CHUISAvocadoWindowSceneDelegate> {

	 timelineService;
	 connection;
	 foreground;
	 isEffectivelyVisible;
	 timelineReloadedNotificationCancellable;
	 evaluateStaleTimelineContentTimer;
	 extensionSubscriptions;
	 snapshotSubscription;

}
-(id)init;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneWillResignActive:(id)arg1 ;
-(void)dealloc;
@end

