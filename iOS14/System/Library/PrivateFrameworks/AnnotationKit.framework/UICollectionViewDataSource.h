/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
-(id)indexTitlesForCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(long long)numberOfSectionsInCollectionView:(id)arg1;

@required
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

@end

