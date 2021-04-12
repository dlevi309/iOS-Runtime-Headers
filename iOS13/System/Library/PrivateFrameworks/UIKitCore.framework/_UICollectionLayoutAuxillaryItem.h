/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSCollectionLayoutSize, NSString, NSCollectionLayoutAnchor, NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSCollectionLayoutBoundarySupplementaryItem, NSCollectionLayoutDecorationItem;


@protocol _UICollectionLayoutAuxillaryItem <NSObject>
@property (nonatomic,readonly) NSCollectionLayoutSize * size; 
@property (nonatomic,readonly) NSString * elementKind; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * containerAnchor; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * itemAnchor; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets _effectiveContentInsets; 
@property (nonatomic,readonly) long long zIndex; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutBoundarySupplementaryItem * boundarySupplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutDecorationItem * decorationItem; 
@required
-(NSCollectionLayoutSize *)size;
-(NSCollectionLayoutItem *)item;
-(NSDirectionalEdgeInsets)contentInsets;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(long long)zIndex;
-(NSString *)elementKind;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutDecorationItem *)decorationItem;

@end

