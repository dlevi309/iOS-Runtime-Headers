/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout, UITableView, NSString;

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout* _flowLayout;
	UITableView* _table;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)layoutSubviews;
-(id)initWithTable:(id)arg1 ;
-(void)reloadData;
-(void)_setIndexColor:(id)arg1 ;
-(void)_doneTapped;
-(void)_cellTapped:(id)arg1 ;
@end

