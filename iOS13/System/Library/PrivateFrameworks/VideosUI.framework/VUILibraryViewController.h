/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/VUILibraryShelfCollectionViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/VUIShelvesDataSourceDelegate.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIMenuCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIFamilyMembersViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@class VUIDownloadViewController, VUIFamilyMember, UIBarButtonItem, VUIViewControllerContentPresenter, VUILibraryMenuDataSource, NSArray, VUILibraryMenuItemViewCell, VUIMediaLibrary, VUILibraryBannerCollectionViewCell, VUILibraryShelvesDataSource, NSMutableArray, _VUILibrarySeeAllController, NSString;

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, UIGestureRecognizerDelegate, VUIShelvesDataSourceDelegate, VUILibraryDataSourceDelegate, VUIMenuCollectionViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol> {

	VUIDownloadViewController* _presentedDownloadViewController;
	BOOL _ppt_isLoaded;
	BOOL _hasMenuItemFetchCompleted;
	BOOL _hasMediaEntitiesFetchCompleted;
	BOOL _doesDeviceSupportHDR;
	VUIFamilyMember* _familyMember;
	UIBarButtonItem* _libraryBarButton;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUILibraryMenuDataSource* _menuDataSource;
	NSArray* _menuCells;
	VUILibraryMenuItemViewCell* _menuItemSizingCell;
	NSArray* _homeShares;
	VUIMediaLibrary* _currentHomeShareMediaLibrary;
	VUILibraryBannerCollectionViewCell* _bannerViewSizingCell;
	VUILibraryShelvesDataSource* _shelvesDataSource;
	NSMutableArray* _shelves;
	NSMutableArray* _validShelfTypes;
	_VUILibrarySeeAllController* _currentSeeAllController;
	VUIMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) UIBarButtonItem * libraryBarButton;                                     //@synthesize libraryBarButton=_libraryBarButton - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                   //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) VUILibraryMenuDataSource * menuDataSource;                              //@synthesize menuDataSource=_menuDataSource - In the implementation block
@property (assign,nonatomic) BOOL hasMenuItemFetchCompleted;                                         //@synthesize hasMenuItemFetchCompleted=_hasMenuItemFetchCompleted - In the implementation block
@property (nonatomic,retain) NSArray * menuCells;                                                    //@synthesize menuCells=_menuCells - In the implementation block
@property (nonatomic,retain) VUILibraryMenuItemViewCell * menuItemSizingCell;                        //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (nonatomic,retain) NSArray * homeShares;                                                   //@synthesize homeShares=_homeShares - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * currentHomeShareMediaLibrary;                         //@synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary - In the implementation block
@property (nonatomic,retain) VUILibraryBannerCollectionViewCell * bannerViewSizingCell;              //@synthesize bannerViewSizingCell=_bannerViewSizingCell - In the implementation block
@property (nonatomic,retain) VUILibraryShelvesDataSource * shelvesDataSource;                        //@synthesize shelvesDataSource=_shelvesDataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * shelves;                                               //@synthesize shelves=_shelves - In the implementation block
@property (nonatomic,retain) NSMutableArray * validShelfTypes;                                       //@synthesize validShelfTypes=_validShelfTypes - In the implementation block
@property (assign,nonatomic) BOOL hasMediaEntitiesFetchCompleted;                                    //@synthesize hasMediaEntitiesFetchCompleted=_hasMediaEntitiesFetchCompleted - In the implementation block
@property (nonatomic,retain) _VUILibrarySeeAllController * currentSeeAllController;                  //@synthesize currentSeeAllController=_currentSeeAllController - In the implementation block
@property (assign,nonatomic) BOOL doesDeviceSupportHDR;                                              //@synthesize doesDeviceSupportHDR=_doesDeviceSupportHDR - In the implementation block
@property (nonatomic,readonly) VUIMediaLibrary * mediaLibrary;                                       //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                         //@synthesize familyMember=_familyMember - In the implementation block
+(id)_localizedTitleForShelfType:(long long)arg1 ;
+(/*^block*/id)shelfTypesSortComparator;
-(void)dealloc;
-(void)start;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)_menuItems;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(NSMutableArray *)shelves;
-(void)_accountsChanged:(id)arg1 ;
-(void)setShelves:(NSMutableArray *)arg1 ;
-(void)_updateNavigationTitle;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)_deviceMediaLibrary;
-(VUILibraryMenuItemViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(BOOL)vui_ppt_isLoading;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(id)_dataSourceForShelves;
-(void)shelvesDidFinishWithDataSource:(id)arg1 ;
-(void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4 ;
-(void)seeAllButtonPressed:(id)arg1 ;
-(void)setHomeShares:(NSArray *)arg1 ;
-(void)_removeMediaLibraryNotificationObservers;
-(NSArray *)homeShares;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_addMediaLibraryNotificationObservers;
-(UIBarButtonItem *)libraryBarButton;
-(void)setLibraryBarButton:(UIBarButtonItem *)arg1 ;
-(VUILibraryMenuDataSource *)menuDataSource;
-(BOOL)_gestureRecognizerShouldBegin;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1 ;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(id)initWithMenuDataSource:(id)arg1 ;
-(void)setMenuDataSource:(VUILibraryMenuDataSource *)arg1 ;
-(void)didSelectMenuItemAtIndexPath:(id)arg1 ;
-(void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2 ;
-(VUIMediaLibrary *)currentHomeShareMediaLibrary;
-(void)setCurrentHomeShareMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(BOOL)hasMediaEntitiesFetchCompleted;
-(void)setHasMediaEntitiesFetchCompleted:(BOOL)arg1 ;
-(void)_updateViewIfFetchComplete;
-(id)_localizedTitleForCellType:(long long)arg1 ;
-(void)_selectLibraryCellType:(long long)arg1 ;
-(void)_constructShelves;
-(NSMutableArray *)validShelfTypes;
-(void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2 ;
-(_VUILibrarySeeAllController *)currentSeeAllController;
-(void)_showContentOrNoContentView;
-(BOOL)hasMenuItemFetchCompleted;
-(void)setHasMenuItemFetchCompleted:(BOOL)arg1 ;
-(BOOL)_haveAllInitialFetchesCompleted;
-(void)_constructLibraryDataSourceAndUpdateActiveView;
-(BOOL)_shouldShowContentView;
-(id)_viewControllerWithCellType:(long long)arg1 ;
-(VUILibraryShelvesDataSource *)shelvesDataSource;
-(NSArray *)menuCells;
-(void)setMenuCells:(NSArray *)arg1 ;
-(VUILibraryBannerCollectionViewCell *)bannerViewSizingCell;
-(void)setBannerViewSizingCell:(VUILibraryBannerCollectionViewCell *)arg1 ;
-(void)setShelvesDataSource:(VUILibraryShelvesDataSource *)arg1 ;
-(void)setValidShelfTypes:(NSMutableArray *)arg1 ;
-(void)setCurrentSeeAllController:(_VUILibrarySeeAllController *)arg1 ;
-(BOOL)doesDeviceSupportHDR;
-(void)setDoesDeviceSupportHDR:(BOOL)arg1 ;
@end

