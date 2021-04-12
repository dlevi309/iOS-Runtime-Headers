/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SKUIDownloadsChildViewControllerDelegate;
@class UICollectionView, NSArray, _UIContentUnavailableView, SKUIClientContext, NSString;

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSArray* _downloads;
	_UIContentUnavailableView* _noContentView;
	id<SKUIDownloadsChildViewControllerDelegate> _delegate;
	BOOL _editing;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSArray * downloads;                                                       //@synthesize downloads=_downloads - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDownloadsChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIDownloadsChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIDownloadsChildViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)_cancelAction:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(NSArray *)downloads;
-(void)_reload;
-(void)setDownloads:(NSArray *)arg1 ;
-(void)reloadDownloadsAtIndexes:(id)arg1 ;
-(void)_reloadLayout;
-(void)_reloadNavigationItem;
-(void)_editAction:(id)arg1 ;
-(void)_deleteAction:(id)arg1 ;
@end

