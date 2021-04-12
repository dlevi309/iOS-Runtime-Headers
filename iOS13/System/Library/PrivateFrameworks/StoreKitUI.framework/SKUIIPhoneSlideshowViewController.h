/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;
@class SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl, NSOperationQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIClientContext* _clientContext;
	SKUIGiftThemeCollectionView* _collectionView;
	id<SKUISlideshowViewControllerDataSource> _dataSource;
	id<SKUISlideshowViewControllerDelegate> _delegate;
	UIPageControl* _pageControl;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _placeholderQueue;
	NSMutableArray* _images;
	NSMutableDictionary* _placeholderImages;
	long long _indexToScrollToOnLoadView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUISlideshowViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISlideshowViewControllerDelegate>)arg1 ;
-(id<SKUISlideshowViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SKUISlideshowViewControllerDataSource>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)currentIndex;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(void)_reloadPageControl;
-(void)_reloadSize;
-(void)_setImage:(id)arg1 atIndex:(long long)arg2 ;
-(id)_imageAtIndex:(long long)arg1 ;
-(id)_placeholderImageAtIndex:(long long)arg1 ;
@end

