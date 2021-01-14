/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider; 
@property (nonatomic,copy) id supplementaryConfigurationHandler; 
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(id)supplementaryReuseIdentifierProvider;
-(id)supplementaryViewProvider;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(UICollectionView *)collectionView;
-(id)supplementaryConfigurationHandler;
-(void)setSupplementaryConfigurationHandler:(id)arg1 ;
@end

