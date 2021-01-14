/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/


@protocol SPUISpotlightSceneManagerDelegate, OS_dispatch_queue;
@class SPUIAppService, NSHashTable, FBSDisplayLayoutMonitor, BSTimer, RBSProcessHandle, RBSAssertion, NSObject;

@interface SPUISpotlightSceneManager : NSObject {

	SPUIAppService* _appService;
	id<SPUISpotlightSceneManagerDelegate> _delegate;
	NSHashTable* _managedScenes;
	NSHashTable* _foregroundScenes;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	BSTimer* _watchdogTimer;
	RBSProcessHandle* _spotlightProcessHandle;
	RBSAssertion* _initializationAssertions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSHashTable * managedScenes;                                                  //@synthesize managedScenes=_managedScenes - In the implementation block
@property (retain) NSHashTable * foregroundScenes;                                               //@synthesize foregroundScenes=_foregroundScenes - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * layoutMonitor;                                      //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (retain) BSTimer * watchdogTimer;                                                      //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (retain) RBSProcessHandle * spotlightProcessHandle;                                    //@synthesize spotlightProcessHandle=_spotlightProcessHandle - In the implementation block
@property (retain) RBSAssertion * initializationAssertions;                                      //@synthesize initializationAssertions=_initializationAssertions - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISpotlightSceneManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)setForegroundScenes:(NSHashTable *)arg1 ;
-(void)setLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(NSHashTable *)foregroundScenes;
-(id)init;
-(id<SPUISpotlightSceneManagerDelegate>)delegate;
-(void)launchSpotlightIfNeededWithForegroundPriority:(BOOL)arg1 ;
-(void)sceneWillBackground:(id)arg1 ;
-(void)setDelegate:(id<SPUISpotlightSceneManagerDelegate>)arg1 ;
-(void)setSpotlightProcessHandle:(RBSProcessHandle *)arg1 ;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
-(void)sceneWillForeground:(id)arg1 ;
-(void)addScene:(id)arg1 ;
-(RBSProcessHandle *)spotlightProcessHandle;
-(BSTimer *)watchdogTimer;
-(RBSAssertion *)initializationAssertions;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeScene:(id)arg1 ;
-(void)setInitializationAssertions:(RBSAssertion *)arg1 ;
-(void)setWatchdogTimer:(BSTimer *)arg1 ;
-(void)applyAssertionAsNeeded;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManagedScenes:(NSHashTable *)arg1 ;
-(NSHashTable *)managedScenes;
@end

