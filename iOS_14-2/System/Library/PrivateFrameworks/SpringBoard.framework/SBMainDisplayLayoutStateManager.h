/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)defaultSceneIdentifierForBundleIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleSceneIdentifiers:(id)arg5 excludingSceneIdentifiers:(id)arg6 ;
-(id)_mostRecentAppLayoutMatchingWorkspaceUniqueIdentifiers:(id)arg1 ;
-(id)primarySceneIdentifierForBundleIdentifier:(id)arg1 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1 ;
-(id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(SBMainDisplaySceneManager *)_mainDisplaySceneManager;
-(id)_layoutStateForApplicationTransitionContext:(id)arg1 ;
-(BOOL)_doesSceneIDSpecifyPrimaryScene:(id)arg1 forApplicationIdentifier:(id)arg2 ;
-(SBRecentAppLayouts *)_recentAppLayouts;
-(SBMainWorkspace *)_mainWorkspace;
-(id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(SBPlatformController *)_platformController;
@end

