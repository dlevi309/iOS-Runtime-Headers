/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSNumber, NSArray;


@protocol SBSHomeScreenServiceClientToServerInterface
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
@property (nonatomic,copy) NSNumber * addsNewIconsToHomeScreenValue; 
@property (nonatomic,copy) NSNumber * showsBadgesInAppLibraryValue; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
@required
-(void)removeAllWidgets;
-(oneway void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
-(void)changeDisplayedDateOffsetOverride:(id)arg1;
-(void)organizeAllIconsIntoFoldersWithPageCount:(id)arg1;
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1;
-(void)setAddsNewIconsToHomeScreenValue:(id)arg1;
-(void)reloadIcons;
-(oneway void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3;
-(void)changeDisplayedDateOverride:(id)arg1;
-(BOOL)debugContinuityWithBadgeType:(id)arg1;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1;
-(void)runDownloadingIconTest;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1;
-(void)setLowDensityIconLayoutEnabledValue:(id)arg1;
-(void)ignoreAllApps;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)requestAppLibraryUpdate:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3;
-(void)refreshAppLibrary:(id)arg1 reason:(id)arg2;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)setShowsBadgesInAppLibraryValue:(id)arg1;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(void)organizeAllIconsAcrossPagesWithPageCount:(id)arg1;
-(NSNumber *)showsBadgesInAppLibraryValue;
-(oneway void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(NSNumber *)addsNewIconsToHomeScreenValue;
-(void)runRemoveAndRestoreIconTest;
-(NSNumber *)lowDensityIconLayoutEnabledValue;

@end

