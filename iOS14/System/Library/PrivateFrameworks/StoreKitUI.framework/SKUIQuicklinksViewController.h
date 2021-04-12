/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUIQuicklinksViewControllerDelegate;
@class UICollectionView, SKUIColorScheme, NSArray, SKUIQuicklinksView, NSString;

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	SKUIColorScheme* _colorScheme;
	id<SKUIQuicklinksViewControllerDelegate> _delegate;
	NSArray* _links;
	SKUIQuicklinksView* _quicklinksView;

}

@property (assign,nonatomic,__weak) id<SKUIQuicklinksViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForVisibleItems; 
@property (nonatomic,copy) NSArray * links;                                                         //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id<SKUIQuicklinksViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SKUIQuicklinksViewControllerDelegate>)arg1 ;
-(long long)_numberOfRows;
-(NSArray *)links;
-(NSArray *)indexPathsForVisibleItems;
-(void)loadView;
-(void)dealloc;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)frameForLinkAtIndex:(long long)arg1 ;
@end

