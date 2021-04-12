/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBLayoutStateManager.h>

@class SBPlatformController, SBMainWorkspace, SBMainDisplaySceneManager, SBRecentAppLayouts;

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (nonatomic,readonly) SBPlatformController * _platformController; 
@property (nonatomic,readonly) SBMainWorkspace * _mainWorkspace; 
@property (nonatomic,readonly) SBMainDisplaySceneManager * _mainDisplaySceneManager; 
@property (nonatomic,readonly) SBRecentAppLayouts * _recentAppLayouts; 
+(Class)_layoutStateClass;
-(SBMainDisplaySceneManager *)_mainDisplaySceneManager;
-(SBMainWorkspace *)_mainWorkspace;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(SBRecentAppLayouts *)_recentAppLayouts;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1 ;
-(id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)_doesSceneIDSpecifyPrimaryScene:(id)arg1 forApplicationIdentifier:(id)arg2 ;
-(SBPlatformController *)_platformController;
-(id)_mostRecentAppLayoutMatchingWorkspaceUniqueIdentifiers:(id)arg1 ;
-(id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)defaultSceneIdentifierForBundleIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleSceneIdentifiers:(id)arg5 excludingSceneIdentifiers:(id)arg6 ;
-(id)primarySceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)_layoutStateForApplicationTransitionContext:(id)arg1 ;
@end

