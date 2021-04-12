/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)localeChanged;
-(BOOL)isIconVisible:(id)arg1 ;
-(void)loadAllIcons;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(id)modernizeRootArchive:(id)arg1 ;
-(void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4 ;
-(void)willLayout;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(id)exportState:(BOOL)arg1 ;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)addIconForApplication:(id)arg1 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(BOOL)importState:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(void)_noteApplicationIconImageChanged:(id)arg1 ;
-(void)addIconForApplication:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg1 ;
-(BOOL)allowsWebClips;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)_applicationIcons;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(void)setAllowsWebClips:(BOOL)arg1 ;
@end

