/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/


@protocol AXSpringBoardServerSideAppManagerDelegate;
@interface AXSpringBoardServerSideAppManager : NSObject {

	id<AXSpringBoardServerSideAppManagerDelegate> _delegate;
	unsigned long long _dockIconActivationMode;

}

@property (assign,nonatomic,__weak) id<AXSpringBoardServerSideAppManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long dockIconActivationMode;                                  //@synthesize dockIconActivationMode=_dockIconActivationMode - In the implementation block
+(id)sharedInstance;
+(id)_mainDisplaySceneLayoutViewController;
+(id)_mainDisplaySceneManager;
-(void)_performValidation;
-(void)launchFloatingApplication:(id)arg1 ;
-(void)_performMedusaGesture:(unsigned long long)arg1 ;
-(BOOL)canActivateMedusaForDock;
-(id)_floatingAppRootViewController;
-(long long)_currentFloatingConfiguration;
-(id)init;
-(void)_addFloatingApplicationGesturesIfAllowed:(id)arg1 ;
-(id)sceneLayoutState;
-(unsigned long long)dockIconActivationMode;
-(id)_bundleIdentifierForIconView:(id)arg1 ;
-(id<AXSpringBoardServerSideAppManagerDelegate>)delegate;
-(id)_applicationController;
-(id)allowedMedusaGestures;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(id)_appForLayoutRole:(long long)arg1 layoutState:(id)arg2 ;
-(BOOL)canLaunchAsFloatingApplicationForIconView:(id)arg1 ;
-(id)_sbSwitcherTransitionRequestClass;
-(void)_requestFloatingAppSwitcherVisible;
-(void)setDockIconActivationMode:(unsigned long long)arg1 ;
-(id)_mainDisplaySceneLayoutViewController;
-(void)_enumerateAppsAndLayoutRoles:(/*^block*/id)arg1 ;
-(id)_sbWorkspaceMainWorkspace;
-(void)setDelegate:(id<AXSpringBoardServerSideAppManagerDelegate>)arg1 ;
-(id)_sbPreviousWorkspaceEntityClass;
-(void)_endDockIconActivationModeAfterTimeout;
-(id)appForLayoutRole:(long long)arg1 ;
-(BOOL)_isDockIconView:(id)arg1 ;
-(long long)_currentSpaceConfiguration;
-(BOOL)_hasFloatingApp;
-(void)_requestTransactionWithPrimaryEntity:(id)arg1 sideEntity:(id)arg2 floatingEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 ;
-(id)_sbEmptyEntity;
-(id)_mainDisplaySceneManager;
-(id)_activeApplicationBundleIdentifiers;
-(BOOL)hasMultipleApps;
-(void)launchPinnedApplication:(id)arg1 onLeadingSide:(BOOL)arg2 ;
-(BOOL)isDisplayingApp;
-(id)_sbPreviousEntity;
-(void)launchApplicationWithFullConfiguration:(id)arg1 ;
-(id)_appWithIdentifier:(id)arg1 ;
-(void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)arg1 ;
-(BOOL)canLaunchAsPinnedApplicationForIconView:(id)arg1 ;
-(id)medusaApps;
-(BOOL)_hasPinnedApp;
-(void)launchApplication:(id)arg1 ;
-(void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg1 ;
-(id)medusaAppBundleIdsToLayoutRoles;
@end

