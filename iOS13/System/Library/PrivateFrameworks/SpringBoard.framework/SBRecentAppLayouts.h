/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationRestrictionObserver.h>

@protocol BSInvalidatable, SBRecentAppLayoutsDelegate;
@class NSMutableArray, NSDictionary, NSMutableSet, SBAppSwitcherDefaults, SBIconController, SBApplicationController, SBMainDisplaySceneManager, SBRecentAppLayoutsPersister, NSString;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver> {

	NSMutableArray* _allRecents;
	NSMutableArray* _unhiddenRecents;
	NSDictionary* _allRecentsForBundleIdentifiers;
	NSDictionary* _unhiddenRecentsForBundleIdentifiers;
	NSDictionary* _allRecentDisplayItemsForBundleIdentifiers;
	NSDictionary* _unhiddenRecentDisplayItemsForBundleIdentifiers;
	NSMutableSet* _appsAllowedWhileHidden;
	SBAppSwitcherDefaults* _defaults;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBMainDisplaySceneManager* _sceneManager;
	SBRecentAppLayoutsPersister* _persister;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	id<SBRecentAppLayoutsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBRecentAppLayoutsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)remove:(id)arg1 ;
-(id<SBRecentAppLayoutsDelegate>)delegate;
-(void)setDelegate:(id<SBRecentAppLayoutsDelegate>)arg1 ;
-(void)hide:(id)arg1 ;
-(void)_persistSynchronously;
-(void)_loadPPTAppsIntoModel;
-(void)_allowAppToAppearWhileHidden:(id)arg1 ;
-(void)_disallowAppFromAppearingWhileHidden:(id)arg1 ;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(id)recentsIncludingHiddenAppLayouts:(BOOL)arg1 ;
-(void)addToFront:(id)arg1 ;
-(void)removeAppLayouts:(id)arg1 ;
-(void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2 ;
-(id)recentsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(void)_persistSoon;
-(void)_iconVisibilityDidChange:(id)arg1 ;
-(BOOL)_loadStashedModelAtPath:(id)arg1 ;
-(BOOL)_stashModelToPath:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(id)_recentsFromPrefs;
-(void)_validateAndUpdateRecents:(id)arg1 ;
-(id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)arg1 ;
-(void)_setRecents:(id)arg1 notifyForChangeDescription:(id)arg2 ;
-(void)_setUpStashedModelSettingsOutlets;
-(id)initWithUserDefaults:(id)arg1 persister:(id)arg2 iconController:(id)arg3 applicationController:(id)arg4 sceneManager:(id)arg5 ;
-(void)_saveRecents;
-(BOOL)_isDisplayItemRestrictedOrUnsupported:(id)arg1 ;
-(id)_changeDescriptionForFilteringAppLayouts:(id)arg1 withDisplayItemTest:(/*^block*/id)arg2 ;
-(id)_legacyAppLayoutForItem:(id)arg1 layoutRole:(long long)arg2 ;
-(id)_recentDisplayItemsFromLegacyPrefs;
-(id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg1 ;
-(id)_legacyAppLayoutsForDisplayItems:(id)arg1 layoutRolesMapping:(id)arg2 ;
-(BOOL)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)arg1 ;
-(id)_migrateDisplayItemIfNeeded:(id)arg1 ;
-(void)_addAllAppsToModel;
-(void)_filterRestrictedOrUnsupportedAppsFromRecents;
-(BOOL)_isApplicationSupported:(id)arg1 ;
-(id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)arg1 ;
-(void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
@end

