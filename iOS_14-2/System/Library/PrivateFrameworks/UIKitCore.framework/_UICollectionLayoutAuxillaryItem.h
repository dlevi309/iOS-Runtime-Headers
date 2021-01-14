/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSString *)elementKind;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(NSCollectionLayoutDecorationItem *)decorationItem;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSDirectionalEdgeInsets)contentInsets;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutSize *)size;
-(NSCollectionLayoutItem *)item;
-(long long)zIndex;

@end

