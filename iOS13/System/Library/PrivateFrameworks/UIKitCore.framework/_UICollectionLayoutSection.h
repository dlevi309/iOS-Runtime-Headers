/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutGroup, NSArray, NSIndexSet;

@interface _UICollectionLayoutSection : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutGroup* _layoutGroup;
	NSDirectionalEdgeInsets _contentInsets;
	double _interGroupSpacing;
	long long _orthogonalScrollingBehavior;
	NSArray* _boundarySupplementaryItems;
	BOOL _supplementariesFollowContentInsets;
	/*^block*/id _visibleItemsTransformer;
	NSArray* _decorationItems;
	NSArray* _supplementaryItems;
	NSIndexSet* _pinnedSupplementaryItemIndexes;

}

@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double interGroupSpacing;                               //@synthesize interGroupSpacing=_interGroupSpacing - In the implementation block
@property (assign,nonatomic) long long orthogonalScrollingBehavior;                  //@synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                     //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (assign,nonatomic) BOOL supplementariesFollowContentInsets;                //@synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets - In the implementation block
@property (nonatomic,copy) id visibleItemsTransformer;                               //@synthesize visibleItemsTransformer=_visibleItemsTransformer - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                                //@synthesize decorationItems=_decorationItems - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                             //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * pinnedSupplementaryItemIndexes;              //@synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes - In the implementation block
+(id)layoutSectionWithLayoutGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(double)interGroupSpacing;
-(BOOL)supplementariesFollowContentInsets;
-(NSArray *)boundarySupplementaryItems;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(id)initWithLayoutGroup:(id)arg1 ;
-(long long)orthogonalScrollingBehavior;
-(NSIndexSet *)pinnedSupplementaryItemIndexes;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setInterGroupSpacing:(double)arg1 ;
-(void)setOrthogonalScrollingBehavior:(long long)arg1 ;
-(void)setSupplementariesFollowContentInsets:(BOOL)arg1 ;
-(void)setPinnedSupplementaryItemIndexes:(NSIndexSet *)arg1 ;
-(id)_apiRepresentation;
-(id)initWithLayoutGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(BOOL)arg6 visibleItemsTransformer:(/*^block*/id)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10 ;
-(id)visibleItemsTransformer;
-(void)setVisibleItemsTransformer:(id)arg1 ;
@end

