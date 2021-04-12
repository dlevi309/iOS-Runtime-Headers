/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class GKGameRecord, UIViewController, NSString;

@interface GKGameLayerCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	GKGameRecord* _gameRecord;
	UIViewController* _presentationViewController;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                                         //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic,__weak) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)cellSpacing;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(long long)itemCount;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(NSString *)title;
@end

