/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol VUILibraryPopoverDataSource, VUILibraryPopoverDelegate;
@class VUILibraryListPopoverView, NSString, NSIndexPath;

@interface VUILibraryPopoverViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	VUILibraryListPopoverView* _popoverView;
	BOOL _requiresRelayout;
	NSString* _popoverTitle;
	NSIndexPath* _selectedItemIndexPath;
	id<VUILibraryPopoverDataSource> _dataSource;
	id<VUILibraryPopoverDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * popoverTitle;                                 //@synthesize popoverTitle=_popoverTitle - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedItemIndexPath;                            //@synthesize selectedItemIndexPath=_selectedItemIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryPopoverDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryPopoverDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VUILibraryPopoverDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryPopoverDelegate>)arg1 ;
-(id<VUILibraryPopoverDataSource>)dataSource;
-(void)setDataSource:(id<VUILibraryPopoverDataSource>)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)_configureNavigationBar;
-(void)_dismissPopover;
-(id)initWithPopoverTitle:(id)arg1 ;
-(NSString *)popoverTitle;
-(NSIndexPath *)selectedItemIndexPath;
-(void)setSelectedItemIndexPath:(NSIndexPath *)arg1 ;
@end

