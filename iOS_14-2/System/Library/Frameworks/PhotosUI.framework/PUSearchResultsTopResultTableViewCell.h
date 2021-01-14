/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol PUTopResultDelegate;
@class NSArray, UICollectionView, NSMutableDictionary, NSString;

@interface PUSearchResultsTopResultTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<PUTopResultDelegate> _delegate;
	NSArray* _localAssetIdentifiers;
	UICollectionView* _collectionView;
	NSMutableDictionary* _items;

}

@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * items;                          //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<PUTopResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * localAssetIdentifiers;                        //@synthesize localAssetIdentifiers=_localAssetIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(id<PUTopResultDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(NSMutableDictionary *)items;
-(void)setDelegate:(id<PUTopResultDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_setupGestureRecognizer;
-(void)_setupCollectionView;
-(void)setLocalAssetIdentifiers:(NSArray *)arg1 ;
-(void)setAsset:(id)arg1 image:(id)arg2 forIndex:(unsigned long long)arg3 ;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(CGSize)_collectionViewCellSize;
-(long long)numberOfItemsInCollectionView;
-(NSArray *)localAssetIdentifiers;
-(void)handleTap:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

