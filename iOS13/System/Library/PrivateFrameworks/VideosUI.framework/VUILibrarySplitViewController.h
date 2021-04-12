/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <libobjc.A.dylib/VUIMenuCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/VUILibraryGridCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIHomeShareViewControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIFamilyMembersViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@protocol VUILibrarySplitViewControllerDelegate;
@class VUIFamilyMember, VUIMenuCollectionViewController, VUIMediaLibrary, UINavigationController, VUILibraryMenuDataSource, UIViewController, VUILibraryAlertView, NSMutableDictionary, NSString;

@interface VUILibrarySplitViewController : UISplitViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol> {

	BOOL _hasLoaded;
	VUIFamilyMember* _familyMember;
	id<VUILibrarySplitViewControllerDelegate> _librarySplitViewControllerDelegate;
	VUIMenuCollectionViewController* _menuViewController;
	VUIMediaLibrary* _mediaLibrary;
	UINavigationController* _masterNavigationController;
	UINavigationController* _detailNavigationController;
	VUILibraryMenuDataSource* _menuDataSource;
	UIViewController* _detailViewController;
	VUILibraryAlertView* _alertView;
	VUIMediaLibrary* _currentHomeShareMediaLibrary;
	NSMutableDictionary* _entitiesDataSourceForMenuItem;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                                                   //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) UINavigationController * masterNavigationController;                                              //@synthesize masterNavigationController=_masterNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * detailNavigationController;                                              //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,retain) VUILibraryMenuDataSource * menuDataSource;                                                        //@synthesize menuDataSource=_menuDataSource - In the implementation block
@property (nonatomic,retain) UIViewController * detailViewController;                                                          //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) VUILibraryAlertView * alertView;                                                                  //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * currentHomeShareMediaLibrary;                                                   //@synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitiesDataSourceForMenuItem;                                              //@synthesize entitiesDataSourceForMenuItem=_entitiesDataSourceForMenuItem - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                                                                   //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibrarySplitViewControllerDelegate> librarySplitViewControllerDelegate;              //@synthesize librarySplitViewControllerDelegate=_librarySplitViewControllerDelegate - In the implementation block
@property (nonatomic,retain) VUIMenuCollectionViewController * menuViewController;                                             //@synthesize menuViewController=_menuViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                                                   //@synthesize familyMember=_familyMember - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDetailViewController:(UIViewController *)arg1 ;
-(UIViewController *)detailViewController;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
-(VUILibraryAlertView *)alertView;
-(void)setAlertView:(VUILibraryAlertView *)arg1 ;
-(VUIMenuCollectionViewController *)menuViewController;
-(void)setMenuViewController:(VUIMenuCollectionViewController *)arg1 ;
-(id)_deviceMediaLibrary;
-(BOOL)vui_ppt_isLoading;
-(void)_removeMediaLibraryNotificationObservers;
-(void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2 ;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_addMediaLibraryNotificationObservers;
-(void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2 ;
-(VUILibraryMenuDataSource *)menuDataSource;
-(void)fetchDidCompleteForDataSource:(id)arg1 ;
-(id)initWithMenuDataSource:(id)arg1 ;
-(void)setLibrarySplitViewControllerDelegate:(id<VUILibrarySplitViewControllerDelegate>)arg1 ;
-(void)setMenuDataSource:(VUILibraryMenuDataSource *)arg1 ;
-(void)menuCollectionViewControllerDidFinishLoading;
-(void)didSelectMenuItemAtIndexPath:(id)arg1 ;
-(void)categoryMenuViewControllerShouldDismiss:(id)arg1 ;
-(BOOL)_shouldShowBackButton;
-(void)setMasterNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)masterNavigationController;
-(void)setDetailNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)detailNavigationController;
-(void)_setDisplayModeForLayoutType:(long long)arg1 ;
-(BOOL)_menuDataSourceHasContent;
-(id)_entitiesDataSourceForCategoryType:(long long)arg1 ;
-(void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2 ;
-(id)_entitiesDataSourceForGenre:(id)arg1 ;
-(id)_viewControllerForIndexPath:(id)arg1 ;
-(NSMutableDictionary *)entitiesDataSourceForMenuItem;
-(void)setEntitiesDataSourceForMenuItem:(NSMutableDictionary *)arg1 ;
-(void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2 ;
-(id<VUILibrarySplitViewControllerDelegate>)librarySplitViewControllerDelegate;
-(VUIMediaLibrary *)currentHomeShareMediaLibrary;
-(void)setCurrentHomeShareMediaLibrary:(VUIMediaLibrary *)arg1 ;
@end

