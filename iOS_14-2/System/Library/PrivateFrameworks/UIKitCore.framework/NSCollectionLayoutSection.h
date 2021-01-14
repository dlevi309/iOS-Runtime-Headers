/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _contentInsetsReference;
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
@property (assign,nonatomic) long long contentInsetsReference;                                                //@synthesize contentInsetsReference=_contentInsetsReference - In the implementation block
@property (assign,nonatomic) long long orthogonalScrollingBehavior;                                           //@synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                                              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (assign,nonatomic) BOOL supplementariesFollowContentInsets;                                         //@synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets - In the implementation block
@property (nonatomic,copy) id visibleItemsInvalidationHandler;                                                //@synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                                                         //@synthesize decorationItems=_decorationItems - In the implementation block
+(id)sectionWithListConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
+(id)sectionWithGroup:(id)arg1 ;
+(id)_emptySection;
-(void)setGroup:(NSCollectionLayoutGroup *)arg1 ;
-(NSCollectionLayoutGroup *)group;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)_didEndSwiping;
-(NSDictionary *)decorationItemssDict;
-(void)_willBeginSwiping;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(BOOL)_wantsSwipeActions;
-(long long)contentInsetsReference;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(void)setVisibleItemsInvalidationHandler:(id)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(NSDirectionalEdgeInsets)contentInsets;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1 ;
-(BOOL)_containsEstimatedSizeElement;
-(void)setSupplementariesFollowContentInsets:(BOOL)arg1 ;
-(BOOL)_containsBackgroundDecorationItem:(id)arg1 ;
-(CGSize)contentSize;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setContentInsetsReference:(long long)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(id)initWithGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 contentInsetsReference:(long long)arg3 supplementaryItems:(id)arg4 boundarySupplementartItems:(id)arg5 pinnedSupplementaryItemIndexes:(id)arg6 interGroupSpacing:(double)arg7 visibleItemsInvalidationHandler:(/*^block*/id)arg8 supplementariesFollowInsets:(BOOL)arg9 decorationItems:(id)arg10 orthogonalScrollingBehavior:(long long)arg11 isEmptySection:(BOOL)arg12 prefersListSolver:(BOOL)arg13 ;
-(BOOL)_hasVisibleItemsHandler;
-(id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2 ;
-(void)setOrthogonalScrollingBehavior:(long long)arg1 ;
-(id)decorationItemsDict;
-(long long)orthogonalScrollingBehavior;
-(BOOL)supplementariesFollowContentInsets;
-(void)setPinnedSupplementaryItemIndexes:(NSIndexSet *)arg1 ;
-(double)interGroupSpacing;
-(id)visibleItemsInvalidationHandler;
-(id)initWithLayoutGroup:(id)arg1 ;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(id)_callback;
-(id)pinnedBoundarySupplementaryItemIndexes;
-(void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
-(BOOL)_isEmptySection;
-(void)setPrefersListSolver:(BOOL)arg1 ;
-(void)setInterGroupSpacing:(double)arg1 ;
-(BOOL)scrollsOrthogonally;
-(BOOL)_hasBackgroundDecorationItem;
-(NSDictionary *)supplementaryItemsDict;
-(BOOL)prefersListSolver;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)pinnedSupplementaryItemIndexes;
-(BOOL)isEqual:(id)arg1 ;
@end

