/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSHomeScreenServiceClientToServerInterface.h>

@class NSNumber, NSArray, SBIconController, FBServiceClientAuthenticator, NSMutableSet, BSServiceConnectionListener, NSString;

@interface SBHomeScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSHomeScreenServiceClientToServerInterface> {

	os_unfair_lock_s _lock;
	SBIconController* _iconController;
	FBServiceClientAuthenticator* _resetHomeScreenLayoutAuthenticator;
	FBServiceClientAuthenticator* _requestSuggestedAppAuthenticator;
	FBServiceClientAuthenticator* _iconFolderPathLookupAuthenticator;
	FBServiceClientAuthenticator* _addWidgetToTodayViewAuthenticator;
	FBServiceClientAuthenticator* _lowDensityLayoutAuthenticator;
	FBServiceClientAuthenticator* _addsNewIconsToHomeScreenAuthenticator;
	FBServiceClientAuthenticator* _showsBadgesInAppLibraryAuthenticator;
	FBServiceClientAuthenticator* _homeScreenBundleIdentifiersAuthenticator;
	FBServiceClientAuthenticator* _appLibraryRequestUpdateAuthenticator;
	FBServiceClientAuthenticator* _displayedDateAuthenticator;
	FBServiceClientAuthenticator* _configurationAuthenticator;
	NSMutableSet* _activeConnections;
	BSServiceConnectionListener* _connectionListener;

}

@property (nonatomic,readonly) SBIconController * iconController;                                                    //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * resetHomeScreenLayoutAuthenticator;                    //@synthesize resetHomeScreenLayoutAuthenticator=_resetHomeScreenLayoutAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * requestSuggestedAppAuthenticator;                      //@synthesize requestSuggestedAppAuthenticator=_requestSuggestedAppAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * iconFolderPathLookupAuthenticator;                     //@synthesize iconFolderPathLookupAuthenticator=_iconFolderPathLookupAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * addWidgetToTodayViewAuthenticator;                     //@synthesize addWidgetToTodayViewAuthenticator=_addWidgetToTodayViewAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * lowDensityLayoutAuthenticator;                         //@synthesize lowDensityLayoutAuthenticator=_lowDensityLayoutAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * addsNewIconsToHomeScreenAuthenticator;                 //@synthesize addsNewIconsToHomeScreenAuthenticator=_addsNewIconsToHomeScreenAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * showsBadgesInAppLibraryAuthenticator;                  //@synthesize showsBadgesInAppLibraryAuthenticator=_showsBadgesInAppLibraryAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * homeScreenBundleIdentifiersAuthenticator;              //@synthesize homeScreenBundleIdentifiersAuthenticator=_homeScreenBundleIdentifiersAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * appLibraryRequestUpdateAuthenticator;                  //@synthesize appLibraryRequestUpdateAuthenticator=_appLibraryRequestUpdateAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * displayedDateAuthenticator;                            //@synthesize displayedDateAuthenticator=_displayedDateAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * configurationAuthenticator;                            //@synthesize configurationAuthenticator=_configurationAuthenticator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activeConnections;                                                     //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionListener * connectionListener;                                     //@synthesize connectionListener=_connectionListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
@property (nonatomic,copy) NSNumber * addsNewIconsToHomeScreenValue; 
@property (nonatomic,copy) NSNumber * showsBadgesInAppLibraryValue; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
-(SBIconController *)iconController;
-(void)removeAllWidgets;
-(oneway void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(NSMutableSet *)activeConnections;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
-(FBServiceClientAuthenticator *)addsNewIconsToHomeScreenAuthenticator;
-(void)changeDisplayedDateOffsetOverride:(id)arg1 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(id)arg1 ;
-(FBServiceClientAuthenticator *)addWidgetToTodayViewAuthenticator;
-(FBServiceClientAuthenticator *)showsBadgesInAppLibraryAuthenticator;
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)setAddsNewIconsToHomeScreenValue:(NSNumber *)arg1 ;
-(void)reloadIcons;
-(oneway void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1 ;
-(BSServiceConnectionListener *)connectionListener;
-(FBServiceClientAuthenticator *)homeScreenBundleIdentifiersAuthenticator;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)changeDisplayedDateOverride:(id)arg1 ;
-(FBServiceClientAuthenticator *)requestSuggestedAppAuthenticator;
-(BOOL)debugContinuityWithBadgeType:(id)arg1 ;
-(FBServiceClientAuthenticator *)resetHomeScreenLayoutAuthenticator;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)runDownloadingIconTest;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIconController:(id)arg1 ;
-(FBServiceClientAuthenticator *)appLibraryRequestUpdateAuthenticator;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1 ;
-(FBServiceClientAuthenticator *)displayedDateAuthenticator;
-(void)setLowDensityIconLayoutEnabledValue:(NSNumber *)arg1 ;
-(FBServiceClientAuthenticator *)configurationAuthenticator;
-(void)ignoreAllApps;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)requestAppLibraryUpdate:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)refreshAppLibrary:(id)arg1 reason:(id)arg2 ;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setShowsBadgesInAppLibraryValue:(NSNumber *)arg1 ;
-(FBServiceClientAuthenticator *)lowDensityLayoutAuthenticator;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(void)organizeAllIconsAcrossPagesWithPageCount:(id)arg1 ;
-(NSNumber *)showsBadgesInAppLibraryValue;
-(FBServiceClientAuthenticator *)iconFolderPathLookupAuthenticator;
-(oneway void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSNumber *)addsNewIconsToHomeScreenValue;
-(void)_requestAppLibraryUpdate:(id)arg1 reason:(id)arg2 optionalCompletionHandler:(/*^block*/id)arg3 ;
-(void)runRemoveAndRestoreIconTest;
-(NSNumber *)lowDensityIconLayoutEnabledValue;
@end

