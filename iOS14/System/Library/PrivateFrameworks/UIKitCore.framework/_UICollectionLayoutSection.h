/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(id)initWithLayoutGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(BOOL)arg6 visibleItemsTransformer:(/*^block*/id)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10 ;
-(NSArray *)boundarySupplementaryItems;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(NSDirectionalEdgeInsets)contentInsets;
-(void)setSupplementariesFollowContentInsets:(BOOL)arg1 ;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setOrthogonalScrollingBehavior:(long long)arg1 ;
-(long long)orthogonalScrollingBehavior;
-(BOOL)supplementariesFollowContentInsets;
-(void)setPinnedSupplementaryItemIndexes:(NSIndexSet *)arg1 ;
-(id)_apiRepresentation;
-(double)interGroupSpacing;
-(id)initWithLayoutGroup:(id)arg1 ;
-(void)setInterGroupSpacing:(double)arg1 ;
-(id)visibleItemsTransformer;
-(void)setVisibleItemsTransformer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)pinnedSupplementaryItemIndexes;
@end

