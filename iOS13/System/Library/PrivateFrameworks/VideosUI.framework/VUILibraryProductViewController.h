/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/VUIProductLockupViewDelegate.h>
#import <libobjc.A.dylib/VUIRoundButtonDelegate.h>

@class VUIMediaItem, VUIProductLockupView, VUILibraryProductInfoView, VUIDownloadButton, VUIViewControllerContentPresenter, NSString;

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {

	VUIMediaItem* _mediaItem;
	VUIProductLockupView* _productLockupView;
	VUILibraryProductInfoView* _productInfoView;
	VUIDownloadButton* _downloadButton;
	VUIViewControllerContentPresenter* _contentPresenter;

}

@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;              //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithMediaItem:(id)arg1 ;
-(VUIDownloadButton *)downloadButton;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(void)reportMetricsPageEvent;
-(id)_productLockupViewWithMediaItem:(id)arg1 ;
-(void)_updateAfterContentWasManuallyDeleted:(BOOL)arg1 ;
-(id)_productInfoViewWithMediaItem:(id)arg1 ;
-(id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4 ;
-(void)contentDescriptionExpanded;
@end

