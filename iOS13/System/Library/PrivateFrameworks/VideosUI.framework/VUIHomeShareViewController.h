/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol VUIHomeShareViewControllerDelegate;
@class NSArray, VUILibraryMenuItemViewCell, VUIViewControllerContentPresenter, VUIMediaLibrary, NSString;

@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {

	id<VUIHomeShareViewControllerDelegate> _delegate;
	NSArray* _homeShares;
	VUILibraryMenuItemViewCell* _menuItemSizingCell;
	VUIViewControllerContentPresenter* _contentPresenter;
	VUIMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) NSArray * homeShares;                                                //@synthesize homeShares=_homeShares - In the implementation block
@property (nonatomic,retain) VUILibraryMenuItemViewCell * menuItemSizingCell;                     //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,readonly) VUIMediaLibrary * mediaLibrary;                                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic,__weak) id<VUIHomeShareViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VUIHomeShareViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIHomeShareViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(VUIMediaLibrary *)mediaLibrary;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)_deviceMediaLibrary;
-(VUILibraryMenuItemViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(void)setHomeShares:(NSArray *)arg1 ;
-(void)_removeMediaLibraryNotificationObservers;
-(NSArray *)homeShares;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_addMediaLibraryNotificationObservers;
@end

