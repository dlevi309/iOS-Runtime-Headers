/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class UICollectionView;

@interface PUImportChangeDetailsCollectionViewHelper : NSObject {

	UICollectionView* _collectionView;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 changeHistory:(id)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)applyChangeDetails:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

