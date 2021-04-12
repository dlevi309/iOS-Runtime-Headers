/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceIdentifying.h>
#import <UIKit/UICollectionViewDataSource.h>

@class __UIDiffableDataSource, NSString;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource> {

	__UIDiffableDataSource* _impl;

}

@property (nonatomic,retain) __UIDiffableDataSource * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,copy) id supplementaryViewProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)snapshot;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(__UIDiffableDataSource *)impl;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)supplementaryViewProvider;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(BOOL)_isDiffableDataSource;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setImpl:(__UIDiffableDataSource *)arg1 ;
@end

