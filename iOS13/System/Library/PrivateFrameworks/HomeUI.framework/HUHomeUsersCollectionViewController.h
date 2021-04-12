/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemCollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class HFHomeBuilder, NSString;

@interface HUHomeUsersCollectionViewController : HUItemCollectionViewController <UICollectionViewDelegateFlowLayout> {

	HFHomeBuilder* _homeBuilder;
	double _cellWidth;
	double _cellAvatarDiameter;

}

@property (nonatomic,retain) HFHomeBuilder * homeBuilder;              //@synthesize homeBuilder=_homeBuilder - In the implementation block
@property (assign,nonatomic) double cellWidth;                         //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic) double cellAvatarDiameter;                //@synthesize cellAvatarDiameter=_cellAvatarDiameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)_horizontalInset;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setCellWidth:(double)arg1 ;
-(double)cellWidth;
-(void)setCellAvatarDiameter:(double)arg1 ;
-(double)cellAvatarDiameter;
-(double)_verticalInset;
-(HFHomeBuilder *)homeBuilder;
-(void)_presentAccountUnavailableAlert;
-(id)initWithHomeBuilder:(id)arg1 ;
-(BOOL)isLayoutDependentOnItemState;
-(void)setHomeBuilder:(HFHomeBuilder *)arg1 ;
@end

