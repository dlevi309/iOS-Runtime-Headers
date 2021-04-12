/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUILibrarySplitViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@class VUIFamilyMember, VUILibraryMenuDataSource, VUILibrarySplitViewController, UIViewController, UINavigationController, VUIViewControllerContentPresenter, VUIMediaLibrary, NSString;

@interface VUILibraryIpadMainViewController : UIViewController <VUILibraryDataSourceDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate, VUIFamilySharingContentProtocol> {

	BOOL _ppt_isLoaded;
	BOOL _areLocalMediaItemsAvailable;
	VUIFamilyMember* _familyMember;
	VUILibraryMenuDataSource* _menuDataSource;
	VUILibrarySplitViewController* _librarySplitViewController;
	UIViewController* _downloadViewController;
	UINavigationController* _downloadNavigationViewController;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUIMediaLibrary* _mediaLibrary;

}

@property (assign,nonatomic) BOOL areLocalMediaItemsAvailable;                                        //@synthesize areLocalMediaItemsAvailable=_areLocalMediaItemsAvailable - In the implementation block
@property (nonatomic,retain) VUILibraryMenuDataSource * menuDataSource;                               //@synthesize menuDataSource=_menuDataSource - In the implementation block
@property (nonatomic,retain) VUILibrarySplitViewController * librarySplitViewController;              //@synthesize librarySplitViewController=_librarySplitViewController - In the implementation block
@property (nonatomic,retain) UIViewController * downloadViewController;                               //@synthesize downloadViewController=_downloadViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * downloadNavigationViewController;               //@synthesize downloadNavigationViewController=_downloadNavigationViewController - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                    //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,readonly) VUIMediaLibrary * mediaLibrary;                                        //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                          //@synthesize familyMember=_familyMember - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(VUIMediaLibrary *)mediaLibrary;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dealloc;
-(id)_deviceMediaLibrary;
-(BOOL)vui_ppt_isLoading;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(BOOL)areLocalMediaItemsAvailable;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_addMediaLibraryNotificationObservers;
-(VUILibraryMenuDataSource *)menuDataSource;
-(void)setAreLocalMediaItemsAvailable:(BOOL)arg1 ;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(BOOL)_gestureRecognizerShouldBegin;
-(void)_updateVisibleViewControllerForCategories:(id)arg1 error:(id)arg2 ;
-(VUILibrarySplitViewController *)librarySplitViewController;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1 ;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(UIViewController *)downloadViewController;
-(void)setDownloadViewController:(UIViewController *)arg1 ;
-(void)_declareLaunchDidFinish;
-(UINavigationController *)downloadNavigationViewController;
-(void)_setupDownloadViewController;
-(BOOL)_shouldShowSplitViewWithCategories:(id)arg1 ;
-(id)initWithMenuDataSource:(id)arg1 ;
-(void)setLibrarySplitViewController:(VUILibrarySplitViewController *)arg1 ;
-(void)librarySplitViewControllerShouldDismiss:(id)arg1 ;
-(void)setMenuDataSource:(VUILibraryMenuDataSource *)arg1 ;
-(void)setDownloadNavigationViewController:(UINavigationController *)arg1 ;
@end

