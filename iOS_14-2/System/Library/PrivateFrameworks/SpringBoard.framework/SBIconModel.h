/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardHome/SBHIconModel.h>

@protocol SBIconModelApplicationDataSource;
@interface SBIconModel : SBHIconModel {

	BOOL _iconsHaveBeenLoadedOnce;
	BOOL _createsIconsForInternalApps;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	BOOL _allowsWebClips;

}

@property (nonatomic,readonly) id<SBIconModelApplicationDataSource> applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (assign,nonatomic) BOOL allowsWebClips;                                                       //@synthesize allowsWebClips=_allowsWebClips - In the implementation block
+(id)migratedIdentifierForLeafIdentifier:(id)arg1 ;
-(void)localeChanged;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(void)willLayout;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(id)exportState:(BOOL)arg1 ;
-(BOOL)allowsWebClips;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg1 ;
-(void)loadAllIcons;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4 ;
-(id)addIconForApplication:(id)arg1 ;
-(id)modernizeRootArchive:(id)arg1 ;
-(id)addIconForApplication:(id)arg1 force:(BOOL)arg2 ;
-(id)_applicationIcons;
-(BOOL)isIconVisible:(id)arg1 ;
-(id)description;
-(BOOL)_shouldSkipAddingIcon:(id)arg1 toRootFolder:(id)arg2 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(BOOL)importState:(id)arg1 ;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_noteApplicationIconImageChanged:(id)arg1 ;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(void)updateExistingBookmarkIcon:(id)arg1 forUpdatedWebClip:(id)arg2 ;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(void)setAllowsWebClips:(BOOL)arg1 ;
-(void)dealloc;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)_replaceAppIconsWithDownloadingIcons;
@end

