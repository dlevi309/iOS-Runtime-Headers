/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUTabbedLibrarySettings : PXSettings {

	BOOL _enablePhotosTab;
	BOOL _enableMemoriesTab;
	BOOL _enableSharedTab;
	BOOL _enableAlbumsTab;
	BOOL _enableCuratedLibraryTab;
	BOOL _enableForYouTab;
	BOOL _enableSearchTab;
	BOOL _enableConsolidatedAlbumsTab;
	BOOL _enableBlankTab;
	BOOL _sidebarAnimateSelectionUpdates;
	BOOL _sidebarAllPhotosSuspendsNavigationHighlights;
	BOOL _sidebarScrollSelectedItemToCenter;
	BOOL _sidebarOnlyScrollOffscreenItemOnScreen;
	BOOL _sidebarExpandSelectedItems;
	BOOL _sidebarAnimateExpandSelectedItems;
	BOOL _sidebarAnimateDataSourceUpdates;
	BOOL _sidebarUseMacStructure;
	BOOL _sidebarEditAutoExpandToEditableItem;
	BOOL _sidebarHideNavBackButtonForSelectedItem;
	BOOL _sidebarLaunchAnimateLoad;
	BOOL _sidebarSymbolImagesOnly;
	long long _sidebarLaunchLoadMode;
	long long _sidebarEnabledMode;

}

@property (assign,nonatomic) long long sidebarEnabledMode;                                   //@synthesize sidebarEnabledMode=_sidebarEnabledMode - In the implementation block
@property (assign,nonatomic) BOOL enablePhotosTab;                                           //@synthesize enablePhotosTab=_enablePhotosTab - In the implementation block
@property (assign,nonatomic) BOOL enableMemoriesTab;                                         //@synthesize enableMemoriesTab=_enableMemoriesTab - In the implementation block
@property (assign,nonatomic) BOOL enableSharedTab;                                           //@synthesize enableSharedTab=_enableSharedTab - In the implementation block
@property (assign,nonatomic) BOOL enableAlbumsTab;                                           //@synthesize enableAlbumsTab=_enableAlbumsTab - In the implementation block
@property (assign,nonatomic) BOOL enableCuratedLibraryTab;                                   //@synthesize enableCuratedLibraryTab=_enableCuratedLibraryTab - In the implementation block
@property (assign,nonatomic) BOOL enableForYouTab;                                           //@synthesize enableForYouTab=_enableForYouTab - In the implementation block
@property (assign,nonatomic) BOOL enableSearchTab;                                           //@synthesize enableSearchTab=_enableSearchTab - In the implementation block
@property (assign,nonatomic) BOOL enableConsolidatedAlbumsTab;                               //@synthesize enableConsolidatedAlbumsTab=_enableConsolidatedAlbumsTab - In the implementation block
@property (assign,nonatomic) BOOL enableBlankTab;                                            //@synthesize enableBlankTab=_enableBlankTab - In the implementation block
@property (getter=isSidebarEnabled,nonatomic,readonly) BOOL sidebarEnabled; 
@property (assign,nonatomic) BOOL sidebarAnimateSelectionUpdates;                            //@synthesize sidebarAnimateSelectionUpdates=_sidebarAnimateSelectionUpdates - In the implementation block
@property (assign,nonatomic) BOOL sidebarAllPhotosSuspendsNavigationHighlights;              //@synthesize sidebarAllPhotosSuspendsNavigationHighlights=_sidebarAllPhotosSuspendsNavigationHighlights - In the implementation block
@property (assign,nonatomic) BOOL sidebarScrollSelectedItemToCenter;                         //@synthesize sidebarScrollSelectedItemToCenter=_sidebarScrollSelectedItemToCenter - In the implementation block
@property (assign,nonatomic) BOOL sidebarOnlyScrollOffscreenItemOnScreen;                    //@synthesize sidebarOnlyScrollOffscreenItemOnScreen=_sidebarOnlyScrollOffscreenItemOnScreen - In the implementation block
@property (assign,nonatomic) BOOL sidebarExpandSelectedItems;                                //@synthesize sidebarExpandSelectedItems=_sidebarExpandSelectedItems - In the implementation block
@property (assign,nonatomic) BOOL sidebarAnimateExpandSelectedItems;                         //@synthesize sidebarAnimateExpandSelectedItems=_sidebarAnimateExpandSelectedItems - In the implementation block
@property (assign,nonatomic) BOOL sidebarAnimateDataSourceUpdates;                           //@synthesize sidebarAnimateDataSourceUpdates=_sidebarAnimateDataSourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL sidebarUseMacStructure;                                    //@synthesize sidebarUseMacStructure=_sidebarUseMacStructure - In the implementation block
@property (assign,nonatomic) BOOL sidebarEditAutoExpandToEditableItem;                       //@synthesize sidebarEditAutoExpandToEditableItem=_sidebarEditAutoExpandToEditableItem - In the implementation block
@property (assign,nonatomic) BOOL sidebarHideNavBackButtonForSelectedItem;                   //@synthesize sidebarHideNavBackButtonForSelectedItem=_sidebarHideNavBackButtonForSelectedItem - In the implementation block
@property (assign,nonatomic) long long sidebarLaunchLoadMode;                                //@synthesize sidebarLaunchLoadMode=_sidebarLaunchLoadMode - In the implementation block
@property (assign,nonatomic) BOOL sidebarLaunchAnimateLoad;                                  //@synthesize sidebarLaunchAnimateLoad=_sidebarLaunchAnimateLoad - In the implementation block
@property (assign,nonatomic) BOOL sidebarSymbolImagesOnly;                                   //@synthesize sidebarSymbolImagesOnly=_sidebarSymbolImagesOnly - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)transientProperties;
+(id)keyPathsForValuesAffectingSidebarEnabled;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)isSidebarEnabled;
-(void)setSidebarAllPhotosSuspendsNavigationHighlights:(BOOL)arg1 ;
-(BOOL)enableBlankTab;
-(long long)countOfEnabledTabs;
-(BOOL)sidebarAnimateDataSourceUpdates;
-(void)setSidebarAnimateSelectionUpdates:(BOOL)arg1 ;
-(BOOL)enableMemoriesTab;
-(void)setSidebarAnimateDataSourceUpdates:(BOOL)arg1 ;
-(BOOL)sidebarUseMacStructure;
-(void)setSidebarHideNavBackButtonForSelectedItem:(BOOL)arg1 ;
-(BOOL)sidebarAnimateSelectionUpdates;
-(void)setSidebarUseMacStructure:(BOOL)arg1 ;
-(void)setSidebarEditAutoExpandToEditableItem:(BOOL)arg1 ;
-(void)setEnableCuratedLibraryTab:(BOOL)arg1 ;
-(void)setEnableConsolidatedAlbumsTab:(BOOL)arg1 ;
-(BOOL)enableCuratedLibraryTab;
-(BOOL)sidebarOnlyScrollOffscreenItemOnScreen;
-(long long)sidebarEnabledMode;
-(void)setEnablePhotosTab:(BOOL)arg1 ;
-(void)setEnableSearchTab:(BOOL)arg1 ;
-(void)setSidebarSymbolImagesOnly:(BOOL)arg1 ;
-(id)allTabs;
-(void)setSidebarAnimateExpandSelectedItems:(BOOL)arg1 ;
-(long long)sidebarLaunchLoadMode;
-(void)setSidebarScrollSelectedItemToCenter:(BOOL)arg1 ;
-(void)setSidebarOnlyScrollOffscreenItemOnScreen:(BOOL)arg1 ;
-(BOOL)sidebarHideNavBackButtonForSelectedItem;
-(BOOL)sidebarAllPhotosSuspendsNavigationHighlights;
-(BOOL)enableSharedTab;
-(void)setSidebarLaunchAnimateLoad:(BOOL)arg1 ;
-(BOOL)sidebarLaunchAnimateLoad;
-(BOOL)enableForYouTab;
-(void)setSidebarEnabledMode:(long long)arg1 ;
-(BOOL)enableSearchTab;
-(BOOL)sidebarAnimateExpandSelectedItems;
-(BOOL)enablePhotosTab;
-(void)setSidebarLaunchLoadMode:(long long)arg1 ;
-(BOOL)sidebarScrollSelectedItemToCenter;
-(BOOL)sidebarEditAutoExpandToEditableItem;
-(void)setEnableMemoriesTab:(BOOL)arg1 ;
-(void)setEnableBlankTab:(BOOL)arg1 ;
-(BOOL)enableConsolidatedAlbumsTab;
-(void)setEnableAlbumsTab:(BOOL)arg1 ;
-(BOOL)sidebarSymbolImagesOnly;
-(BOOL)enableAlbumsTab;
-(BOOL)sidebarExpandSelectedItems;
-(void)setEnableSharedTab:(BOOL)arg1 ;
-(void)setSidebarExpandSelectedItems:(BOOL)arg1 ;
-(void)setEnableForYouTab:(BOOL)arg1 ;
@end

