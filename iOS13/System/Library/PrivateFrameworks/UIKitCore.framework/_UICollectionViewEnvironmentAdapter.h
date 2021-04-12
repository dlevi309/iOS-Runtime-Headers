/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCollectionLayoutEnvironment_Private.h>
#import <UIKitCore/_UIDataSourceSnapshot.h>
#import <libobjc.A.dylib/NSCollectionLayoutContainer.h>

@class UICollectionView, NSString, UITraitCollection;

@interface _UICollectionViewEnvironmentAdapter : NSObject <NSCollectionLayoutEnvironment_Private, _UIDataSourceSnapshot, NSCollectionLayoutContainer> {

	UICollectionView* _collectionView;

}

@property (assign,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSCollectionLayoutContainer> container; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) id<_UIDataSourceSnapshot> _dataSourceSnapshot; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
-(id<NSCollectionLayoutContainer>)container;
-(CGSize)contentSize;
-(UITraitCollection *)traitCollection;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)effectiveContentSize;
-(NSDirectionalEdgeInsets)effectiveContentInsets;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id<_UIDataSourceSnapshot>)_dataSourceSnapshot;
-(id)initWithCollectionView:(id)arg1 ;
-(id)_collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

