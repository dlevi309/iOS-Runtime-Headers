/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol OS_dispatch_queue;
@class NSObject, UIWindowScene, NSString, CARObserverHashTable;

@interface CPSApplicationStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _stateObserverQueue;
	UIWindowScene* _windowSceneForTemplateApplicationScene;
	UIWindowScene* _windowSceneForMapWidgetScene;
	UIWindowScene* _windowSceneForGuidanceWidgetScene;
	NSString* _bundleIdentifier;
	CARObserverHashTable* _stateObservers;

}

@property (nonatomic,retain) CARObserverHashTable * stateObservers;                                      //@synthesize stateObservers=_stateObservers - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForTemplateApplicationScene;              //@synthesize windowSceneForTemplateApplicationScene=_windowSceneForTemplateApplicationScene - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForMapWidgetScene;                        //@synthesize windowSceneForMapWidgetScene=_windowSceneForMapWidgetScene - In the implementation block
@property (assign,nonatomic,__weak) UIWindowScene * windowSceneForGuidanceWidgetScene;                   //@synthesize windowSceneForGuidanceWidgetScene=_windowSceneForGuidanceWidgetScene - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isApplicationActive,nonatomic,readonly) BOOL applicationActive; 
@property (nonatomic,readonly) BOOL canPostManeuverNotification; 
@property (nonatomic,readonly) BOOL canPostNavigationAlertNotification; 
@property (nonatomic,readonly) BOOL templateApplicationSceneIsActive; 
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)_sceneWillEnterForeground:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(CARObserverHashTable *)stateObservers;
-(void)setStateObservers:(CARObserverHashTable *)arg1 ;
-(BOOL)isApplicationActive;
-(void)setWindowSceneForTemplateApplicationScene:(UIWindowScene *)arg1 ;
-(void)removeApplicationStateObserver:(id)arg1 ;
-(void)setWindowSceneForMapWidgetScene:(UIWindowScene *)arg1 ;
-(void)setWindowSceneForGuidanceWidgetScene:(UIWindowScene *)arg1 ;
-(UIWindowScene *)windowSceneForTemplateApplicationScene;
-(UIWindowScene *)windowSceneForMapWidgetScene;
-(UIWindowScene *)windowSceneForGuidanceWidgetScene;
-(void)_observeScene:(id)arg1 ;
-(BOOL)_sceneIsForeground:(id)arg1 ;
-(void)_notifyObserversForeground:(BOOL)arg1 ;
-(void)addApplicationStateObserver:(id)arg1 ;
-(BOOL)canPostManeuverNotification;
-(BOOL)canPostNavigationAlertNotification;
-(BOOL)templateApplicationSceneIsActive;
@end

