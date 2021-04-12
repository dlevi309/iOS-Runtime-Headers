/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSHomeScreenServiceServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSArray;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (assign,getter=isLowDensityIconLayoutEnabled,nonatomic) BOOL lowDensityIconLayoutEnabled; 
@property (assign,nonatomic) BOOL addsNewIconsToHomeScreen; 
@property (assign,nonatomic) BOOL showsBadgesInAppLibrary; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
-(BOOL)showsBadgesInAppLibrary;
-(void)removeAllWidgets;
-(void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
-(BOOL)addsNewIconsToHomeScreen;
-(id)init;
-(void)changeDisplayedDateOffsetOverride:(double)arg1 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1 ;
-(void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadIcons;
-(void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(void)changeDisplayedDateOverride:(id)arg1 ;
-(void)setAddsNewIconsToHomeScreen:(BOOL)arg1 ;
-(BOOL)debugContinuityWithBadgeType:(id)arg1 ;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)runDownloadingIconTest;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1 ;
-(void)setShowsBadgesInAppLibrary:(BOOL)arg1 ;
-(void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ignoreAllApps;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)requestAppLibraryUpdateWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLowDensityIconLayoutEnabled:(BOOL)arg1 ;
-(BOOL)isLowDensityIconLayoutEnabled;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1 ;
-(void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)runRemoveAndRestoreIconTest;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

