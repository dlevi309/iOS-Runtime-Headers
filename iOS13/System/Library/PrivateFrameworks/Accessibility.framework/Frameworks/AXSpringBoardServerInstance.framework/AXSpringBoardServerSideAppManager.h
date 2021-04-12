/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
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
-(id)init;
-(id<AXSpringBoardServerSideAppManagerDelegate>)delegate;
-(void)setDelegate:(id<AXSpringBoardServerSideAppManagerDelegate>)arg1 ;
-(id)allowedMedusaGestures;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(id)medusaApps;
-(void)setDockIconActivationMode:(unsigned long long)arg1 ;
-(id)_applicationController;
-(void)_performValidation;
-(BOOL)isDisplayingApp;
-(BOOL)canActivateMedusaForDock;
-(id)medusaAppBundleIdsToLayoutRoles;
-(void)launchApplication:(id)arg1 ;
-(void)launchApplicationWithFullConfiguration:(id)arg1 ;
-(void)launchPinnedApplication:(id)arg1 onLeadingSide:(BOOL)arg2 ;
-(void)launchFloatingApplication:(id)arg1 ;
-(BOOL)canLaunchAsPinnedApplicationForIconView:(id)arg1 ;
-(BOOL)canLaunchAsFloatingApplicationForIconView:(id)arg1 ;
-(id)sceneLayoutState;
-(id)appForLayoutRole:(long long)arg1 ;
-(BOOL)hasMultipleApps;
-(void)_performMedusaGesture:(unsigned long long)arg1 ;
-(void)_addFloatingApplicationGesturesIfAllowed:(id)arg1 ;
-(id)_mainDisplaySceneLayoutViewController;
-(BOOL)_hasPinnedApp;
-(void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg1 ;
-(id)_appForLayoutRole:(long long)arg1 layoutState:(id)arg2 ;
-(long long)_currentFloatingConfiguration;
-(id)_mainDisplaySceneManager;
-(void)_enumerateAppsAndLayoutRoles:(/*^block*/id)arg1 ;
-(void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)arg1 ;
-(BOOL)_isDockIconView:(id)arg1 ;
-(id)_bundleIdentifierForIconView:(id)arg1 ;
-(id)_appWithIdentifier:(id)arg1 ;
-(void)_endDockIconActivationModeAfterTimeout;
-(unsigned long long)dockIconActivationMode;
-(long long)_currentSpaceConfiguration;
-(id)_sbPreviousWorkspaceEntityClass;
-(id)_sbEmptyEntity;
-(id)_sbPreviousEntity;
-(void)_requestFloatingAppSwitcherVisible;
-(void)_requestTransactionWithPrimaryEntity:(id)arg1 sideEntity:(id)arg2 floatingEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 ;
-(id)_sbWorkspaceMainWorkspace;
-(id)_sbSwitcherTransitionRequestClass;
-(BOOL)_hasFloatingApp;
-(id)_activeApplicationBundleIdentifiers;
-(id)_floatingAppRootViewController;
@end

