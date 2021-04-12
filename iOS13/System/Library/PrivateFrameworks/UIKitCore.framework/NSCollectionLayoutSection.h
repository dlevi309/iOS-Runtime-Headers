/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionLayoutSectionCallback;
@class NSIndexSet, NSDictionary, NSArray, NSCollectionLayoutGroup;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {

	NSIndexSet* _pinnedBoundarySupplementaryItemIndexes;
	BOOL _hasBackgroundDecorationItem;
	NSDictionary* _supplementaryItemsDict;
	NSDictionary* _decorationItemsDict;
	BOOL _isEmptySection;
	BOOL _prefersListSolver;
	BOOL _supplementariesFollowContentInsets;
	double _interGroupSpacing;
	long long _orthogonalScrollingBehavior;
	NSArray* _boundarySupplementaryItems;
	/*^block*/id _visibleItemsInvalidationHandler;
	NSArray* _decorationItems;
	NSCollectionLayoutGroup* _group;
	NSArray* _supplementaryItems;
	NSIndexSet* _pinnedSupplementaryItemIndexes;
	NSDictionary* _decorationItemssDict;
	id<_UICollectionLayoutSectionCallback> _callback;
	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSCollectionLayoutGroup * group;                                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                                                      //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * pinnedSupplementaryItemIndexes;                                       //@synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes - In the implementation block
@property (nonatomic,readonly) NSDictionary * supplementaryItemsDict; 
@property (nonatomic,readonly) NSDictionary * decorationItemssDict;                                           //@synthesize decorationItemssDict=_decorationItemssDict - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                              //@synthesize contentSize=_contentSize - In the implementation block
@property (getter=_callback,nonatomic,readonly) id<_UICollectionLayoutSectionCallback> callback;              //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL prefersListSolver;                                                          //@synthesize prefersListSolver=_prefersListSolver - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double interGroupSpacing;                                                        //@synthesize interGroupSpacing=_interGroupSpacing - In the implementation block
@property (assign,nonatomic) long long orthogonalScrollingBehavior;                                           //@synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                                              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (assign,nonatomic) BOOL supplementariesFollowContentInsets;                                         //@synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets - In the implementation block
@property (nonatomic,copy) id visibleItemsInvalidationHandler;                                                //@synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                                                         //@synthesize decorationItems=_decorationItems - In the implementation block
+(id)sectionWithGroup:(id)arg1 ;
+(id)_emptySection;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGroup:(NSCollectionLayoutGroup *)arg1 ;
-(id)_callback;
-(CGSize)contentSize;
-(NSCollectionLayoutGroup *)group;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)prefersListSolver;
-(void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
-(BOOL)scrollsOrthogonally;
-(NSDirectionalEdgeInsets)contentInsets;
-(double)interGroupSpacing;
-(BOOL)supplementariesFollowContentInsets;
-(NSArray *)boundarySupplementaryItems;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1 ;
-(BOOL)_containsBackgroundDecorationItem:(id)arg1 ;
-(id)initWithGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(double)arg6 visibleItemsInvalidationHandler:(/*^block*/id)arg7 supplementariesFollowInsets:(BOOL)arg8 decorationItems:(id)arg9 orthogonalScrollingBehavior:(long long)arg10 isEmptySection:(BOOL)arg11 prefersListSolver:(BOOL)arg12 ;
-(id)initWithLayoutGroup:(id)arg1 ;
-(BOOL)_isEmptySection;
-(long long)orthogonalScrollingBehavior;
-(id)visibleItemsInvalidationHandler;
-(id)pinnedBoundarySupplementaryItemIndexes;
-(id)decorationItemsDict;
-(NSDictionary *)supplementaryItemsDict;
-(NSIndexSet *)pinnedSupplementaryItemIndexes;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(BOOL)_hasVisibleItemsHandler;
-(BOOL)_hasBackgroundDecorationItem;
-(BOOL)_containsEstimatedSizeElement;
-(id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2 ;
-(void)setInterGroupSpacing:(double)arg1 ;
-(void)setOrthogonalScrollingBehavior:(long long)arg1 ;
-(void)setSupplementariesFollowContentInsets:(BOOL)arg1 ;
-(void)setVisibleItemsInvalidationHandler:(id)arg1 ;
-(void)setPinnedSupplementaryItemIndexes:(NSIndexSet *)arg1 ;
-(NSDictionary *)decorationItemssDict;
-(void)setPrefersListSolver:(BOOL)arg1 ;
@end

