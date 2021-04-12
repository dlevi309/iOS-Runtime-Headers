/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class UICollectionViewLayoutAttributes, NSArray;

@interface SBStarkNotificationLayout : UICollectionViewLayout {

	UICollectionViewLayoutAttributes* _notificationAttributes;
	UICollectionViewLayoutAttributes* _previousNotificationAttributes;
	NSArray* _subActionsAttributes;
	NSArray* _previousSubActionsAttributes;
	UICollectionViewLayoutAttributes* _backgroundAttributes;
	UICollectionViewLayoutAttributes* _previousBackgroundAttributes;
	double _notificationHeight;
	double _transitionSpacing;
	UIEdgeInsets _subActionsInsets;
	double _subActionPadding;
	double _subActionHeight;

}

@property (assign,nonatomic) double notificationHeight;                  //@synthesize notificationHeight=_notificationHeight - In the implementation block
@property (assign,nonatomic) double transitionSpacing;                   //@synthesize transitionSpacing=_transitionSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subActionsInsets;              //@synthesize subActionsInsets=_subActionsInsets - In the implementation block
@property (assign,nonatomic) double subActionPadding;                    //@synthesize subActionPadding=_subActionPadding - In the implementation block
@property (assign,nonatomic) double subActionHeight;                     //@synthesize subActionHeight=_subActionHeight - In the implementation block
-(id)init;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(void)setNotificationHeight:(double)arg1 ;
-(id)_transitionAttributesForAction:(long long)arg1 withLayoutAttributes:(id)arg2 ;
-(double)notificationHeight;
-(double)transitionSpacing;
-(void)setTransitionSpacing:(double)arg1 ;
-(UIEdgeInsets)subActionsInsets;
-(void)setSubActionsInsets:(UIEdgeInsets)arg1 ;
-(double)subActionPadding;
-(void)setSubActionPadding:(double)arg1 ;
-(double)subActionHeight;
-(void)setSubActionHeight:(double)arg1 ;
@end

