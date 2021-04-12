/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionView;

@interface _UICollectionViewEnvironmentAdapter : NSObject {

	UICollectionView* _collectionView;

}

@property (assign,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)initWithCollectionView:(id)arg1 ;
-(id)_collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)contentSize;
-(id)createEnvironment;
@end

