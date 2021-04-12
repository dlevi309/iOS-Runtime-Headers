/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class UICollectionViewLayout, NSMutableDictionary, NSMutableArray;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {

	UICollectionViewLayout* _fromLayout;
	UICollectionViewLayout* _toLayout;
	CGRect _fromVisibleBounds;
	CGRect _toVisibleBounds;
	CGSize _contentSize;
	BOOL _haveValidInfos;
	double _transitionProgress;
	NSMutableDictionary* _transitionInformationsDict;
	NSMutableDictionary* _currentLayoutInfos;
	BOOL _layoutIsValid;
	NSMutableArray* _disappearingLayoutAttributes;
	NSMutableArray* _appearingLayoutAttributes;
	double _accuracy;

}

@property (assign,nonatomic) double transitionProgress;                             //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * currentLayout;              //@synthesize fromLayout=_fromLayout - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * nextLayout;                 //@synthesize toLayout=_toLayout - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidateLayout;
-(UICollectionViewLayout *)currentLayout;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setCollectionView:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 ;
-(UICollectionViewLayout *)nextLayout;
-(CGRect)_oldVisibleBounds;
-(CGRect)_newVisibleBounds;
-(double)transitionProgress;
-(id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(double)arg3 ;
-(void)updateValue:(double)arg1 forAnimatedKey:(id)arg2 ;
-(double)valueForAnimatedKey:(id)arg1 ;
@end

