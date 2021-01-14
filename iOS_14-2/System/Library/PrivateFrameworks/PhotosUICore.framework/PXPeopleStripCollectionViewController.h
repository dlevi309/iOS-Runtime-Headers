/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@protocol PXPeopleStripCollectionViewControllerDelegate;
@class PXPeopleDataSource, PXPeopleStripCollectionViewCell, NSString;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching> {

	id<PXPeopleStripCollectionViewControllerDelegate> _delegate;
	PXPeopleDataSource* _dataSource;
	PXPeopleStripCollectionViewCell* _preloadedCell;

}

@property (assign,nonatomic,__weak) id<PXPeopleStripCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PXPeopleDataSource * dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXPeopleStripCollectionViewCell * preloadedCell;                                //@synthesize preloadedCell=_preloadedCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id<PXPeopleStripCollectionViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PXPeopleDataSource *)dataSource;
-(void)setDelegate:(id<PXPeopleStripCollectionViewControllerDelegate>)arg1 ;
-(void)setDataSource:(PXPeopleDataSource *)arg1 ;
-(void)viewDidLoad;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)contentWidthChanged;
-(PXPeopleStripCollectionViewCell *)preloadedCell;
-(void)setPreloadedCell:(PXPeopleStripCollectionViewCell *)arg1 ;
@end

