/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationRestrictionObserver.h>

@protocol BSInvalidatable, SBRecentAppLayoutsDelegate;
@class NSMutableArray, NSDictionary, NSMutableDictionary, SBAppSwitcherDefaults, SBIconController, SBApplicationController, SBApplicationPlaceholderController, SBMainDisplaySceneManager, SBRecentAppLayoutsPersister, NSString;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver> {

	NSMutableArray* _allRecents;
	NSMutableArray* _unhiddenRecents;
	NSDictionary* _allRecentsForBundleIdentifiers;
	NSDictionary* _unhiddenRecentsForBundleIdentifiers;
	NSDictionary* _allRecentDisplayItemsForBundleIdentifiers;
	NSDictionary* _unhiddenRecentDisplayItemsForBundleIdentifiers;
	NSMutableDictionary* _allowHiddenAppAssertions;
	SBAppSwitcherDefaults* _defaults;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBApplicationPlaceholderController* _placeholderController;
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
-(void)remove:(id)arg1 ;
-(id)_recentsFromPrefs;
-(id)recentsIncludingHiddenAppLayouts:(BOOL)arg1 ;
-(BOOL)_stashModelToPath:(id)arg1 ;
-(id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)arg1 ;
-(id)init;
-(BOOL)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)arg1 ;
-(id<SBRecentAppLayoutsDelegate>)delegate;
-(BOOL)_ignoresAppHiddenForDisplayItem:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 persister:(id)arg2 iconController:(id)arg3 applicationController:(id)arg4 placeholderController:(id)arg5 sceneManager:(id)arg6 ;
-(BOOL)_loadStashedModelAtPath:(id)arg1 ;
-(id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg1 ;
-(void)removeAppLayouts:(id)arg1 ;
-(void)_persistSynchronously;
-(void)_removeAllowHiddenAppAssertionForBundleIdentifier:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)_setUpStashedModelSettingsOutlets;
-(id)_legacyAppLayoutForItem:(id)arg1 layoutRole:(long long)arg2 ;
-(void)_saveRecents;
-(void)hide:(id)arg1 ;
-(void)_persistSoon;
-(id)_legacyAppLayoutsForDisplayItems:(id)arg1 layoutRolesMapping:(id)arg2 ;
-(void)_addAllowHiddenAppAssertionForBundleIdentifier:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)setDelegate:(id<SBRecentAppLayoutsDelegate>)arg1 ;
-(void)addToFront:(id)arg1 ;
-(id)_recentDisplayItemsFromLegacyPrefs;
-(void)_validateAndUpdateRecents:(id)arg1 ;
-(void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(void)_filterRestrictedOrUnsupportedAppsFromRecents;
-(void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(id)recentsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(BOOL)arg2 ;
-(BOOL)_isApplicationSupported:(id)arg1 ;
-(void)_initializeRecents;
-(id)_ppt_loadStashedModel;
-(void)_ppt_setModel:(id)arg1 ;
-(void)_setRecents:(id)arg1 notifyForChangeDescription:(id)arg2 ;
-(id)_changeDescriptionForFilteringAppLayouts:(id)arg1 withDisplayItemTest:(/*^block*/id)arg2 ;
-(BOOL)_isDisplayItemRestrictedOrUnsupported:(id)arg1 ;
-(id)_ppt_currentModel;
-(void)_iconVisibilityDidChange:(id)arg1 ;
-(id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)arg1 ;
-(id)_migrateDisplayItemIfNeeded:(id)arg1 ;
-(void)_addAllAppsToModel;
-(id)_acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
@end

